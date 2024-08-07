#include<iostream>
using namespace std;
void transpose(int a[][3],int m, int n){
    int arr[3][3];
    int temp;
//     for(int i=0;i<m;i++){
        
//         for(int j=0;j<n;j++){
//            arr[i][j]=a[j][i];
        
//     }
// }
//  for(int i=0;i<m;i++){
        
//         for(int j=0;j<n;j++){
//            cout << " "<<arr[i][j];
        
//     }
//     cout << endl;
// }
//without extra array;
for(int i=0;i<m;i++){
        
        for(int j=i;j<n;j++){
           temp = a[i][j];
           a[i][j]=a[j][i];
           a[j][i]=temp;

        
    }
}
 for(int i=0;i<m;i++){
        
        for(int j=0;j<n;j++){
           cout << " "<<a[i][j];
        
    }
    cout << endl;
}
}
int main(){
    int a[3][3]={{1,2,3},{5,7,6},{12,15,17}};
    int m=3;
     int n=3;
    transpose(a,m,n);
    return 0;
}