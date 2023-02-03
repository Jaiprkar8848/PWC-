/*
Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose absolute difference is exactly x.
Given: n>0

input: {5,10,15,20,26}, x=10
output: Yes

input: {5,6,7,8,9}, x=4
output: Yes

input: {9,23,45,69,78},x=56
output: No*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={9,23,45,69,78};
    int n=arr.size();
    int x=56;
    int ans=-1;
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[i]-arr[j]==x){
                ans=1;
                break;
            }
        }
    }
    ans>0?cout<<"Yes":cout<<"No";

    return 0;
}