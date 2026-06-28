//Print name n time (using recursion)

#include<iostream>
using namespace std;

void print(int i, int n){
    if(i>n) return;
    cout<<"Deepu"<<endl;
    print(i+1,n);
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    print(1,n);
}



