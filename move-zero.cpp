#include <iostream>
using namespace std;

void zero(int *arr,int n){
    int i=0;
    int j=0;

    for ( j ; j < n; j++)
        {
            if(arr[j]!=0){
                swap(arr[j],arr[i]);
                i++;
            }
        }   
        
    
    
}

void print(int*arr,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){

    int a[6]={0,3,1,4,0,12};
    zero(a,6);
    print(a,6);


return 0;
}