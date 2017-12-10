#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c=1;
    cout << "Enter 1st\n";
    cin >> a;
    cout << "\nEnter 2nd\n";
    cin >> b;
    if (b>a)
    {
        swap (a,b);
    }
    while (c!=0)
    {
        c=a-((a/b)*b);
        a=b;
        if (c!=0)
        {
            b=c;
        }
    }
    
    cout << "\nRezult: " << b << endl;  
    
    return 0;
}
