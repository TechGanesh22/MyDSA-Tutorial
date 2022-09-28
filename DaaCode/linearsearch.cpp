#include<iostream>
using namespace std;
/*
Searching Algorithims are designed to check for an element or retrive an element from any data structure where it is stored.Based on the type of search operation these alorithims are generally classified into two categories.
1.Sequential search
In this the list or array is traversed sequentially and every element is checked.
Ex.Linear Search
2.Interval Search:
These algorithims are specifically designed for searching in sorted data structures. These type of searching algorithims are much more efficient than linear search as they repeatedly target the center of the search structure and divide the search space in half
Ex.Binary Search

*/

int linearsearch(int s[],int n){
    int temp=-1;
    for(int i=0;i<5;i++){
        if(s[i]==n){
            cout<<"The number "<<n<<" "<<"found at index "<<i;
            temp=0;
        }
    }
    if(temp==-1){
        cout<<"The number is not found!";
    }
}

int main(){
    int arr[5]={4,7,12,45,67};
    int num;
    cout<<"Enter the number you want to search :";
    cin>>num;
    linearsearch(arr,num);


    return 0;
}