/*
Q1 - Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

For ex: arr[]={1,2,3,4,5} n=5
Output: Odd Numbers = 3
Even Numbers = 2
Explanation: The even numbers present in the array are 2,4 and the odd numbers present in the array
are 1,3 and 5.
*/

#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    int even=0,odd=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout<<"Odd Numbers = "<<odd<<endl;
    cout<<"Even Numbers = "<<even;

    return 0;
}