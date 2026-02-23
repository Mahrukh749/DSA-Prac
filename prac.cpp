#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {3, 5, 7, 9, 11};
    int n = 5;

    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum element is: " << max << endl;
    return 0;
};