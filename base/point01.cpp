#include<iostream>
using namespace std;

int main()
{
    int a = 100,b = 100;
    int *a_p,*b_p;
    a_p = &a;
    b_p = &b;
    cout << "a_p:" << a_p << ",b_p:" << b_p << endl;
    cout << "a:" << *a_p << "b:" << *b_p << endl;
    return 0;
}
