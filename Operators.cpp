#include<iostream>
using namespace std;
int main(){
    
    // int i=10;
    // int j;
    // j=--i;
    // cout<<i<<" "<<j<<endl;
      
    // int i=1;
    // int j=2;
    // int k;
    // k= i + j + i++ + j++ + ++i + ++j; 
    // cout<<i<<" "<<j<<" "<<k<<endl;
    // 
    // int i=1,j=2,k=3;
    // int m =i-- - j-- - k--;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;
    // cout<<m<<endl;

    // int i=10, j=20,k;
    // k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    // cout<<i<<endl;
    // cout<<j<<endl;
    // cout<<k<<endl;

    // Relational Operators in Cpp
    //    input a number and tell whether the number is less than,equal to or more than 10
    // int n;
    // cout<<"Enter a Number : ";
    // cin>>n;
    // if(n>10){
    //     cout<<"The number is greater than 10";
    // }
    // else if(n<10){
    //     cout<<"The number is less than 10";
    // }
    // else{
    //     cout<<"The number is equal to 10";
    // }
    // Write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"The number is divisible by both 2 and 3.";
    }
    else if(n%2==0 || n%3==0){
        cout<<"The number is divisible by only one of them.";
    }
    else{
        cout<<"The number is not divisible by both 2 and 3.";
    }

    
    
    

    return 0;
    
}