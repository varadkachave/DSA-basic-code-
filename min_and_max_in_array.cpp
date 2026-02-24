#include <iostream>
using namespace std;

void findMinMax(int arr[], int size)
{
    int minimum = arr[0];
    int maximum = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < minimum)
            minimum = arr[i];

        if(arr[i] > maximum)
            maximum = arr[i];
    }

    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;
}

int main()
{
    int arr[] = {8, 6, 9, 5, 22, 5};
    int size = 6;

    findMinMax(arr, size);

    return 0;
}