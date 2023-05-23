#include <iostream>
using namespace std;

int* f()
{
    int res = 10;
    cout << &res << endl;
    return &res;
}

int main()
{
    int* pA = new int;
    pA = f();
    cout << pA << endl;
    delete pA;
    return 0;
}
