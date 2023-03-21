#include <iostream>
#include <vector>
using namespace std;

vector<int> sort(int *arr, int n)
{

    vector<int> ans;
   for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            ans.insert(ans.begin(), arr[i]);
        }

        if (arr[i] == 1)
        {
            ans.insert(ans.end(), arr[i]);
        }
    }
    return ans;
}

int main()
{

    int a[7] = {0, 1, 0, 1, 0, 1, 1};
       
    int i=0, j=6;
    while(i<j){

        if(a[i]==1 && a[j]==0){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else if(a[i]==0){
            i++;
         }
         else if(a[j]==1){
            j--;
         }

    }

    for (int i = 0; i < 7; i++)
    {
        cout<<a[i]<<" ";
    }
    
                                                           /* vector<int> v = sort(a, 7);
                                                               for (auto it = v.begin(); it != v.end(); it++)
                                                                            {
                                                                              cout << *it << " ";
                                                                        }*/

    return 0;
}