/*
8 - Write a C++ program to print a triangle of prime numbers upto given number of lines of the triangle. 
Sample input : Please enter the no of lines 6
Sample output : 
 2
 3 5 
 7 11 13 
 17 19 23 29 
 31 37 41 43 47 
 53 59 61 67 71 73*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int number=3;
    int banner;
    for(int i=1;i<=n;i++){
        //to print the space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        
        if(i==1){
            cout<<"2"<<endl;
        }
        else{
            for(int j=0;j!=i){
                banner=0;
                for(int k=2;k<3;k++){
                    if(3%k==0){
                        banner=1;
                    }
                    if(banner==0){
                        j++;
                        cout<<3<<" ";
                    }

                }
if((Number%k)==0)
Banner=1;
}
if(Banner==0)
{ x3++;
cout<<Number<<" ";
}
Number++;
}
cout<<"\n";
}
            }
        }
        cout<<endl;
    }
}