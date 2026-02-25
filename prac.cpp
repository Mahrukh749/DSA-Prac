//
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {5, 1, 9, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] > smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }

    cout << "Second Smallest Element: " << secondSmallest;

    return 0;
}