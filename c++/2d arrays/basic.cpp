#include<iostream>
#include<vector>
using namespace std;
 
 int main(){
    vector<vector<int>> v(4,vector<int>(3,0)); //4 wala rows and 3 wala column and o is value that is being initialized
    int m= v.size();
    int n= v[0].size();

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << v[i][j];
        }
        cout << endl;
    }
    return 0;
 }