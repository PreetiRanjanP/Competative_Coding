#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the age of the person" ;
    cin >> n;
    
    /*Approach 1*/
    if(n>=18){
        cout << "the person is eligible to vote";
    }
    else{
        cout << "the person is not eligible to vote";
    }

    /*Approach 2*/
    cout << (n >= 18 ? "You are eligible to vote." : "You are not eligible to vote.") <<endl;
}