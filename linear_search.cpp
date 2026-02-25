#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            found = true;
            break;
        }
    }

    if(found)
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}