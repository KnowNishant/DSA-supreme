#include<iostream>
using namespace std;
int arrange(int a[],int zerocount,int size){
    for(int i=0;i<zerocount;i++){
       a[i]=0;
    }
    for( int i=zerocount;i<size;i++){
        a[i]=1;
    }
   
    for(int i=0;i<size;i++){
        cout << a[i];
    }
}
int main(){
    int a[]={1,0,1,1,1,0,0,1};
    int size=8;
    int zerocount=0,onecount=0;
    for(int i=0;i<size;i++){
        if(a[i]==0){
            zerocount++;
        }
        else{
            onecount++;
        }
    }
    cout << zerocount<<endl;
    cout << onecount << endl;
    arrange(a,zerocount,size);
    return 0;
}