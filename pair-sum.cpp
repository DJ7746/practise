#include <iostream>
using namespace std;

int pairsum(int *arr, int n, int target){
    
    int count=0;

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]+arr[j]==target){
				count++;
			}
		}
	}
	if(count==0){
		return -1;
	}
	return count;

    
}

int main(){
    int a[5]={1,2,3,4,5};
    int ans=pairsum(a,5,6);
    cout<<ans;
return 0;
}