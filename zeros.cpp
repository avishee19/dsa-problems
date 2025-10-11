#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter number of elements: ";
    cin >>n;
    int arr[100]; 
    cout << "elements the elements ";cout<<" ";
    for (int i=0; i<n; i++)
        cin>>arr[i];
    int j=0;  
    for (int i=0; i<n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    cout << "removing zeros to the last: ";
    for (int i=0; i<n; i++)
        cout << arr[i]<< " ";
    return 0;
}
