#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;
int main()
{
    string s1 = "paper";
    string s2 = "title";
    unordered_map<char, char> b;
    if (s1.length() != s2.length())
        {
            cout << "NOT ISOMORPHIC";
            return 0;
        }
    for (int i = 0 ; i < s1.length() ; i++)
    {
        if( b[s1[i]] == '\0')
            b[s1[i]] = s2[i];
        else if (b[s1[i]] != s2[i] )
        {
            cout << "NOT ISOMORPHIC";
            return 0;
        }
    }
    cout << "They are isomorphic";
    return 0;
}
