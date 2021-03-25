#include <iostream>
using namespace std;
char a[100];
bool b[100];
string s;
void xuli(int n, int k, int length,int e)
{
    for (int i = e; i <= n; i++)
        if (b[i] == true)
        {
            b[i] = false;
            s += a[i];
            if (length == k) cout << s << endl;
            else xuli(n, k, length + 1,i + 1);
            c[i] = true;
            s.erase(s.length() - 1);
        }
}
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) { a[i] = i + 97; b[i] = true; }
    xuli(n, k, 1, 0);
    return 0;
}