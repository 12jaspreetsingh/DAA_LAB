// Consider an array arr[] =
//     {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}
// and use Binary Search to find the target 23.
#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> arr,int find) {

    int i=0;
    int j=arr.size()-1;
    while (i<j) {
        int mid=i+(j-i)/2;
        if (arr[mid] ==  find) return mid;
        else if (arr[mid] > find) {
            j=mid-1;
        }
        else {
            i=mid +1;
        }
    }
    return -1;
}
int main() {
    int find=23;
    vector<int> arr={2,5,8,12,16,23,38,56,72,91};
    cout<<"the given number "<<find<<" is present at"<<" "<<binary_search(arr,find)<<" position";
    return 0;
}