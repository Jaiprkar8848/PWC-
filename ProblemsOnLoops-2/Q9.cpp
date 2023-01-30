/*
Q9- Write a C++ program to check whether a Number can be expressed as a Sum of Two Prime Numbers.
Eg. Sample Input - Enter a +ve Integer : 14
Sample Output – 
14 = 3 + 11
14 = 7 + 7
*/

#include<iostream>
using namespace std;

int isPrime(int n){
    if(n<=1)
       return 0;

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    int ans1=0;
    int ans2=0;
    cout<<"Enter a +ve Integer : ";
    cin>>n;
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<n;j++){
                if(isPrime(i)==1 && isPrime(j)==1 ){
                    if(i+j==n){
                        cout<<n<<"="<<i<<"+"<<j<<endl;
                    }
                }
        }
    }
    return 0;
}