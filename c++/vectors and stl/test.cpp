#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
         int n= nums.size();
         vector<int> v;
    sort(nums.begin(), nums.end()); 
        int l=0;
        int h=n-1;
        while(l<h){
            if((nums[l]+nums[h])==target){
                v.push_back(l);
                v.push_back(h);
                 return v;
            }
            else if((nums[l]+nums[h])>target){
                h--;
            }
            else{
                l++;
            }

      
        }
       
     
    }

int main(){
vector<int> nums ;
int data;
for(int i=0;i<4;i++){
    cin >> data;
    nums[i]=data;
}
int target =9;
vector <int> z =twoSum(nums,target);
int si = z.size();
for(int i=0;i<si;i++){
    cout << z[i];
}

    return 0;
}