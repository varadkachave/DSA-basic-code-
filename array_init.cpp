#include<iostream>
using namespace std;

int main()
{
    //declare
    int array[5] = {5,44,6,9,8};

    //accessing an aarray
    cout << array[0] << endl;

    int second[3] = {5 , 6 ,8};
    cout << second[2] << endl;

    //array using loop
    int third[15]={2,7};

    int n = 15;

    for(int i = 0 ; i < n; i++)
    {
        cout << third[i] << " ";
    }
    //
}