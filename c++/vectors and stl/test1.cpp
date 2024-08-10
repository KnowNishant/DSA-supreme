#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v{0,0,1,1,1,2,2,3,3,4};
   
    int x=0;
   
    int size = v.size();
    for(int i=0;i<size;i++){
         x = ((x)^(v[i]));
        cout << x << endl;
    }
  cout << (1^1);

    return 0;
}