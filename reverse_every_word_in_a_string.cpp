#include <iostream>
#include <string>
#include <vector>
using namespace std;
 

int main()
{
    string s = "welcome to the jungle";
    vector<string> name;
    string substring = "";
    for (int i = 0 ; i < s.length() ; i++)
    {
        if (s[i]== ' ')
        {
            name.insert(name.begin(), substring); 
            substring="";
        }
        else if ( i==s.length()-1)
        {
            substring+=s[s.length()-1];
            name.insert(name.begin(), substring); 
        }
        else
            substring+=s[i];
    }
    for (auto x : name)
    {
        cout << x << " ";
    }
    return 0;
}
