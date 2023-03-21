#include <iostream>
using namespace std;

int firstoccurence(int *arr, int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastoccurence(int *arr, int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}



int main()
{

    int a[6] = {1, 2, 3, 3, 4, 5};
    pair <int,int> ans;
    ans.first=firstoccurence(a,6,3);
    ans.second=lastoccurence(a,6,3);
    cout<<ans.second-ans.first+1;
    
    
    
    return 0;
}