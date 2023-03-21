#include <iostream>
using namespace std;


void unique(int arr[],int n){

    
    for (int i = 0; i < n; i++)
    {   int count=0;
        int data=arr[i];
        for (int j = 0; j < n; j++)
        {
            if(arr[j]==data){
                count++;
            }
        }
        if(count==1){
            cout<<data;
        }
        
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
    int a[7]={2,3,7,6,3,6,2};
    unique(a, 7);
return 0;
}