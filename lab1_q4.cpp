// You are given a 1D array that may contain
// both positive
// and
// negative integers, and find the sum of a contiguous subarray of
// numbers which has the largest sum. For example,
// if the given array is {-2, -5, 6, -2, -3, 1, 5, -6},
// then the maximum subarray sum is 7.

#include <bits/stdc++.h>
using namespace std;
int kadenes_algo(vector<int> &arr) {
    int i=0;
    int sum=0;
    int max_sum=0;
    int n=arr.size();
    while (i<n) {
        if (sum == 0 && arr[i] < 0) {
            i++;
        }
        else {
            sum+=arr[i];
            max_sum=max(max_sum,sum);
            i++;
        }

    }
    return max_sum;

}
int main() {
    vector<int> arr={-2, -5, 6, -2, -3, 1, 5, -6};
    int ans=kadenes_algo(arr);
    cout<<ans;
    return 0;

}