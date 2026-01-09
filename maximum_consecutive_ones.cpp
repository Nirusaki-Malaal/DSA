#include <iostream>
using namespace std;
int main() {
    int arr[] = {1, 1, 0, 0, 1, 1, 1, 0};
    int max =0,counter = 0;
    for (int i =0 ; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        if(arr[i]==0)
        {
            if(counter > max)
                max=counter;
            counter=0;
        }
        else
            counter++;
    }
    cout << "largest " << max;
    return 0;
}
