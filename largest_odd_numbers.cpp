#include <iostream>
#include <string>
#include <climits>
using namespace std;
int main()
{
cout << "Enter a string\n";
string s;
cin >> s;
int largest = INT_MIN;
int n = s.length();
bool notfound = true; 
while (n >=0 && notfound)
{
    for (int i = 0 ;  i < s.length() ; i++)
    {
        int x = 0 ;
        for (int j  = i ; j < i + n + 1  && j < s.length(); j++)
            x = x * 10  + (int)s[j]-48;
        if ( x % 2 !=0)
    {
        notfound = false;
        if ( x > largest)
            largest = x;
    }
    }
 n--;
}
if (largest == INT_MIN)
    cout << "No odd number in the string";
else
    cout << "largest number is " << largest;
return 0;
}
