#include<iostream>
#include<math.h>
using namespace std;
int main(){

    // How to reverse a number
    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;
    // int reverse =0;
    // while(n>0){
    //     int lastdigit = n%10;
    //     reverse=reverse*10 + lastdigit;
    //     n=n/10;
    // }
    // cout<<reverse;

    // Check a number is Armstrong number or not
    int n;
    cout<<"Enter a number :";
    cin>>n;
    int sum=0;
    int originaln=n;
    
    while(n>0){
      int rem= n%10;
      sum=sum+(rem*rem*rem);
      n=n/10;
    }
    if(sum==originaln){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not an Armstrong number";
    }
    return 0;
}