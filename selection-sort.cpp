#include <iostream>
using namespace std;

void selection(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int a[5] = {64, 25, 12, 22, 11};

    selection(a, 5);
    print(a, 5);

    return 0;
}