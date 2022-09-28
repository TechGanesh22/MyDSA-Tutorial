#include<iostream>
using namespace std;

void selectionSort(int arr[]){
   for(int i=0;i<4;i++){
       int min=i;
       for(int j=i+1;j<5;j++){
          if(arr[j]<arr[min]){//here if we just check arr[j]>arr[min] then array sorted in descending order.
              min=j;
          }
       }
       if(min != i){
           int temp=arr[min];
           arr[min]=arr[i];
           arr[i]=temp;
       }
   }
}

int main(){
    int myarr[5];
    cout<<"Enter 5 integer in random order :"<<endl;
    for(int i=0;i<5;i++){
        cin>>myarr[i];
    }
    cout<<"Unsorted Array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<myarr[i]<<" ";
    }
    cout<<endl;
    selectionSort(myarr);
    cout<<"Sorted Array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<myarr[i]<<" ";
    }
    return 0;
}