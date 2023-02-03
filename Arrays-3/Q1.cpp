/*
Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n.

Input: arr1=[1,2,3] arr2=[4,5,6]
Output: arr=[1,2,3,4,5,6]
Input: arr1=[1,3,5] arr2=[2,4,6]
Output: arr=[1,2,3,4,5,6]
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>&arr1,int m,vector<int>&arr2,int n,vector<int>&arr3){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
        }
        if(arr1[i]>arr2[j]){
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i<m){
        arr3.push_back(arr1[i++]);
    }
    while(j<n){
        arr3.push_back(arr2[j++]);
    }
}
int main(){
    vector<int>arr1={1,3,5};
    vector<int>arr2={2,4,6};
    vector<int>arr3;

    merge(arr1,3,arr2,3,arr3);

    for(int i=0;i<arr3.size();i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}