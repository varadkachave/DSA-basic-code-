#include <iostream>
using namespace std;

void printarray(char arr[], int size)
    {

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " " << endl;
        }
    }

int main()
{
    char ch[5]={'s','d','e','g','w'};
    printarray(ch,5);
    
}