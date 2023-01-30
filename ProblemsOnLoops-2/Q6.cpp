/*
Q6.Write a program to print Alphabet Diamond Pattern

    A
   ABC
  ABCDE
 ABCDEFG   
ABCDEFGHI
 ABCDEFG   
  ABCDE
   ABC   
    A
    */

#include<iostream>
using namespace std;
int main(){
    int n=5;
    
    //For upper triangle
    for(int i=1;i<=n;i++){
        int spaces=n-i;
        //for spaces
        while(spaces>0){
            cout<<" ";
            spaces--;
        }
        //printing line of characters
        int total_characters=2*i-1;
        for(int j=0;j<total_characters;j++){
            char ch=(char)('A'+j);
            cout<<ch;
        }
        cout<<endl;
    }

    //For lower triangle
    for(int i=n-1;i>0;i--){
        //for spaces
        int spaces=n-i;
        while(spaces>0){
            cout<<" ";
            spaces--;
        }
        //for line of characters
        int total_characters=2*i-1;
        for(int j=0;j<total_characters;j++){
            char ch=(char)('A'+j);
            cout<<ch;
        }
        cout<<endl;
    }

}