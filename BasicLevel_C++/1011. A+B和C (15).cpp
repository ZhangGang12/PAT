#include <iostream>
using namespace std; //主要考察大数的表示
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        long long int a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        printf("Case #%d: %s\n", i + 1, a + b > c ? "true" : "false");
    }
    return 0;
}