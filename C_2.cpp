#include <iostream>
using namespace std;
char f[100];
bool c[100];
string s;
void xuli(int n, int k, int length)
{
    for (int i = 0;i <= n;i++) 
        if (c[i] == true)
        {
            c[i] = false;
            s += f[i];
            if (length == k) cout << s << endl;
            else xuli(n, k, length + 1);
            c[i] = true;
            s.erase(s.length() - 1);
        }
}
int main()
{    
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {f[i] = i + 97; c[i] = true;}
    xuli(n, k, 1);
    return 0;
}