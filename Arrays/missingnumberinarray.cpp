#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,6};
    for (int i = 0 ; i < 4 ; i++ )
    {
        if (arr[i]+1 != arr[i+1])
             cout << arr[i] +1 ;
    }
    return 0;
}
