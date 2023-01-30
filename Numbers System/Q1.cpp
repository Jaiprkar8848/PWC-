/*
Q1 - Print the sum of the first 5 decimal numbers from 1 to 5 in binary format

Sample Input: 1,2,3,4,5
Sample Output: 1111
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    int sum=0;
    for(int i=1;i<=5;i++){
        sum+=i;
    }
    int ans=0;
    while(sum>0){
        int parityBit=sum%2;
        sum=sum/2;
        ans=ans*10+parityBit;
    }
    cout<<ans;
    return 0;
}