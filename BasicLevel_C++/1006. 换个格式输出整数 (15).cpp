#include <iostream>
using namespace std;  //正整数大于零
int main() {
    int a, i = 0;
    cin >> a;
    int b[3] = {0};
    while (a != 0) {
        b[i++] = a % 10;
        a = a / 10;
    }
    for (int k = 0; k < b[2]; k++)
        cout << "B";
    for (int k = 0; k < b[1]; k++)
        cout << "S";
    for (int k = 0; k < b[0]; k++)
        cout << k + 1;
    return 0;
}
/*
    我的无脑暴力写法
    string nums[11] = {
        "",
        "1",
        "12",
        "123",
        "1234",
        "12345",
        "123456",
        "1234567",
        "12345678",
        "123456789",
        "S"
    };
    int n;
    cin >> n;
    while(n)
    {
        if(n >= 100)
        {
            printf("B");
            n -=100;
        }else if(n >= 10)
        {
            cout << nums[10];
            n -= 10;
        }else {
            cout << nums[n];
            break;
        }
    }
*/