#include <iostream>
#include<vector>
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

vector <int> sum(int *arr1,int n,int *arr2,int m){
    
    vector<int> temp;
    int sum=0;
    int carry=0;
    int ans=0;
    int i=0,j=0;
    reverse(arr1,n);

    while (i<n && j<m)
    {
       
       sum=sum+arr1[i]+arr2[j]+carry;
       carry=sum/10;
       ans=sum%10;
       temp.push_back(ans);
       sum=0;
    }
    while(i<n){
        sum=sum+arr1[i]+carry;
      carry=sum/10;
       ans=sum%10;
       temp.push_back(ans);
       sum=0;
    }

    while (j<m)
    {   
        sum=sum+arr2[j]+carry;
        carry=sum/10;
       ans=sum%10;
       temp.push_back(ans);
       sum=0;
    }
 
    return temp;
    

    
    

    




}

int main(){

    int a1[4]={1,2,3,4};
    int a2[1]={6};
   
    
return 0;
}