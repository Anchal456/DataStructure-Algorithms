#include<iostream>

using namespace std;
 
// Function to print the Pascal's Triangle
void printpascal(int rownum){
    
    // Loop to print each row
    for(int n = 1; n <= rownum; n++){
 
        // Loop to print spaces for triangular display
        for(int r = 1; r < rownum-n+1; r++)
            cout<<"  ";
 

 
    
        // Loop to print values using the Combinations formula
        int val = 1;
        
        for(int r = 1; r <= n; r++){
            cout<<val<<"   ";
             
            val = val * (n - r)/r;
        }
        cout<<endl;
    }
} 

 
int main(){
 
    int rownum = 8;
    printpascal(rownum);
      return 1;
}



