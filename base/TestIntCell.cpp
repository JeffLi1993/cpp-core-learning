#include <iostream>
#include "IntCell.h"
using namespace std;

int main()
{
    //IntCell m;
    IntCell m(3);

    //m.write(5);
    cout << "Cell value:" << m.read() << endl;
    
    return 0;
}
