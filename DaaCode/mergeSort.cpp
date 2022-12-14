#include<iostream>
using namespace std;
void merge(int arr[],int l,int m,int r){
    int i=l,j=m+1,k=l,temp[5];
    while(i<=m && j<=r){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++,k++;
        }
        else{
            temp[k]=arr[j];
            j++,k++;
        }
    }
    while(i<=m){
        temp[k]=arr[i];
        i++,k++;
    }
    while(j<=r){
        temp[k]=arr[j];
        j++,k++;
    }
    for(int p=l;p<=r;p++){
        arr[p]=temp[p];
    }

}
void mergeSort(int arr[],int l,int r){
    if(l<r){
     int m=(l+r)/2;
     mergeSort(arr,l,m);
     mergeSort(arr,m+1,r);
     merge(arr,l,m,r);
    }  
}

int main(){
   int myarr[5],l=0,r=4;
    cout<<"Enter 5 integer in random order :"<<endl;
    for(int i=0;i<5;i++){
        cin>>myarr[i];
    }
    cout<<"Unsorted Array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<myarr[i]<<" ";
    }
    cout<<endl;
    mergeSort(myarr,l,r);
    cout<<"Sorted Array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<myarr[i]<<" ";
    }
    return 0;
}