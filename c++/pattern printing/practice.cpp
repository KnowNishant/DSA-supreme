#include<iostream>
using namespace std;
int i,j;
int main(){
    // int row,column;
    // //hollow rectangle
    // cout << "enter length";
    // cin >> row ;
    // cout << "enter breadth";
    // cin >> column;

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<column;j++){
    //         if(i==0 || i==row-1 || j==0|| j==column-1){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
 
    //half pyramid

    // int length;
    // cout << "enter the length";
    // cin >> length;

    // for(int i=0;i<length;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << "* ";

    //     }
    //     cout << endl;
    // }

    //inverted half pyramid

    int length;
    cout << "enter the length";
    cin >> length;
    // for(i=0;i<length;i++){
    //     for(j=0;j<length-i;j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    

    //hollow half pyramid

    // for(i=0;i<length;i++){
    //     for(j=0;j<i+1;j++){
    //         if(i==j || i==length-1 || j==0){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
     
    //numeric half pyramid
     for(i=0;i<length;i++){
        for(j=0;j<i+1;j++){
           cout <<" "<< j+1;
        }
        cout << endl;
    }
    
    return 0;
}