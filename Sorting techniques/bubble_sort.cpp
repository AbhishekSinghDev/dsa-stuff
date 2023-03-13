#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &nums) {
    int n = nums.size();

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n-i-1; j++) {
    //         if(nums[j] > nums[j+1]) {
    //             swap(nums[j], nums[j+1]);
    //         }
    //     }
    // }

    // second way to write loop
    // TC - 0(N^2) - worst, average
    // TC - 0(N) - best case (by some optimizations)
    for(int i=n-1; i>=1; i--) {
        int didSwap = 0;
        for(int j=0; j<=i-1; j++) {
            if(nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
                didSwap = 1;
            }
        }
        if(didSwap == 0) {
            break;;
        }
    }
}

int main() {

    vector<int> nums = {1,5,2,3,7};
    bubble_sort(nums);

    for(vector<int> :: iterator it=nums.begin(); it!=nums.end(); it++) {
        cout<<*(it)<<" ";
    }

    return 0;
}