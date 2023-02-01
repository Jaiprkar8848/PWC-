/*
Q2 - Given an integer array and its size, find the sum of the greatest and the smallest integer present
in the array. Here 1< size <101

For ex: arr[]={1,2,3,4,5} n=5
Output: 6
Explanation: The smallest number in the array is 1 and the greatest numbers in the array is 5, so the sum
will be 1+5=6
*/

#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int min=INT16_MAX,max=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min+max;
}