#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int revN=0;
    int dup = n;
    while (n > 0) {
        int lastdigit = n % 10;
        revN=(revN*10)+lastdigit;
        n = n / 10;
    }
    if(dup == revN){
        cout<<"true";
    }else cout<<"false";
}