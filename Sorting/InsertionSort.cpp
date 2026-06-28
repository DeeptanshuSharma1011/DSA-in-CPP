// Basic funda - take an element and place it in its correct order

#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1] >arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
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
    insertion_sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

//time complexity
// worst and average - O(n^2)
//best - O(n)