#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter number of elements:";
    cin >>n;

    int arr[100]; 
    cout << "enter " << n << "elements: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];
    for (int i=1; i<n; i++) {
        arr[i]=arr[i] + arr[i - 1];
    }
    cout << "running sum array: ";
    for (int i=0; i<n; i++)
        cout <<arr[i] << " ";
    return 0;
}
