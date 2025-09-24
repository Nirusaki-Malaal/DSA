#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12,6,14,8};
    int k=3;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0 ; i < k-1 ; i++)
    {
        for (int j=0 ; j < size-i-1 ; j++)
        {
            if (arr[j] > arr[j+1])           
            {
            arr[j] = arr[j] + arr[j+1];
            arr[j+1] = arr[j] - arr[j+1];
            arr[j] = arr[j] - arr[j+1];
            }
        }
    
        
    }
    cout << arr[k-1] ;  
    return 0;
}
