#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;
int main()
{
cout << "Enter a string\n";
string s;
cin >> s;
vector <int> h; 
int largest = INT_MIN;
int n = s.length();
while (n >=0)
{
    for (int i = 0 ;  i < s.length() ; i++)
    {
        int x = 0 ;
        for (int j  = i ; j < i + n + 1  && j < s.length(); j++)
            x = x * 10  + (int)s[j]-48;
        if ( x % 2 !=0)
        {
            bool duplicate = false;
         for (int y : h)
         {
             if (y==x)
             {
                duplicate=true;
                break;
             }
         }
         if (duplicate)
            continue;
         h.push_back(x);
        }
    }
 n--;
}
     cout << "<";
     for (int x : h)
        cout << x << ",";
     cout << ">";

return 0;
}
