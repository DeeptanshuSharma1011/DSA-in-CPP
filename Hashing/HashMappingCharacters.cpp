#include<iostream>
#include<map>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //precompute
    map<char, int> mpp;
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
    }

    //queries
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<mpp[c]<<endl;
    }

}