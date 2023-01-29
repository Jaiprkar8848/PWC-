/*
Q5 - Write a program to calculate the sum of digits of a 3 digit number. (Hard)

Sample Input : 123
Sample Output : 6
*/

#include<iostream>
using namespace std;

int main(){
    int n=123;
    int first=n/100;
    n=n%100;
    int second=n/10;
    int third=n%10;
    int sum=first+second+third;
    cout<<sum;

    return 0;
}