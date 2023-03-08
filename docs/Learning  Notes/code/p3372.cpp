#include <bits/stdc++.h>
using namespace std;
#define LL long long

template< typename Type > struct SegmentTree
{
    Type data;
    Type lazyTag;
    LL left;
    LL right;
    SegmentTree* leftSon = nullptr;
    SegmentTree* rightSon = nullptr;

    // 配置模板函数方法
    const Type null = 0;
    void UpdateLazyTag(Type& lazyTag, Type changeNumber) {
        lazyTag += changeNumber;
    }
    void UpdateData(Type& data,
                    LL Number,  // 元素个数
                    Type changeNumber) {
        data += changeNumber * Number;
    }
    // 向上更新节点方法
    Type PushUpMode(Type a, Type b) {
        return a + b;
    }
    // 向下更新节点方法(更新lazyTag)
    void PushDownMode(Type& fatherLazyTag,
                      LL Number,  // 元素个数
                      Type& sonLazyTag,
                      Type& sonData) {
        UpdateLazyTag(sonLazyTag, fatherLazyTag);
        UpdateData(sonData, Number, fatherLazyTag);
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
        if(lazyTag==null)
            return;
        if(leftSon != nullptr) {
            PushDownMode(lazyTag,
                         leftSon->right - leftSon->left + 1,
                         leftSon->lazyTag,
                         leftSon->data);
        }
        if(rightSon != nullptr) {
            PushDownMode(lazyTag,
                         rightSon->right - rightSon->left + 1,
                         rightSon->lazyTag,
                         rightSon->data);
        }
        lazyTag = null;
    }

    // 区间查询
    Type find(LL start, LL end) {
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
        LL middle =
            (right - left) / 2 + left;  // 等价于(left+right)/2为防止溢出
        // 只存在左子树或右子树
        if(end <= middle) {
            return leftSon->find(start, end);
        }
        else if(start > middle) {
            return rightSon->find(start, end);
        }
        // 分别存在左右子树
        return PushUpMode(leftSon->find(start, middle),
                          rightSon->find(middle + 1, end));
    }

    // 修改
    void Update(LL start, LL end, Type changeNumber) {
        // 无效范围
        if(left > end || right < start) {
            // 不可能出现无效范围
            throw "无效区间修改范围";
        }

        PushDown();
        // 找到最终目标
        if((start == left) && (end == right)) {
            UpdateLazyTag(lazyTag, changeNumber);
            UpdateData(data, right - left + 1, changeNumber);
        }
        else {
            // 只修改左子树或右子树
            LL middle =
                (right - left) / 2 + left;  // 等价于(left+right)/2为防止溢出
            if(end <= middle) {
                leftSon->Update(start, end, changeNumber);
            }
            else if(start > middle) {
                rightSon->Update(start, end, changeNumber);
            }
            else {
                // 分别存在左右子树
                leftSon->Update(start, middle, changeNumber);
                rightSon->Update(middle + 1, end, changeNumber);
            }
        }

        PushUp();
    }

    // 建树
    SegmentTree(Type importData[], LL start, LL end) {
        left = start;
        right = end;
        lazyTag = null;

        // 当为叶子结点
        if(start == end) {
            data = importData[start];
            return;
        }

        // 不为叶子结点
        LL middle = (end - start) / 2 + start;  // 等价于(start+end)/2为防止溢出
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
    SegmentTree< LL > tree(numbers, 0, n - 1);
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
                cin >> x >> y;
                printf("%lld\n", tree.find(x - 1, y - 1));
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
