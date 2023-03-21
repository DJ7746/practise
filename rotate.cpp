#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &arr, int k)
{
    
    vector <int> ans(arr.size());
    for (int i = 0; i < arr.size(); i++)
    {
          ans[(i+k)%arr.size()]=arr[i];
    }
    arr=ans;
}

void rotatearr(int *arr,int n,int k){

    int a[n]={0};
    for (int i = 0; i < n; i++)
    {
        a[(i+k)%n]=arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i]=a[i];
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
   int a[7]={1,2,3,4,5,6,7};
   rotatearr(a,7,3);
   print(a,7);    
   
    return 0;
}