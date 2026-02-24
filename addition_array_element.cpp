#include <iostream>
using namespace std;
void printarray(int arr[],int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        cout << arr[i] << " ";
    }
}
void add(int arr[], int size)
{
    int sum = 0;
     for(int i = 0 ; i < size ; i++)
    {
        sum = sum  + arr[i];
    }
    cout << " sum of array element is :- " << sum << endl;
}

int main()
{
    int arr[6]={8,6,9,5,22,5};
    printarray(arr,6);
    cout << endl;
    add(arr,6);
    

}