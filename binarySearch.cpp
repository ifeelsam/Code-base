#include<iostream>
using namespace std;

//binary search
int main(){
    int n, mid, flag=0, search, low =0, arr[10];
    cout<<"Enter the size of array: ";
    cin>>n;
    int high = n-1;
    cout<<"Enter the elements in array: ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the search element: ";
    cin>>search;
   
    while(low<=high){
        mid = (low + high)/2;
        if (arr[mid]== search){
            flag++; 
            break;
        }
        else if (arr[mid]<search){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    
    if (flag == 1){
        cout<<"found";
    }
    else 
        cout<<"not found";
    return 0;
}