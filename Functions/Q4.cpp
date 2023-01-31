/*
Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers
between them.
Sample Input: 1 10
Sample Output: 1 3 5 7 9
*/

#include<iostream>
using namespace std;

void print_odd(int a,int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    print_odd(a,b);

    return 0;
}