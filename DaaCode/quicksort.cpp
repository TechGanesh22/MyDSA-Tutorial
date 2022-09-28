#include<iostream>
using namespace std;
int Partition(int arr[],int s,int e){
    int pivot = arr[e];
    int pIndex =s;
    for(int i=s;i<e;i++){
        if(arr[i]<=pivot){
            int temp=arr[i];
            arr[i]=arr[pIndex];
            arr[pIndex]=temp;
            pIndex++;
        }
    }
    int temp=arr[e];
    arr[e]=arr[pIndex];
    arr[pIndex]=temp;

    return pIndex;
}

void quickSort(int arr[],int s,int e){
    if(s<e){
        int p=Partition(arr,s,e);
        quickSort(arr,s,p-1);//recursive quicksort call for left partition
        quickSort(arr,p+1,e);//recursive quicksort call for right partition
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
    quickSort(myarr,l,r);
    cout<<"Sorted Array :"<<endl;
    for(int i=0;i<5;i++){
        cout<<myarr[i]<<" ";
    }

    return 0;
}