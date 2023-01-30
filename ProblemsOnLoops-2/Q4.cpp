/*
Q4 - Write a program to reverse a given integer number.

Sample Input : 538
Sample Output : 835*/

#include<iostream>
using namespace std;

int main(){
    int n=538;
    int reversed=0;
    while(n!=0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    cout<<reversed;
    return 0;
}