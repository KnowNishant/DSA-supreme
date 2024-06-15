#include<iostream>
using namespace std;
void eligibility(int a ){
    if(a>18){
        cout << "eligible for vote" << endl;

    }
    else{
        cout << "Not eligible for vote :( " << endl;
    }
}
int main(){
    int n;
    cout << "enter your age: " ;
    cin >> n;
    eligibility(n);
    return 0;
}