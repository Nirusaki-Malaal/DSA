#include <iostream>
#include <map>
#include <string>
using namespace std;

int main ()
{
    string a = "IV";
    map<char, int> dict = {{'I',1} , {'X',10} , {'L',50} , {'C',100} , {'D', 500} , {'M', 1000} , {'V',5}};
    int num = 0;
    for (int i = 0 ; i < a.length()-1 ; i+=2)
    {
        if (dict[a[i]] < dict[a[i+1]])
        {
            num  = num + dict[a[i+1]] - dict[a[i]];
        }
        else
        {
            num = num + dict[a[i]] + dict[a[i+1]];
        }
    }
    cout << num;
    return 0;
}
