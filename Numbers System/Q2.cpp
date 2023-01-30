/*
Q2 - Given a natural number, find the number of 0’s in the binary representation of that number.
Note: Don’t count the preceding zeros.
For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.

Sample Input:9 
Sample Output: 2
Explanation: As the binary representation of 9 is 1001
Sample Input: 6
Sample Output: 1
Explanation: As the binary representation of 6 is 0110
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n>0){
        int parityBit=n%2;
        n=n/2;
        if(parityBit==0){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}