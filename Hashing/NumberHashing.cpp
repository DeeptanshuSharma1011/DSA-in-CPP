// hashing with numbers
//checking the frequency of alphabets in the the string of alphabets

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //pre compute
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    //queries
    int q;
    cout<<"Enter the number of queries you want: ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        
        //fetch
        cout<<hash[number]<<endl;
    }   
}