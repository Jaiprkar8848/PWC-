/*
Q3 - Given an integer array and its size, reverse the array and print it . Here 1<size<101.

For ex: arr[]={1,2,3,4,5} n=5
Output: 5,4,3,2,1
arr[]={1,1,1,1,1] n=5
Output: 1,1,1,1,1
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    int i=0;
    int j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}