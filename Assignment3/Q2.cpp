/*
Q2 - Write a program to print absolute value of a number entered by the user. (Easy)

Sample Input: -1
Sample Output: 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n<0){
        n=n*(-1);
    }
    cout<<n;
    return 0;
}