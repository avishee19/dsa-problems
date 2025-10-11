//Remove duplicates from a sorted array
#include<iostream>
using namespace std;

int removedup(int arr[], int n){
    if(n==0 || n==1)
    return n;
    int j=0;
    for(int i=1; i<n; i++){
        if (arr[i]!= arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }
}

int main(){
    int arr[] = {1,2,2,3,3,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    removedup(arr, n);
    return 0;
}
