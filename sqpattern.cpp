#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value for n"<<endl;
    cin>>n;
    char ch = 'A';
    for(int i=0; i<n; i++){
           //yaha inner loop start hone se pahle kyunki hume A chahiye isliye pahle hi clarify karlo and using it for adding with ASCII values further 
        for(int j=0; j<n; j++){
            ch =ch+1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}