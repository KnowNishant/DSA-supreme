#include<iostream>
using namespace std;

int Lsearch(int a[][100],int m,int n,int target){
    int b=0;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]==target){
            b=1;
            return b;
            break;
        }
    }
    return b;
    }

}

int main(){

int a[100][100];
int m,n;
cout << "enter the row size";
cin >> m;
cout << "enter the column size";
cin >> n;
int target;
cout << "enter the target ";
cin >> target;
cout << "eneter the elements ";
 for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       cin >> a[i][j];
    }}
int z= Lsearch(a,m,n,target);
cout << z;

    return 0;
}