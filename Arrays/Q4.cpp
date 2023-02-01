/*
Q4 - Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101

For ex: a[]={5,6,10,4,9}
b[]={1,2,3,4,5}
Output: 5
Explanation: a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
a[3] + b[0] = 5 is the lowest possible sum amongst all the possible combinations
*/

#include<iostream>
using namespace std;

int main(){
    int a[]={5,6,10,4,9};
    int b[]={1,2,3,4,5};
    int min_sum=INT16_MAX;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int sum=a[i]+b[j];
            if(min_sum>sum){
                min_sum=sum;
            }
        }
    }
    cout<<min_sum;

    return 0;
}