/*
Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
calculate Profit or Loss. (Medium)
Explanation :
Formula for profit and loss
Profit = S.P - C.P
Loss = C.P - S.P
(S.P is Selling Price and C.P is Cost Price)

Sample Input :
Enter cost price: 4000
Enter selling price: 9560
Sample Output :
Profit = 5560*/

#include<iostream>
using namespace std;

int main(){
    int cp,sp;
    cout<<"Enter cost price:"<<endl;
    cin>>cp;
    cout<<"Enter selling price:"<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"Profit = "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"Loss = "<<cp-sp;
    }
    else{
        cout<<"No profit no loss";
    }
    return 0;
}