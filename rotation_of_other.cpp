#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


string right_rotate(string s) 
{
    int k =1 ;
    for (int i = 0 ; i<s.length()-k; i++)
    {
        char temp = s[s.length()-1-i];
        s[s.length()-1-i]=s[s.length()-1-i-k];
        s[s.length()-1-i-k]=temp;
    }
    return s;
}


using namespace std;
int main()
{
    string s1 = "rotation";
    string goal = "tionrota";
    if (s1.length() != goal.length())
        cout << "INVALID INPUT";
    if (s1 == goal)
        cout << "0 Left/Right Rotations Required";
    for (int i  = 1 ; i <=s1.length(); i++)
    {
        if (right_rotate(s1) == goal)
        {
            cout << "The original string was rotated by " << i << " Right Rotations or " << s1.length()-i  << " Left rotations were required";
            return 0;
        }
        s1 = right_rotate(s1);
    }
    
    return 0;
}
