#include<iostream>
#include<vector>
using namespace std;

void  soritng(vector<int>& v){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
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