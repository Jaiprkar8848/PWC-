/*
Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose sum is exactly x.
Given: n>0
input: {-1,0,2,3}, x=2
output: Yes

input: {1,2,3,4}, x=9
output: No
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4};
    int x=9;
    int n=arr.size();
    int ans=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                ans=1;
                break;
            }
        }
    }
    ans>0?cout<<"Yes":cout<<"No";

    return 0;
}