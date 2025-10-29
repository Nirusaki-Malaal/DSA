#include <iostream>
using namespace std;

int pow(int x,int n)
{
    if(n==0)
     return 1 ;
    else if (n> 0)
      return x * pow(x,n-1);
    else 
        return x / pow(x, -n);
}
     
int main() {
    cout << pow(3, 5);
    return 0;
}
