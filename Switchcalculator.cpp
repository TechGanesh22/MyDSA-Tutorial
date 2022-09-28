#include<iostream>
using namespace std;
int main(){

char ch;
float a,b;
cout<<"Enter Two Number :";
cin>>a>>b;
cout<<"Enter the task You want to Perform";
cin>>ch;
switch(ch){
 case '+':cout<<a+b<<endl;
          break;
 case '-':cout<<a-b<<endl;
          break;
 case '*':cout<<a*b<<endl;
          break;
 case '/':cout<<a/b<<endl;
          break;


default:cout<<"We cant under stand"<<endl;

}

return 0;
}