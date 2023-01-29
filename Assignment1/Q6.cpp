/*
Q6 - Write a C++ program to swap two numbers with the help of a third variable. (Hard)
Sample Input : 2, 3
Sample Output : 3, 2
*/

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<","<<b<<endl;
    return 0;
}