#include <iostream>
using namespace std;

const int SIZE = 100;

void swap(int* num1,int* num2)
{
    int* save = num1;
    *num1=*num2;
    *num2=*save;
}
void initArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}
void reverseArray(int* arr,int size)
{
for(int i=0;i<=size/2;i++)
{
    swap(arr[i],arr[size-i-1]);
}
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}
int main()
{
    int arr[SIZE], size;
    cout << "Enter the number of elements : ";
    cin >> size;
    initArray(arr, size);
    reverseArray(arr, size);
    cout << endl;
    printArray(arr,size);
}

