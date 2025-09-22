#include <iostream>
using namespace std;
int BubbleSort(int arr[],int n, int i, int j)
{
    if (i == n)
    {
        for (int i = 0 ; i < n ; i++)
            cout << arr[i] << " ";
        return 0;
    }
    if ( j != n-i-1 )
    {
        if (arr[j] > arr[j+1])
        {
            arr[j] = arr[j] + arr[j+1];
            arr[j+1] = arr[j] -arr[j+1];
            arr[j] = arr[j] - arr[j+1];
        }
    j++;
    return BubbleSort(arr,n , i , j); 
    }
    else
    {
        i++;
        j=0;
        return BubbleSort(arr ,n, i , j);
    }
}

int main()
{
    int arr[] = {1,3,0,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr,n, 0 , 0);
    return 0;
}
