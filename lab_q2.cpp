// Implement Merge sort for the given array int
// arr[] = {12, 11, 13, 5, 6, 7}. After implementing Merge Sort,
// apply the same implementation
// to sort another array: int arr2[] = {38, 27, 43, 3, 9, 82, 10}.
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int start,int mid,int end) {
    vector<int> temp;
    int i=start;
    int j=mid+1;
    while (i<=mid && j<=end) {
        if (arr[i]<arr[j]) {
            temp.push_back(arr[i]);
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i<=mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j<=end) {
        temp.push_back(arr[j]);
        j++;
    }
    for (int i=start;i<=end;i++) {
        arr[i]=temp[i -  start];
    }
}
void merge_sort(vector<int> &arr,int start,int end) {
    int mid= start + (end -start)/2;
    if (start >=end) return;
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main() {
    vector<int> arr1={12, 11, 13, 5, 6, 7};
    vector<int> arr2={38, 27, 43, 3, 9, 82, 10};
    int s1 =0;
    int end1=arr1.size()-1;
    cout<<"before merge sort"<<endl;
    for (int num:arr1) {
        cout<<num<<" ";
    }
    cout<<endl;
    merge_sort(arr1,s1,end1);
    cout<<"after merge sort"<<endl;
    for (int num:arr1) {
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"-------"<<endl;
    cout<<"before merge sort"<<endl;
    for (int num:arr2) {
        cout<<num<<" ";
    }
    cout<<endl;
    merge_sort(arr2,0,arr2.size()-1);
    cout<<"after merge sort"<<endl;
    for (int num:arr2) {
        cout<<num<<" ";
    }


//TC->O(nlogn)
//SC->O(logn) recurssion stack
}