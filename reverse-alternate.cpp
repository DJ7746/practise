#include <iostream>
using namespace std;

void reversealt(int arr[], int n)
{    
    for (int i = 0; i < n; i+=2)
    {   
        if(i+1<n){
        swap(arr[i],arr[i+1]);
        
        }
        
    }
}

void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{

    int arr[5] = {2, 4, 6, 8,9};
    printarray(arr, 5);

    reversealt(arr, 5);
    printarray(arr, 5);
    return 0;
}