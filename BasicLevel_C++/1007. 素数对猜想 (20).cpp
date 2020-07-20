#include <iostream>
using namespace std;
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0) return false;
    return true;
}
int main() {
    int N, cnt = 0;
    cin >> N;
    for (int i = 5; i <= N; i++)
        if (isprime(i-2) && isprime(i)) cnt++; //18 ms	384 KB
    cout << cnt;
    return 0;
}
/*
#include <bits/stdc++.h>

using namespace std;

int n;
int st[100010];


int main()
{
    cin >> n;
    int last = 2;
    int res = 0;
    vector<int> primes;
    for(int i = 2; i <= n; i++) //线性筛法 4 ms	896 KB 比上面的解答快了4.5倍
		{
			if(!st[i]) {
                primes.push_back(i);
                if(i - last == 2) res ++;
                last = i;
            }
			for(int j = 0; primes[j] <= n / i; j++)//在这个循环里面，i的作用表示质数的倍数
			{                                     //i的大小从2开始往上增长
				st[primes[j] * i] = true;
				if(i % primes[j] == 0) break;   //如果某个i是某个质数的倍数，
			}
		}
    cout << res;
    return 0;
}
*/