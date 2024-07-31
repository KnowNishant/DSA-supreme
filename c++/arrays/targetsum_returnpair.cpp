#include<iostream>
using namespace std;
pair<int ,int> sumcheck(int a[],int size,int target){
    pair<int,int> ans= make_pair(-1,-1);
    
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(target==(a[i]+a[j])){
                ans.first=a[i];
                ans.second=a[j];
                return ans;
            }
            
        }
    }
    
}

int main(){
    int a[]={10,5,20,15,30};
    int size=5;
    int target =32;
  pair<int ,int>   z =sumcheck(a,size,target);
    if(z.first==-1 && z.second==-1){
        cout << "target sum pair not exists in the array ";
    }
    else 
    cout << z.first << " & "<< z.second;
    return 0;
}