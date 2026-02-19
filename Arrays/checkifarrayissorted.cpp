#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {0,1,2,3,5,4,6};
    bool sorted1 = true;
    bool sorted2 = true;
    for (int i=0 ; i < 6 ; i++)
    {
        if (arr[i] > arr[i+1])
            {
                sorted1 = false;
            }
        if (arr [i] < arr[i+1] )
        {
            sorted2 =false;
        }
    }
    if (sorted1 || sorted2)
        cout << "YES";
    else
        cout << "NO";
  return 0;
}
