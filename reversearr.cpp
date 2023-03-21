#include <iostream>
using namespace std;

void reverse(int *arr,int n){

    int s=0;
    int e=n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    
}

int main(){
    int a[5]={1,3,6,2,4};
    reverse(a,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }
    
return 0;
}