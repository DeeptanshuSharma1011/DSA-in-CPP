//hashing with characters
//stores characters in ASCII values
//input in string, stored with the help of ASCII and output in integer(frequency of occurence).

#include<iostream>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    //pre compute
    int hash[256] = {0}; // used 256 as it is not mentioned that the string will only have lowercase or uppercase characters
                        // this will hash all the characters
    for(int i=0; i<s.size(); i++){
        hash[s[i]]++; // here also not mentioning [s[i] - 'a'], same reason
                        //automatically converts the ASCII
    }

    //queries
    int q;
    cout<<"Enter the number of queries: ";
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        //fetch
        cout<<hash[c]<<endl; // here also not mentioning [c - 'a'], same reason
    }

}

// if only lowercase use [c - 'a']
// if only uppercase use [c - 'A']
// if all the characters are there then use [256]