/*
Q10- Write a C++ program to print a rectangle out of *

Sample Input :
Please Enter the number of StarRows:
2
Please Enter the number of StarColumns:
3
***
***
*/
#include<iostream>
using namespace std;

int main(){
    int rows,columns;
    cout<<"Please Enter the number of StarRows:"<<endl;
    cin>>rows;
    cout<<"Please Enter the number of StarColumns:"<<endl;
    cin>>columns;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}