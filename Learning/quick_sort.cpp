// Quick Sort Algorithm from scratch will take input of numbers and then sort them using Quick sort.
#include<iostream>
#include<cmath>
using namespace std;

int Partition(int (&arr)[6], int st, int ed){
    int idx=st-1;
    int pivot=arr[ed];
    for(int j=st;j<ed;j++){
        if(arr[j]<=pivot){
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[idx],arr[ed]);
    return idx;
}

void QuickSort(int (&arr)[6], int st, int ed){
    if(st<ed){
        int pividx=Partition(arr,st,ed);
        QuickSort(arr,st,pividx-1);
        QuickSort(arr,pividx+1,ed);
    }
}

int main(){
    //Input 6 Numbers every time
    int arr[6];
    cout<<"Input 6 Numbers in Array to Sort"<<endl;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    QuickSort(arr, 0 , size-1);
    for(int i:arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}