/*
Q6. Write a program to calculate marks to grades . Follow the conversion rule as given below :

100 – 90 = A+
90 – 80 = A
80 – 70 = B+
70 – 60 = B
60 – 50 = C
50 – 40 = D
40 – 30 = E
30 – 0 = F

Sample Input : Enter Your Marks: 98
Sample Output : Your Grade is A+
*/

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Your Marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"Your Grade is A+";
    }
    else if(marks>=80){
        cout<<"Your Grade is A";
    }
    else if(marks>=70){
        cout<<"Your Grade is B+";
    }
    else if(marks>=60){
        cout<<"Your Grade is B";
    }
    else if(marks>=50){
        cout<<"Your Grade is C";
    }
    else if(marks>=40){
        cout<<"Your Grade is D";
    }
    else if(marks>=30){
        cout<<"Your Grade is E";
    }
    else if(marks<=30){
        cout<<"Your Grade is F";
    }
    else{
        cout<<"Marks you entered is invalid!";
    }

    return 0;
}