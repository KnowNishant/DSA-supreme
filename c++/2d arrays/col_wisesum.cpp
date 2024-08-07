#include<iostream>
using namespace std;
void csum(int a[][3],int m, int n){
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum = sum +a[j][i];
        }
        cout << sum <<endl;
    }
}
int main(){
    int a[3][3]={{1,2,3},{5,7,6},{12,15,17}};
    int m=3;
     int n=3;
     csum(a,m,n);
    return 0;
}