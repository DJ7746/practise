#include <iostream>
using namespace std;

int peakmountain(int *arr,int n){
    int start=0;
    int end=n-1;
    int mid =start+(end-start)/2;

    while (start<=end)
    {  
        
        
       if(arr[mid+1]>arr[mid]){
        start=mid+1;
        
       }
       if(arr[mid-1]>arr[mid]){
        mid=mid-1;
       }
       else{
        return arr[mid];       }
    }
    
}

int main(){
    int a[4]={3,4,5,1};
    cout<<peakmountain(a,4);
return 0;
}