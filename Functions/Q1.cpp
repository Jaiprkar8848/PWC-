/*
Q1 - Write a function to print squares of the first 5 natural numbers.
Sample Output: 1 4 9 16 25
*/

#include<iostream>
using namespace std;

void squareOfNumbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }
}
int main(){
    int n=5;
    squareOfNumbers(n);

    return 0;
}