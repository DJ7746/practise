#include <iostream>
using namespace std;

void bubble(int *arr,int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j< n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        
    }
    
}

void print(int *arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int a[6]={10,1,4,6,14,19};
    bubble(a,6);
    print(a,6);
return 0;
}