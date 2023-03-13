#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr) {
    int n = arr.size();

    for(int i=0; i<n-2; i++) {
        int min = i;
        for(int j=i; j<n; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}

int main() {

    vector<int> input = {5,3,4,2,1};
    selection_sort(input);

    for(auto it: input) {
        cout<<it<<" ";
    }

    return 0;
}