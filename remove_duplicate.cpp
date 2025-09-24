#include <iostream>
using namespace std;
#include <vector>  
int main()
{
    vector<int> v = {1,1,2,3,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,7,7,7};
    for (int i = 0 ; i < v.size() ; i++ )
    {
        for (int j=i+1 ; j < v.size()  ; j++ )
        
        {
            if (v[j] == v[i])
            {
                v.erase(v.begin() + j);
                j--;
            }
        }
    }
    
    for (auto x : v)
    {
    cout << x << " "; 
    }
}
