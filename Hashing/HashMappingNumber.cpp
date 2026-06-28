/*
hashing using map 
why? normal hashing takes full hash array and iterates 
while in mapping it works in <key, value> pair so does not make any other hash array 
just iterates over the existing array and stacks the required number or characters with its value(frequency)
map stores in sorted order
*/

#include<iostream>
#include<map>
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
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    //iterate in the map
    // for(auto it : mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }


    //queries
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        //fetch
        cout<<mpp[number]<<endl;
    }
}