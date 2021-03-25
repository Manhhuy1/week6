#include <iostream>
using namespace std;
int i;
void xuli(int n)
{
    int f[100];
    i++;
    cout << i << endl;
    xuli(n);
}
int main()
{
    xuli(n);
    return 0;
}