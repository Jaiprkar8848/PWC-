/*
Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101.

Input: [0,1,2,3]
Output: [0,1,4,9]
Input: [-5,-4,-3,-2,-1]
Output: [1,4,9,16,25]
Input: [-4,-3,-1,0,2,10]
Output: [0,1,4,9,16,100]
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortSquare(vector<int> &arr,int n){
    vector<int> ans;
    int i=0,j=n-1;
    while(i<=j){
        if(abs(arr[i])>abs(arr[j])){
            ans.push_back(arr[i]*arr[i]);
            i++;
        }
        else{
            ans.push_back(arr[j]*arr[j]);
            j--;
        }
    }
    reverse(ans.begin(),ans.end());
    arr=ans;
}
int main(){
    vector<int> arr={-4,-3,-1,0,2,10};
    int n=arr.size();
    sortSquare(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}