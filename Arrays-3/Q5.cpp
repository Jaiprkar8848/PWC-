/*
Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
of unique pairs that exist in the array whose absolute sum is exactly x.

Input: [1,2,3,4,6] x=7
Output: 2
Explanation:
1,6 and 3,4 sum to 7

Input: [3,1,3,5,3] x=6
Output: 2
Explanation: The unique pairs are 3,3 and 1,5

Input: [2,2,2] x=4
Output: 1
Explanation:
The only unique pair is 2,2
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={2,2,2};
    int n=arr.size();
    int x=4;
    int unique_pairs=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                arr[i]=arr[j]=0;
                unique_pairs++;
            }
        }
    }
    cout<<unique_pairs;

    return 0;
}