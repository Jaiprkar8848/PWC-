/*
Q2 - Write a program to print all Armstrong numbers between 100 to 500.
Explanation : A three digit number is called the Armstrong number if the sum of the cube of its digit is equal to 
the number itself.
E.g.- 153 is an Armstrong number because (13)+(53)+(33) = 153.
Sample Input : Already mentioned (100 to 500)
Sample Output :
0
1
153
370
371
407*/

#include<iostream>
using namespace std;

int main(){
    cout<<"Armstrong numbers in the range of 100 to 500 are:\n";
    for(int i=0;i<=500;i++){
        int sum=0;
        int temp=i;
        while(temp!=0){
            sum=sum+((temp%10)*(temp%10)*(temp%10));
            temp=temp/10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
}