//Searching in array(linear search)
// #include<iostream>
// using namespace std;
// int searchArray(int n,int key,int arr[]){
//         for(int i=0;i<n;i++){
//             if(arr[i]==key){
//                 return i;
//             }
//         }
//         return -1;
//     }
// int main(){
    
//     int n,key;
//     cout<<"Enter the length of array :";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Enter the element to search"<<endl;
//     cin>>key;
//     cout<<"The index of "<<key<<" is "<<searchArray(n,key,arr);


//     return 0;
// }


//Binary Search
#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int e=n,s=0;
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

    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key to search";
    cin>>key;
    cout<<"The index of the "<<key<<" is"<<binarySearch(arr,n,key);

    return 0;
}