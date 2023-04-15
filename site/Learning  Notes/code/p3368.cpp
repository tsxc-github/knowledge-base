#include <bits/stdc++.h>
using namespace std;
#define LL int
#define Type LL
#define HowManyFunctions 2

struct SegmentTree
{
    Type data;
    Type lazyTag[HowManyOperation];
    LL notUpdateLazyTag = -1;  // 当为-1表示无lazyTag需要更新
    LL left;
    LL right;
    SegmentTree* leftSon = nullptr;
    SegmentTree* rightSon = nullptr;

    // 配置模板函数方法
    function< Type(Type, Type) > UpdateLazyTagFunctions[HowManyOperation] = {
        [&](Type lazyTag, Type changeNumber) { return lazyTag + changeNumber; },
        [&](Type lazyTag, Type changeNumber) {
            return lazyTag * changeNumber;
        }};
    function< void(Type&, LL, Type) > UpdateDataFunctions[HowManyOperation] = {
        [&](Type& data,
            LL Number,  // 元素个数
            Type changeNumber) { data += changeNumber * Number; },
        [&](Type& data,
            LL Number,  // 元素个数
            Type changeNumber) { data *= changeNumber; }};
    Type PushUpMode(Type a, Type b) {
        return a + b;
    };

    void PushDownMode(LL number,
                      SegmentTree* son) {  // 向下更新节点方法
        if(son->notUpdateLazyTag != notUpdateLazyTag) {
            son->PushDown();
        }
        son->notUpdateLazyTag = notUpdateLazyTag;
        son->lazyTag[notUpdateLazyTag] =
            UpdateLazyTagFunctions[notUpdateLazyTag](
                son->lazyTag[notUpdateLazyTag], lazyTag[notUpdateLazyTag]);
        UpdateDataFunctions[notUpdateLazyTag](
            son->data, number, lazyTag[notUpdateLazyTag]);
    };

    LL ComputeMiddle(LL left, LL right) {
        return (right - left) / 2 + left;  // 等价于(left+right)/2为防止溢出
    }

    // 更新当前节点
    void PushUp() {
        PushDown();
        if(leftSon != nullptr && rightSon != nullptr) {
            data = PushUpMode(leftSon->data, rightSon->data);
        }
        else if(leftSon != nullptr) {
            data = leftSon->data;
        }
        else if(rightSon != nullptr) {
            data = rightSon->data;
        }
    }

    // 释放lazyTag
    void PushDown() {
        if(notUpdateLazyTag == -1)
            return;
        if(leftSon != nullptr) {
            PushDownMode(leftSon->right - leftSon->left + 1, leftSon);
        }
        if(rightSon != nullptr) {
            PushDownMode(rightSon->right - rightSon->left + 1, rightSon);
        }
        InitLazyTag(notUpdateLazyTag);
        notUpdateLazyTag = -1;
    }

    // 区间查询
    Type Find(LL start, LL end) {
        // 无效范围
        if(left > end || right < start) {
            // 因为是模板函数，不允许return无效值，此为一个异常
            throw "无效区间查询范围";
        }

        PushDown();
        // 找到最终目标
        if((start == left) && (end == right)) {
            return data;
        }

        // 搜索左右子树
        LL middle = ComputeMiddle(left, right);
        // 只存在左子树或右子树
        if(end <= middle) {
            return leftSon->Find(start, end);
        }
        else if(start > middle) {
            return rightSon->Find(start, end);
        }
        // 分别存在左右子树
        return PushUpMode(leftSon->Find(start, middle),
                          rightSon->Find(middle + 1, end));
    }

    // 修改
    void Update(LL start, LL end, Type changeNumber, LL operation = 0) {
        // 无效范围
        if(left > end || right < start) {
            // 不可能出现无效范围
            throw "无效区间修改范围";
        }

        PushDown();
        // 找到最终目标
        if((start == left) && (end == right)) {
            if(notUpdateLazyTag != -1)
                PushDown();
            notUpdateLazyTag = operation;
            lazyTag[operation] = changeNumber;
            UpdateDataFunctions[operation](
                data, left - right + 1, changeNumber);
        }
        else {
            // 只修改左子树或右子树
            LL middle = ComputeMiddle(left, right);
            if(end <= middle) {
                leftSon->Update(start, end, changeNumber, operation);
            }
            else if(start > middle) {
                rightSon->Update(start, end, changeNumber, operation);
            }
            else {
                // 分别存在左右子树
                leftSon->Update(start, middle, changeNumber, operation);
                rightSon->Update(middle + 1, end, changeNumber, operation);
            }
        }

        PushUp();
    }

    void InitLazyTag(LL notUpdateLazyTag) {
        if(notUpdateLazyTag == -1) {
            throw "InitLazyTag时notUpdateLazyTag为-1";
        }
        if(notUpdateLazyTag == -2) {
            for(LL i = 0; i < HowManyOperation; i++) {
                InitLazyTag(i);
            }
        }
        else {
            switch(notUpdateLazyTag) {
                case 0:
                    lazyTag[notUpdateLazyTag] = 0;
                    break;
                case 1:
                    lazyTag[notUpdateLazyTag] = 1;
                    break;
                default:
                    throw "InitLazyTag时notUpdateLazyTag不在正常范围内";
            }
        }
    }
    // 建树
    SegmentTree(Type importData[], LL start, LL end) {
        left = start;
        right = end;
        InitLazyTag(-2);

        // 当为叶子结点
        if(start == end) {
            data = importData[start];
            return;
        }

        // 不为叶子结点
        LL middle = ComputeMiddle(start, end);
        // 递归建树
        leftSon = new SegmentTree(importData, start, middle);
        rightSon = new SegmentTree(importData, middle + 1, end);
        PushUp();
    }
};

void run() {
    LL n, m;
    cin >> n >> m;
    LL numbers[n];
    for(LL i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    SegmentTree tree(numbers, 0, n - 1);
    while(m--) {
        LL temp;
        cin >> temp;
        LL x, y, k;
        switch(temp) {
            case 1:
                cin >> x >> y >> k;
                // 因为输入数据从1开始计数，所以查询范围要减1
                tree.Update(x - 1, y - 1, k);
                break;
            case 2:
                cin >> x;
                printf("%lld\n", tree.Find(x - 1, x - 1));
                break;
        }
    }
}
int main() {
    try {
        run();
    }
    catch(const char* s) {
        cout << endl << "ERROR:" << s << endl;
        return 0;
    }
    return 0;
}
