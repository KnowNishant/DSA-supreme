#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6};
    int sizea=6;
    int b[5]={4,7,8,2,1};
    int sizeb=5;
    int c[20];

    for(int i=0;i<(sizea);i++){
        c[i]=a[i];
    }
    for(int i=sizea;i<(sizeb+sizea);i++){
        c[i]=b[(i-sizea)];
        
    }
    for(int i=0;i<(sizeb+sizea);i++){
        cout << " "<<c[i];
    }
    return 0;
}