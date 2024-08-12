#include<iostream>
#include<vector>
using namespace std;

void  soritng(vector<int>& v){
    int l=0;
    int h= v.size()-1;
    while(l<h){
        if(v[h]<0){
            swap(v[l],v[h]);
            h--; 
            l++;
        }
        else{
            h--;
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}

int main(){
    vector<int> v{ 1,2,-3,4,-5,6};
     soritng(v);

    return 0;
}