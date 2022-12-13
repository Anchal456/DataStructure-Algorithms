#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 3,1, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    int miss = 0, repeat = 0;
    
    for (int i = 0; i < n; ++i)
    {
        // if element exist at that index put minus sign their
        if(arr[abs(arr[i])-1] > 0)
            arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];

    // if already negative that means this is our repeating numbers
            
        else
            repeat = abs(arr[i]);
    }
    
    for (int i = 0; i < n; ++i)
    {
        if(arr[i] > 0)
            miss = i+1;  
    }
 
    cout<<"Missing: "<<miss<<" Repeating: "<<repeat;
     return 0;
}