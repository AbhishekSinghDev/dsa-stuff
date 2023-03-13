#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int length, int start) {

    if(start >= length-1) {
        return;
    }
    int minIndex = start;
    for(int i=start; i<length; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex=i;
        }
        swap(arr[minIndex], arr[start]);
    }
    selectionSort(arr, length, start+1);
}

int main() {

    int input[] = {4,3,1,0,8};
    int n = sizeof(input) / sizeof(input[0]);
    selectionSort(input, n, 0);

    cout<<"n: "<<n<<endl;
    for(int i=0; i<n; i++) {
        cout<<input[i]<<" ";
    }

    return 0;
}