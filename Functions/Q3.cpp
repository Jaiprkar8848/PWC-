/*
Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.

Sample Input: 19
Sample Output: Yes
Sample Input: 17
Sample Output: No
*/

#include<iostream>
using namespace std;

void check_eligibility(int a){
    if(a>18){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int age;
    cin>>age;
    check_eligibility(age);

    return 0;
}