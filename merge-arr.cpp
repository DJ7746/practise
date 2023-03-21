#include <iostream>
#include<vector>
using namespace std;

void merge(int*arr1,int*arr2,int n,int m,int *arr3){

   
    int i=0;
    int j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }


}

int main(){
    int a1[6]={1,2,4,5,8,9};
    int a[3]={3,7,10};
    int arr3[9]={0};

    merge(a1,a,6,3,arr3);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
return 0;
}