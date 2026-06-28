//Print the numbers from 1 to n (using backtracking)

#include<iostream>
using namespace std;

void print(int i, int n){
    if(i<1) return;
    print(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    print(n,n);
}