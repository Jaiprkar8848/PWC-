/*
Q6 - Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
given by the user.
Note: The solution set must not contain duplicate triplets and should not have 3 loops.

Input: [-1,0,1,2,-1,-4] x=0
Output: 2
Explanation:
The two triplets are: -1,0,1 and 1,2,-1

Input: [1,2,3] x=5
Output: 0
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={-1,0,1,2,-1,4};
    int n=arr.size();
    int x=0;
    int triplet=0;
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=i+2;

        while(j<n && k<n){
            if(arr[i]+arr[j]+arr[k]==x){
                triplet++;
            }
            j++;
            k++;
        }
    }

    cout<<triplet;

    return 0;
}