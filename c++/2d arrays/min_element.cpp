#include<iostream>
using namespace std;
int min(int a[][3], int m,int n){
    int mini=a[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]<mini){
                mini=a[i][j];
            }
        }
    }
    return mini;
}
int main(){
int a[3][3]={{0,2,7},{8,10,5},{16,86,3}};
int m=3;
int n=3;
int z =min(a,m,n);
cout << z;
    return 0;
}