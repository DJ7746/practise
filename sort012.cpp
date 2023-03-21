#include <iostream>
#include <vector>
using namespace std;


void sort(int *arr, int n){

    int low= 0;
   int high= n-1;
   int mid=0;
   while(mid<=high){
      if(arr[mid]==0){
         swap(arr[mid],arr[low]);
         mid++;
         low++;
      }
      if(arr[mid]==1){
         mid++;
      }
      if(arr[mid]==2){
         swap(arr[mid],arr[high]);
         high--;
      }
   }

}

void printarray(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
      cout<<arr[i]<<" ";
    }
    
}

int main(){

    int a[6]={0,2,2,1,0,1};
    sort(a,6);
    printarray(a,6);

    
return 0;
}