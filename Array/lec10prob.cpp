#include<iostream>
using namespace std;
/* Program for swaping alternate start*/
void swapAlternate(int *arr,int n){
    for(int j=0;j<n;j+=2){
        if((j+1)<n){
             int temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
            // swap(arr[j],arr[j+1]);
        }
    }
}

void print(int *arr,int n){
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int n,size;
    cout<<"Enter size of the array "<<endl;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i<<"th element :";
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    print(arr,n);

    return 0;
}
/* Program for swaping alternate end*/