#include <iostream>
using namespace std;
long fibo(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibo(n) << endl;
    int a[1000];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3;i <= n;i++) f[i] = a[i - 1] + a[i - 2];
    cout << a[n];
    return 0;
}