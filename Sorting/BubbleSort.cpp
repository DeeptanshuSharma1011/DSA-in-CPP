// Basic funda - push the maximum to the last by adjacent swaps

#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//time complexity
// worst and average - O(n^2)
//best - O(n)