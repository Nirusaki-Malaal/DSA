#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
#include <unordered_map>
int beauty(string s)
{
    unordered_map<char , int> h ;
    for (char x : s)
        h[x]++;
    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;
    for (auto &p : h) {
        if (p.second > maxFreq) {
            maxFreq = p.second;
        }
        if (p.second < minFreq) {
            minFreq = p.second;
        }
    }
    int beauty = maxFreq - minFreq;
    return beauty;
}


int main()
{
    string s =  "aabcbaa";
    int n = 0;
    int sumofbeauty  = 0;
    //vector<string> h; 
    while (n < s.length())
    {
    for (int i = 0 ;  i < s.length() ; i++)
    {
        string x = "";
        for (int j  = i ; j < i + n + 1  && j < s.length(); j++)
            x+= s[j];
        if (x.length() == n+1)
            sumofbeauty+=beauty(x);
            
    }
    n++;
    }
    cout << sumofbeauty;
    return 0;
    
}
