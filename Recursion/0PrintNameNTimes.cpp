#include<iostream>
using namespace std;

void print(int i, int n){
    if(i>n){
        return;
    }

    cout << "Raj" << endl;
    cout << i << endl;
    print(i+1 , n);
}

void printInc(int i ,int n){
    if(i>n) return;

    cout << i << endl;
    printInc(i+1,n);
}

void printDec(int i){
    if(i<1) return;

    cout << i << endl;
    printDec(i-1);
} 

void printIncBacktrack(int i , int n){ // here increment (i+1) is not allowed
    if(i<1) return;

    // now calling the function before the print statement
    printIncBacktrack(i-1,n);
    cout << i << endl;
}

void printDecBacktrack(int i , int n){
    if(i>n) return;

    // now calling the function before the print statement
    printDecBacktrack(i+1,n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    cout << "--------------" << endl;

    // print(1,n);   
    // printInc(1,n);
    // printDec(n);
    // printIncBacktrack(n,n);
    printDecBacktrack(1,n);
return 0;
}
