/*
Q7- Write a program to print + pattern given below : (Medium)

      *
      *
    ***** 
      * 
      * 
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    int mid=n/2+1;
    for(int i=1;i<=n;i++){
        if(i==mid){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            int spaces=n-mid;
            while(spaces>0){
                cout<<" ";
                spaces--;
            }
            cout<<"*";
            cout<<endl;
        }

    }
}