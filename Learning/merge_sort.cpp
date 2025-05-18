// Merge Sort Algorithm from scratch will take input of numbers and then sort them using Quick sort.
#include<iostream>
#include<cmath>
using namespace std;

void merge(int (&arr)[6], int st, int mid, int ed){
    int i=st;
    int j=mid+1;
    int tarr[1+ed-st];
    int tidx=0;
    while(i<=mid && j<=ed){
        if(arr[i]>arr[j]){
            tarr[tidx]=arr[j];
            j++;
            tidx++;
        }else{
            tarr[tidx]=arr[i];
            i++;
            tidx++;
        }
    }
    while(i<=mid){
        tarr[tidx]=arr[i];
        i++;
        tidx++;
    }
    while(j<=ed){
        tarr[tidx]=arr[j];
        j++;
        tidx++;
    }
    i=st;
    for(int l:tarr){
        arr[i]=l;
        i++;
    }
}

void MergeSort(int (&arr)[6], int st, int ed){
    if(st<ed){
        int pividx=st+(ed-st)/2;
        MergeSort(arr,st,pividx);
        MergeSort(arr,pividx+1,ed);
        merge(arr,st,pividx,ed);
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
    MergeSort(arr, 0 , size-1);
    for(int i:arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}