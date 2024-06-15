#include<iostream>
using namespace std;
int main(){
    int length ,breadth;
    cout << "enter the length: ";
    cin >> length;
        cout << "enter the breadth: ";
        cin >> breadth;
        for(int i=0;i<length;i++){
            for(int j=0;j<breadth;j++){
                if(i==0||i==length-1){
                    cout << "* ";
                }
                else{
                    if(j==0||j==breadth-1){
                        cout << "* ";
                    }
                    else{
                        cout << "  ";
                    }
                }
            }
            cout << endl;
        }


    return 0;
}