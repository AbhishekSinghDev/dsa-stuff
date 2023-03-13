#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;
    // [low....mid]
    // [mid+1....high]

    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if(low == high) return;

    int mid = (low+high) / 2;
    mergeSort(arr, low, mid);   // left half
    mergeSort(arr, mid+1, high);    // right half

    merge(arr, low, mid, high);
}

int main() {
    vector<int> nums = {3, 5, 1, 8, 6};
    int n = nums.size();
    mergeSort(nums, 0, n-1);

    for(auto it: nums) {
        cout<<it<<" ";
    }

    return 0;
}