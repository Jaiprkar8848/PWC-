/*
Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.

Sample Input: r=3
Sample Output: Area : 28.26
               Circumference : 18.84
*/

#include<iostream>
using namespace std;

void print(int r){
    float pi=3.14;
    cout<<"Area : "<<pi*r*r<<endl;
    cout<<"Circumference : "<<2*pi*r;
}
int main(){
    int r=3;
    print(r);

    return 0;
}