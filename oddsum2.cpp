#include<iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    cout<<"enter value for n"<<endl;
    cin>>n;
    int oddsum=0;
    while(i<=n){
        if(i%2!=0){
        oddsum=oddsum+i; //agar condition sahi hua toh usi sum me add karte rahenge
        }
        i++;            //agar condn fulfill kiya toh i ka value inc hota rahta hai +1 karte karte
    }
    cout<<"oddsum is:"<<oddsum;
 
 return 0;
 }