#include<iostream>
#include<vector>
// using namespace std;

// int main(){
//     vector<int> v;
//     int data ;
 
//     for(int i=0;i<10;i++){
//         cin >> data;
//         v.push_back(data);
//     }
//     //    int size=v.size();
//     //  for(int i=0;i<10;i++){
//     //    cout << v[i]<<endl;;
//     // }
//     //to clear vector
//     // v.clear();

// // alternate printing method for vector

// for(auto it:v){
//     cout << it <<" ";
// }
//     return 0;
// }
int main(){
int pivotIndex(vector<int>& nums) {
        int size =nums.size();
        
        for(int i=0;i<size;i++){
            int sum1=0;
            int sum2=0;
            for(int j=0;j<=i;j++){
                sum1=sum1+nums[j];
            }
            for(int k=(i+1);k<size;k++){
                sum2=sum2+nums[k];
            }
            
            if(sum1==sum2){
                return i;
            }
        }
        return -1;
    }
}