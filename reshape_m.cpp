#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"enter rows and column for the matrix:";
    cin>>m>>n;

    int mat[100][100];
    cout<<"the elements of matrix:\n";
    for(int i=0; i<m; i++)
       for(int j=0;j<n; j++)
            cin>>mat[i][j];
    int r,c;
    cout<<"enter rows and column to reshaped matrix:";
    cin>>r>>c;
    
    if(m*n!=r*c){
        cout<<"reshaping nor possible";
        return 0;
    }

    int reshaped[100][100];
    int row=0, col=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            reshaped[i][j]=mat[row][col];
            c++;
            if(c==n){
                col=0;
                row++;
            }  
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
        cout<<reshaped[i][j];
    }

}