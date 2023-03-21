#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector <int> interection(int arr1[],int n, int arr2[],int m){

     vector<int> ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
           
           ans.push_back(arr1[i]);
           i++;
           j++;
        }

        else if(arr1[i]>arr2[j]){
            j++;
        }

        else{
            i++;
        }
    }
    return ans;



/*
    vector <int>ans;

    for (int i = 0; i < n; i++)
    {   
        int element=arr1[i];
        for (int j = 0; j < m; j++)
        {   
            if (element<arr2[j])
            {
                break;
            }
            
            if(element==arr2[j]){
             ans.push_back(element);
             arr2[j]= INT_MIN;
             break;

            }
        }
        
    }
    return ans;         */
    
}

int main(){
    int a1[4]={1,2,3,4};
    int a2[3]={2,3,5};

    vector<int>v;
    v=interection(a1,4,a2,3);
    for (auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    
return 0;
}