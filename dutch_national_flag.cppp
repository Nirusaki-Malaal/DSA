#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2,0,2,1,0};
    int array_hash[3]= {0,0,0};
    for (int x: arr)
       array_hash[x]++;
    for (int i = 0 ; i < 4 ; i++)
    {
        if (i < array_hash[0])
            arr[i]=0;
        else if ( i < array_hash[0] + array_hash[1])
            arr[i]=1;
        else
            arr[i]=2;
    }
    for ( int x: arr)
    {
        cout << x << " ";
    }
    return 0;
}
