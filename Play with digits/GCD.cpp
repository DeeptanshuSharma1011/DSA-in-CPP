#include<iostream>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b)a = a%b;
        else b = b%a;
    }
    if(a==0) return b;
    return a;
}

int main(){
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    int factor(int gcd);
    cout<<gcd(n1, n2);
}