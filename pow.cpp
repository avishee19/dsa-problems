#include<iostream>
using namespace std;
int main(){
    //pow(a,b)
    int a,b;
    cout<<"enter a and b"<<endl;
    cin>>a>>b;
    int ans=1; //here we set the value ans=1 at first
    for(int i=1; i<=b; i++){
        ans =ans *a;
    }
    cout<<"answer is:"<<ans<<endl;
    return 0;
}