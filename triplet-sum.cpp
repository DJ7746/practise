#include <iostream>
#include <vector>
using namespace std;

vector<int> tripletsum(int arr[], int n, int target)
{

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    ans.push_back(arr[k]);
                }
            }
        }
    }
    return ans;
}

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v = tripletsum(a, 5, 12);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << "  ";
    }

    return 0;
}