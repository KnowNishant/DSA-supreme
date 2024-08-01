#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int data ;
 
    for(int i=0;i<10;i++){
        cin >> data;
        v.push_back(data);
    }
    //    int size=v.size();
    //  for(int i=0;i<10;i++){
    //    cout << v[i]<<endl;;
    // }
    //to clear vector
    // v.clear();

// alternate printing method for vector

for(auto it:v){
    cout << it <<" ";
}
    return 0;
}
