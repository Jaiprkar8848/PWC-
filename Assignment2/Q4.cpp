/*
Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number. (Hard)
Sample Input : 12345
Sample Output : 1+4=5
*/

#include<iostream>
using namespace std;

int main(){
    int number=12345;
    int first=number/10000;
    number=number%10000;
    int second=number/1000;
    number=number%1000;
    int third=number/100;
    number=number%100;
    int fourth=number/10;
    int fifth=number%10;

    cout<<first+fourth;
    return 0;
}