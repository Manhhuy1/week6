#include <iostream>
using namespace std;
char a[100];
bool b[100];
void xuli(string s, int k)
{
    for (int i = 0; i < s.length(); i++)
    if (b[i] == true)
    {
        b[i] = false;
        a[k] = s[i];
        if (k == s.length() - 1)
        {
            for (int e = 0; e < s.length(); e++) cout << a[e];
            cout << endl;
        }
        else xuli(s, k + 1);
        b[i] = true;
    }
}
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) b[i] = true;
    for (int i = 0; i < s.length(); i++) a[i] = s[i];
    xuli(s,0);
    return 0;
}