#include<iostream>
using namespace std;
// Length of a string using recursion
int fun(char s[]){
      if(s[0] =='\0'){
          return 0;
      }
      else{
          int smallans=fun(s+1);
          return 1+smallans;
      }
}
int main(){
    char str[100];
    cout<<"Enter a string";
    cin>>str;
    int l=fun(str);
    cout<<"The length of the string is"<<l<<endl;
}
