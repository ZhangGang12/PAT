#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int arr[10000]; //3n+1可能最大的数
bool cmp(int a, int b) {return a > b;} //用来排序，将大的放在前面
int main() {
    int k, n, flag = 0;
    cin >> k; //输入的个数
    vector<int> v(k);
    for (int i = 0; i < k; i++) {
        cin >> n;
        v[i] = n;  //存储输入的个数
        while (n != 1) { //计算卡拉兹猜想
            if (n % 2 != 0) n = 3 * n + 1;
            n = n / 2;
            if (arr[n] == 1) break;
            arr[n] = 1; //存储已经出现过的卡拉兹数
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        if (arr[v[i]] == 0) {
            if (flag == 1) cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
    return 0; //这个题最重要的是理解某个数可以被其他数字所覆盖
                //比如一开始输入的3，一开始是不计入的，但是在计算别的数的时候，会被计入，3就不会算
                //否则3也算关键数
}