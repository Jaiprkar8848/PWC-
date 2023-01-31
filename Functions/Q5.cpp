/*
Q5 - Given two numbers a and b, write a program to print all the prime numbers present between
a and b.
Sample Input: 2 10
Sample Output: 2 3 5 7
*/

#include<iostream>
using namespace std;

bool isPrimes(int n){
    if(n<=1){
        return true;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrimes(i)==1){
            cout<<i<<" ";
        }
    }

    return 0;
}