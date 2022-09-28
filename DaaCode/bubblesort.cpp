#include<iostream>
using namespace std;

void bubblesort(int *arr,int size){
     for(int i=0;i<size;i++){
         for(int j=0;j<size-i-1;j++){
             if(arr[j]>arr[j+1]){
                 int temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
     }
}
int main(){
    int n;
    cout<<"Enter size of the array "<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element :";
        cin>>arr[i];
    }

    cout<<"Before sorting :"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     bubblesort(arr,n);
     cout<<endl<<"After sorting :";
     
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     
     delete []arr;
    return 0;
}
