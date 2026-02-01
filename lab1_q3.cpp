// Implement Quick Sort for arr[n] = { 4, 2, 6, 9, 2 }
#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b) {
    int temp=a;
    a=b;
    b=temp;
}
int partition(vector<int> &arr,int low,int high) {
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j) {
        while (arr[i]<=pivot && i<=high -1) {
            i++;
        }
        while (arr[j]>pivot && j>=low +1) {
            j--;
        }
        if (i<j) {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;

}
void quicksort(vector<int> &arr,int low,int high) {
    if (low<high) {
        int parttion=partition(arr,low,high);
        quicksort(arr,low,parttion-1);
        quicksort(arr,parttion +1 ,high);
    }
}
int main() {
    vector<int> arr={4, 2, 6, 9, 2};
    int low=0;
    int high=arr.size()-1;
    cout<<"before quick sort"<<endl;
    for (int num:arr) {
        cout<<num<<" ";
    }
    quicksort(arr,low,high);
    cout<<endl;
    cout<<"after quicksort"<<endl;
    for (int num:arr) {
        cout<<num<<" ";
    }
    return 0;
}