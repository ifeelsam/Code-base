#include<iostream>
using namespace std;

//linear search
int main(){
    int n,search, num, flag=0;
    cout<<"Enter size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Esizeter your desired elemesizet: ";
    cin>>search;
    for(int i=0; i<n; i++){
        if(arr[i]== search){
            flag= 1;
            num = i+1;
            break;
        }
    }
    if (flag == 1){
        cout<<"Element is found at "<<num<<"th index!"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
    }

    return 0; 
}