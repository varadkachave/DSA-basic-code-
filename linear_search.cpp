#include <iostream>
using namespace std;

/*
    Function: printArray
    Purpose : Prints all elements of the array
*/
void printArray(int arr[], int size)
{
    cout << "Array Elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
    Function: linearSearch
    Purpose : Searches for a key in the array
    Returns : true  -> if found
              false -> if not found
*/
bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[6] = {8, 6, 9, 5, 22, 5};
    int key;

    printArray(arr, 6);

    cout << "Enter value to search: ";
    cin >> key;

    bool isFound = linearSearch(arr, 6, key);

    

    if (isFound)
        cout << "Value Found in Array" << endl;
    else
        cout << "Value Not Found in Array" << endl;

    return 0;
}