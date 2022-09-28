#include<iostream>
using namespace std;
int main(){

    // char button;
    // cout<<"Input a Character :";
    // cin>>button;
    // if(button=='a'){
    //     cout<<"Hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Hii"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Guud Mng"<<endl;
    // }

    // else{
    //     cout<<"Welcome to you but I can't understand your command!"<<endl;
    // }
    char button;
    cin>>button;
    switch(button){
    case 'a':
          cout<<"Hello";
          break;
    case 'b':
          cout<<"Hii";
          break;
    case 'c':
          cout<<"Hurrah";
          break;
    case 'd':
          cout<<"Gd Mng";
          break;
    default:
          cout<<"I can't understand the instruction that you Give";
          break;
         
}


    return 0;
}