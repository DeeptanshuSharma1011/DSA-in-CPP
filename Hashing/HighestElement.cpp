#include<iostream>
#include<map>
#include<algorithm>
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
    auto it = mpp.rbegin();
    cout<<"Largest element: "<< it->first <<endl;
    


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