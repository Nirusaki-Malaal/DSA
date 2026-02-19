#include <iostream>
#include <string>
using namespace std;
int  main()
{
    string s = "s-1337x07d";
    int d=0;
    int multiplier=1;
    for (char x : s)
    {
        if(x == ' ')
            continue;
        else if (d==0 && x=='-')
            multiplier = -1;
        else if( (int)x >=48 && (int)x <=57)
            d = d *10 + int(x)-48;
        else
            break;
    }
    d= d* multiplier;
    cout << d;
    return 0;
}
