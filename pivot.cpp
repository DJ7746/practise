#include <iostream>
using namespace std;

int pivot(int *arr,int n){
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        
        if (arr[mid]>=arr[0])
        {
           s=mid+1;
        }

        else{
            e=mid;
        }
        

        mid=s+(e-s)/2;
        
        
        
    }
    return s;
}

int pivot2(int *arr,int n,int key){
    
    int pivotele=pivot(arr,n);
    int s=pivotele;
    int e=n-1;
    int mid=s+(e-s)/2;
    

    while (s<=e)
    {
        if (arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]>key){
            e=mid-1;
        }

        else if(arr[mid]<key){
            s=mid+1;
        }

        mid=s+(e-s)/2;
        
    }

}



int main(){
    int a[5]={7,9,1,2,3};
    cout<<pivot2(a,5,3);

    

    
return 0;
}