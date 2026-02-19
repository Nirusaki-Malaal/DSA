#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;


bool palindrome_check(string s)
{
    for (int i = 0  ; i < s.length()  ; i++)
    {
        if (s[i] != s[s.length()-1-i])
            return false;
    }
    return true;
}

int main()
{
    string s =  "babad";
    int n = 0;
    string max = "";
    while (n < s.length())
    {
    for (int i = 0 ;  i < s.length() ; i++)
    {
        string x = "";
        for (int j  = i ; j < i + n + 1  && j < s.length(); j++)
            x+= s[j];
        if (x.length() == n+1 && palindrome_check(x) &&  x.length() > max.length())
        max = x;
            
    }
    n++;
    }
    cout << max;
    return 0;
    
}
