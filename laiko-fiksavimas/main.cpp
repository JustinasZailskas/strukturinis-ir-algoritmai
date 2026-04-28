#include <iostream>
using namespace std;

int findMaxValue(const int intArray[], int size);
int maxElemWithRecursion(const int list[], int lowerIndex, int upperIndex);
int main()
{
    int intArray[10] = {23, 43, 35, 38, 67, 12, 76, 10, 34, 8};
    int maxElem = findMaxValue(intArray, 10);
    int maxElemWithRec = maxElemWithRecursion(intArray, 0, 9);
    cout << "Didziausias masyvo elementas: "<< maxElem << endl;
    cout << "Didziausias masyvo elementas su rekursija: " << maxElemWithRec << endl;
    return 0;
}

int findMaxValue(const int intArray[], int size)
{
    int maxValue = intArray[0];
    for (int i = 1; i < size; i++)
    {
        if (intArray[i] > maxValue)
        {
            maxValue = intArray[i];
        }
    }
    return maxValue;
}

int maxElemWithRecursion(const int list[], int lowerIndex, int upperIndex){
    int max;
    if (lowerIndex == upperIndex) //size of the sublist is one
        return list[lowerIndex];
    else
    {
        max = maxElemWithRecursion(list, lowerIndex + 1, upperIndex);
        if (list[lowerIndex] >= max)
            return list[lowerIndex];
        else
            return max;
    }
}
