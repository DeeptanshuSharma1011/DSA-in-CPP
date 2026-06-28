//Printing numbers from n to 1 using recursion

#include<iostream>
using namespace std;

void print(int i, int n){
    if(i<1) return;
    cout<<i<<endl;
    print(i-1,n);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n,n);
}