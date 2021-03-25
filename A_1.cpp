#include <iostream>
using namespace std;
void check(int a[])
{
    cout << &a[0];
}
int main()
{
    int a[100];
    cout << &a[0] << endl;
    check(a);
    return 0;
    //Truyền địa chỉ
}