#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int length) {

    if(length == 0) {
        return;
    }
    for(int i=0; i<length-1; i++) {     // this is first step what we need to do
        if(arr[i] > arr[i+1]) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    bubbleSort(arr, length-1);  // the first step call itself again by recursion for n-i-1
}

int main() {

    int input[] = {4,3,1,0,8};
    int n = sizeof(input) / sizeof(input[0]);
    bubbleSort(input, n);

    cout<<"n: "<<n<<endl;
    for(int i=0; i<n; i++) {
        cout<<input[i]<<" ";
    }

    return 0;
}