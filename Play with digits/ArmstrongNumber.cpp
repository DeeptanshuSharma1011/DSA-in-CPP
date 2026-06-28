#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int dup = n;
    int digits=0;
    int temp=n;
    //count digits
    while(temp>0){
        digits++;
        temp /= 10;
    }

    //calculate armstrong number
    int sum = 0;
    while (n > 0) {
        int lastdigit = n % 10;
        sum += pow(lastdigit,digits);
        n /= 10;
    }   
    //check armstrong number
    if(dup == sum){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}