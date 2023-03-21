#include <iostream>
using namespace std;


void merge(int arr1[],int arr2[],int n,int m){

    int i=0;
    int j=0;
    while(i<n && j<m){
        if (arr1[i]<=arr2[j])
        {
           i++;
        }
        else if(arr1[i]>arr2[j]){
            swap(arr1[i],arr1[i++]);
            arr1[i]=arr2[j];
            j++;
            

        }
        else if (arr1[i]==0)
        {
            arr1[i]=arr2[j];
            j++;
        }
        
        
    }
}
int main(){
    int a1[6]={1,2,3,0,0,0};
    int a2[3]={2,5,6};

    merge(a1,a2,6,3);
    for (int i = 0; i < 6; i++)
    {
        cout<<a1[i]<<" ";
    }
    

return 0;
}