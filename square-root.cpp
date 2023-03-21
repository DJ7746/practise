#include <iostream>

using namespace std;

int square(int key)
{
    int start = 0;
    int end = key;
    int mid = start + (end - start) / 2;
    int ans=0;

    while (start <= end)
    {
        if (mid * mid == key)
        {
            return mid;
        }

        if (key > mid * mid)
        {   
            ans=mid;
            start = mid + 1;
        }

        else if (key < mid * mid)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
    
}

int main()
{

    int key =7;
    
    int ans = square(key);
    cout << ans;
    return 0;
}