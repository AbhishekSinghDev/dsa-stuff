#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int length, int beginIndex) {
    
    if(beginIndex >= length) return;
    int j = beginIndex;
    while(j > 0 && arr[j-1] > arr[j]) {
        swap(arr[j], arr[j-1]);
        j--;
    }

    insertionSort(arr, length, beginIndex+1);
}

int main() {

    int input[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(input) / sizeof(input[0]);
    insertionSort(input, n, 1);

    for(int i=0; i<n; i++) {
        cout<<input[i]<<" ";
    }
    return 0;
}