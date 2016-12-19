#include <iostream>
using namespace std;
void mergeArr(int* p1, int size1, int* p2, int size2)
{
    int mergedArray[15];
    int i = 0;
    int j = 0;
    int k = 0;
    //това са индексите на трите сортирани масива
    while (i < size1 && j < size2)
    {
        if (p1[i] <= p2[j])
        {
            mergedArray[k++] = p1[i++];
        }
        else
        {
            mergedArray[k++] = p2[j++];
        }
    }
    while(i < size1)
    {
        mergedArray[k++] = p1[i++];
    }
    while(j < size2)
    {
        mergedArray[k++] = p2[j++];
    }
    for(int i = 0; i < 9; i++)
    {
        cout << mergedArray[i] << " ";
    }
}
int main()
{
    int firstArray[] = {1, 3, 5};
    int secondArray[] = {2, 4, 6, 7, 8, 10};
    mergeArr(firstArray, sizeof(firstArray) / sizeof(firstArray[0]), secondArray, sizeof(secondArray) / sizeof(secondArray[0]));
    return 0;
}

