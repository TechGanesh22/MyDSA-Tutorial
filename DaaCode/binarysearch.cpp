#include<iostream>
using namespace std;
int binarysearch(int *arr,int n,int key){
    int s=0,e=n;
    // for(int i=0;i<n;i++){
     while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    // }
    }
    return -1;
    
}

int main(){
    int n,key;
    cout<<"Enter size of the array "<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element :";
        cin>>arr[i];
    }
    cout<<"Enter the element to search :";
    cin>>key;
    cout<<"The element "<<key<<"is at index "<<binarysearch(arr,n,key);
    return 0;
}