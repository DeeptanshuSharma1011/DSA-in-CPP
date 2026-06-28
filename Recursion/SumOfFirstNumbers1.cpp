//Sum of first N numbers (paramaterised recursion)

#include<iostream>
using namespace std;


void print(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    print(i-1,sum+i);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(n,0);
}