#include <iostream>
using namespace std;
int revArray(int arr[],int n){
    int i=0,j=n-1;
   while(i<j){
       int temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
       i++;
       j--;
   }
}
int printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
}

int main() {
    // Write C++ code here
    //Reverse the array
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    revArray(arr,n);
    printArray(arr,n);
    return 0;
}