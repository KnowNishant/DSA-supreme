#include<iostream>
using namespace std;
int csum(int a[][3],int m, int n){
            int sum=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i==j){
            sum = sum +a[j][i];
        }}
        
    }
    return sum;
}
int main(){
    int a[3][3]={{1,2,3},{5,7,6},{12,15,17}};
    int m=3;
     int n=3;
     int z=csum(a,m,n);
     cout << z;
    return 0;
}