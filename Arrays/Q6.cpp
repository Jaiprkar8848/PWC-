/*
Q6 - Given an integer array containing n elements. Find the element in the array for which all the elements
to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101.

Ex: arr=[1,6,5,7,10,8,9]
Output: 7
Explanation: Here all the elements to the left of 7 are smaller than it and all the elements to the right of it
are greater than it.
Ex: arr=[5,6,2,8,10,9]
Output: -1
Explanation: Here there is no element in the array which satisfies the given condition.
*/

#include<iostream>
using namespace std;

//finding maximum element in left part
int leftMax(int arr[],int start,int end){
    int max=INT16_MIN;
    for(int i=start;i<end;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
//finding minimum element in right
int rightMin(int arr[],int start,int end){
    int min=INT16_MAX;
    for(int i=start;i<end;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int arr[]={1,6,5,7,10,8,9};
    int n=7;
    int ans=-1;
    for(int i=0;i<=n;i++){
        int left=leftMax(arr,0,i);
        int right=rightMin(arr,i+1,n);
        if(arr[i]>left && arr[i]<right){
            ans=arr[i];
        }
    }
    cout<<ans;
}

/*
#include <algorithm>
#include <vector>

int findElement(const std::vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n - 1; i++) {
        int leftMax = *std::max_element(arr.begin(), arr.begin() + i);
        int rightMin = *std::min_element(arr.begin() + i + 1, arr.end());
        if (arr[i] > leftMax && arr[i] < rightMin) {
            return arr[i];
        }
    }
    return -1;
}

*/