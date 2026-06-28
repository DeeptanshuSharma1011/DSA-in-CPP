#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    vector<int> ls;
    //o(swrt(n)) complexity
    for(int i=1; i*i<=n; i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    //o(nlogn) complexity where n=no of divisors
    sort(ls.begin(), ls.end());
    //o(n) complexity where n=no of divisors
    for(auto it:ls) cout<<it<<" ";
}


/*
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
*/