#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define Type LL
#define HowManyOperation 2
const LL MOD = 571373;

// 配置模板函数方法
Type PushUpMode(Type a, Type b) {
    return (a + b) % MOD;
};

struct SegmentTree
{
    Type data;
    Type lazyTag[HowManyOperation];
    LL left;
    LL right;
    SegmentTree* leftSon = nullptr;
    SegmentTree* rightSon = nullptr;

    void ChangeLazyTag(Type changeNumber, LL operation) {
        switch(operation) {
            case 0:  // 加法
                lazyTag[0] += changeNumber % MOD;
                break;
            case 1:  // 乘法
                lazyTag[1] *= changeNumber % MOD;
                lazyTag[0] *= changeNumber % MOD;
                break;
            default:
                throw "ChangeLazyTag时operation不在正常范围内";
                break;
        }
        lazyTag[1] %= MOD;
        lazyTag[0] %= MOD;
        data %= MOD;
    }

    void ChangeDataByLazyTag(Type lazyTag[],
                             LL number  // 元素个数
    ) {
        // 乘法
        data *= lazyTag[1] % MOD;
        // 加法
        data += lazyTag[0] * number % MOD;
    }

    void PushDownMode(LL number,           // 元素个数
                      SegmentTree* son) {  // 向下更新节点方法
        son->ChangeDataByLazyTag(lazyTag, number);
        son->ChangeLazyTag(lazyTag[1] % MOD, 1);  // 乘法
        son->ChangeLazyTag(lazyTag[0] % MOD, 0);  // 加法
        lazyTag[1] %= MOD;
        lazyTag[0] %= MOD;
        data %= MOD;
    }

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
        lazyTag[1] %= MOD;
        lazyTag[0] %= MOD;
        data %= MOD;
    }

    // 释放lazyTag
    void PushDown() {
        data %= MOD;
        if(leftSon != nullptr) {
            PushDownMode(leftSon->right - leftSon->left + 1, leftSon);
        }
        if(rightSon != nullptr) {
            PushDownMode(rightSon->right - rightSon->left + 1, rightSon);
        }
        InitLazyTag(lazyTag);
        data %= MOD;
    }

    // 区间查询
    Type Find(LL start, LL end) {
        // 无效范围
        if(left > end || right < start) {
            // 因为是模板函数，不允许return无效值，此为一个异常
            throw "无效区间查询范围";
        }

        data %= MOD;

        PushDown();
        // 找到最终目标
        if((start == left) && (end == right)) {
            return data;
        }

        // 搜索左右子树
        LL middle = ComputeMiddle(left, right);
        // 只存在左子树或右子树
        if(end <= middle) {
            return leftSon->Find(start, end) % MOD;
        }
        else if(start > middle) {
            return rightSon->Find(start, end) % MOD;
        }
        // 分别存在左右子树
        return PushUpMode(leftSon->Find(start, middle),
                          rightSon->Find(middle + 1, end)) %
            MOD;
    }

    // 修改
    void Update(LL start, LL end, Type changeNumber, LL operation = 0) {
        // 无效范围
        if(left > end || right < start) {
            // 不可能出现无效范围
            throw "无效区间修改范围";
        }
        lazyTag[1] %= MOD;
        lazyTag[0] %= MOD;
        data %= MOD;
        PushDown();
        // 找到最终目标
        if((start == left) && (end == right)) {
            ChangeLazyTag(changeNumber, operation);
            ChangeDataByLazyTag(lazyTag, right - left + 1);
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

    void InitLazyTag(Type lazyTag[]) {
        lazyTag[0] = 0;  // 加法
        lazyTag[1] = 1;  // 乘法
    }
    // 建树
    SegmentTree(Type importData[], LL start, LL end) {
        left = start;
        right = end;
        InitLazyTag(lazyTag);

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
void Write(Type a) {
    if(a < 0) {
        putchar('-');
        a = -a;
    }
    if(a == 0)
        return;
    Write(a / 10);
    putchar(a % 10 + '0');
}
void run() {
#ifndef ONLINE_JUDGE
    freopen("P3373_2.in", "r", stdin);
    freopen("P3373.out", "w", stdout);
#endif
    LL n, m, mod;
    cin >> n >> m >> mod;
    Type numbers[n];
    for(LL i = 0; i < n; i++) {
        LL temp;
        cin >> temp;
        numbers[i] = temp % MOD;
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
                tree.Update(x - 1, y - 1, k % MOD, 1);
                break;
            case 2:
                cin >> x >> y >> k;
                // 因为输入数据从1开始计数，所以查询范围要减1
                tree.Update(x - 1, y - 1, k % MOD, 0);
                break;
            case 3:
                cin >> x >> y;
                Write(tree.Find(x - 1, y - 1) % MOD);
                putchar('\n');
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
