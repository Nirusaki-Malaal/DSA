#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool check(string s, int k)
{
    unordered_map<char , int> h ;
    for (char x : s)
        h[x]++;
    int counter = 0;
    for (auto &x : h)
        counter++;
    if (counter == k)
        return true;
    else
        return false;
}

int main() {
    string s =  "abcbaa";
    int k = 3; 
    int n = k-1;
    while (n < s.length())
    {
    for (int i = 0 ;  i < s.length() ; i++)
    {
        string x = "";
        for (int j  = i ; j < i + n + 1  && j < s.length(); j++)
            x+= s[j];
        if (x.length() == n+1)
            if (check(x,k))
                cout << x <<" ";
            
    }
    cout << endl;
    n++;
    }
    return 0;
}
