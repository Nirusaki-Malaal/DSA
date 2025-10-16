#include <iostream>
#include <string>
using namespace std;

int  main()
{
    string s = "(1+(2*3)+((16)/4))+1";
    int index1 = 0;
    int index2 = 0;
    for (int i = 0  ; i <s.length() ; i++)
    {
        if (s[i] == '(')
            index1=i;
    }
    for (int i = s.length() ; i >index1 ; i--)
    {
     if (s[i] == ')')
        index2=i;
    }
    int digit =0;
    for (int i = index1+1 ; i <index2 ; i++)
    {
        if ((int) s[i] >=48 && s[i] <=57)
            digit = digit *10 + (int)s[i]-48;
    }
    cout << digit;
    return 0;
}
