#include <iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[6]={8,6,9,5,22,5};
    printarray(arr,6);
    cout << endl;
    reverse(arr,6);
    cout << endl;
    printarray(arr,6);

}