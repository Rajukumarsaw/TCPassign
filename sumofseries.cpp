// Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n
//terms


#include<bits/stdc++.h>
using namespace std;
int totalsum(int n){
    int sum=(((pow(10,n)-1)/81)*10)-n/9;
    return sum;
}
int main(){
    int trm;
    cout<<"enter the no. of terms"<<endl;
    cin>>trm;
    cout<<totalsum(trm);

}