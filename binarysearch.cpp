#include <iostream>
using namespace std;

int binarysearch(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        else if (arr[mid] < key)
        {
            s = mid + 1;
        }

        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{

    int a[6] = {1, 3, 7, 9, 11, 25};
    int ans = binarysearch(a, 6, 3);
    cout << ans;
    return 0;
}