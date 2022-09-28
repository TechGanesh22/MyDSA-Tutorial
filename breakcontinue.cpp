#include<iostream>
using namespace std;
int main(){
    //  int pocketMoney=3000;
    //  for(int date=1;date<=10;date++){
    //      if(date%2==0){
    //          continue;
    //      }
    //      if(pocketMoney==0){
    //          break;
    //      }
    //      cout<<date<<" Go out today!"<<endl;
    //      pocketMoney=pocketMoney-300;
    //  }

    // Check a Number is Prime or Not
    // int n,i;
    // cout<<"Enter a Number :";
    // cin>>n;
    // for(i=2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"The number "<<n<<" is Not Prime";
    //         break;
    //     }
    // }
    // if(i==n){
    //     cout<<"The Number "<<n<<" is a Prime Number!";
    // }
    
    // Check Prime Number between two number a and b
    int a,b;
    cin>>a>>b;
    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }   
        }
        if(i==num){
            cout<<num<<" ";
        }
    }
    
    return 0;
}