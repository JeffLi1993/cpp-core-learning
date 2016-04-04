#include<iostream>
using namespace std;

int main()
{
    int *p;
    int i,a[10];
    p=a;
    for(i = 0;i < 10;i++)
	cin >> *p++;
    p=a;
    for(i = 0;i < 10;i++,p++)
	cout << *p << " ";
    cout << endl;
    return 0;
}
