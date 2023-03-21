#include <iostream>
using namespace std;

void reverse(int arr[], int n){
    int start =0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }cout<<endl;
    

}

int main(){
    int a[4]={2,6,9,8};
    printarray(a,4);
    reverse(a,4);
    printarray(a,4);
return 0;
}