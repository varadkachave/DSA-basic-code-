#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(key == arr[mid])
        {
            cout << "Element found at index: " << mid;
            return;  // stop search
        }
        else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    cout << "Element not found";
}

int main()
{
    int arr[7] = {4,6,8,10,12,14,16};
    int key;

    printarray(arr, 7);

    cout << "Enter element to search: ";
    cin >> key;

    binarysearch(arr, 7, key);

    return 0;
}