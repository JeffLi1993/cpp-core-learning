#include<iostream>
using namespace std;

void copy_string(char *from,char *to);
int main()
{
    char *a = "I am BYSocket!";
    char b[] = "I am a super MAN!";
    char *p = b;
    cout << a << endl << b << endl;
    copy_string(a,p);
    cout << a << endl << b << endl;
}

void copy_string(char *from,char *to)
{
    for(;*from != '\0';from++,to++)
	*to = *from;
}
