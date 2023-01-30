/*
Q5- Create a calculator using switch statement to perform addition, subtraction, multiplication
and division.

Sample Input :
Enter an operator (+, -, *, /): -
Enter two numbers:
6
8
Sample Output : 6 - 8 = -2
*/

#include<iostream>
using namespace std;
int main(){
    char op;
    float a,b;
    cout<<"Enter an operator (+,-,*,/):";
    cin>>op;
    cout<<"Enter two number:";
    cin>>a>>b;

    switch (op)
    {
    case '+':
        cout<<a<<"+"<<b<<"="<<a+b;
        break;
    
    case '-':
        cout<<a<<"-"<<b<<"="<<a-b;
        break;

    case '*':
        cout<<a<<"*"<<b<<"="<<a*b;
        break;

    case '/':
        cout<<a<<"/"<<b<<"="<<a/b;
        break;
    
    default:
        cout<<"Your input operator is incorrect!";
        break;
    }

    return 0;
}