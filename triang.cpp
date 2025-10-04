#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0; i<n; i++){    //outer loop no. of iterations show karte hue
        for(int j=0; j<i+1; j++){ //inner loop show andar char/int ke count kaise badh rahe hai jisme j+1 horaha hai
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}