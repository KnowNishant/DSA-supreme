#include<iostream>
using namespace std;
int main(){
    int m,n; // m =rows
    cout << "enter no fo rows: ";
    cin >> m;
  
    cout << "enter no of columns: ";
    cin >> n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}