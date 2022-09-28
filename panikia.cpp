#include<iostream>
using namespace std;
int main(){
    
    int a,b=1;
    cout<<"Enter the number that you want the table:"<<endl;
    cin>>a;
    // while(b<=10){
    //     printf("%d * %d = %d \n",a,b,a*b);
        //    b++;
    // }
     while(b<=10){
       cout<<a<<"*"<<b<<" = "<<a*b<<endl;
       b++;
    }
    
    // for(b=1;b<=10;b++){
    //     cout<<a<<"*"<<b<<" = "<<a*b<<endl;
    // }

    return 0;
    
}

// #include <stdio.h>

// int main()
// {
//     int num,i=1;
//     // char name[30];
//     // printf("Hello kid please enter your name :");
//     // scanf("%s",name);
//     // printf("Hello %s , Welcome to this automated table learning program.\n",name);
//     printf("Enter a number :");
//     scanf("%d",&num);
    
//     while(i<=10)
//     {
        
//         printf("%d * %d = %d \n",num,i,num*i);
//         ++i;
//     }

//     return 0;
// }
