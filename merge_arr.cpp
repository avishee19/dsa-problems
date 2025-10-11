#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "enter no. of elements in 1st array: ";
    cin >> n1;
    int arr1[100];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "enter no. of elements in 2nd array: ";
    cin >> n2;
    int arr2[100];
    for (int j=0; j<n2; j++)
        cin >> arr2[j];

    int merge_arr[200]; 
    int i=0, j=0, k=0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {  
            merge_arr[k++] = arr1[i++];
        } else {
            merge_arr[k++] = arr2[j++];
        }
    }
    while (i <n1) {
        merge_arr[k++] = arr1[i++];
    }
    while (j <n2) {
        merge_arr[k++] = arr2[j++];
    }
    cout << "Merging array: ";
    for (int m = 0; m < k; m++)
        cout << merge_arr[m] << " ";
    return 0;
}
