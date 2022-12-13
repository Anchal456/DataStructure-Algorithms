#include<iostream>
#include<vector>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //row nikal lo
        int row = matrix.size();
        //col nikal lo
        int col = matrix[0].size();
        // initialize start and end
        int start = 0;
        int end  = row*col-1;
        //calculate mid
        int mid = start + (end-start)/2;
        
        while(start<=end) {
            //access element
            int element = matrix[mid/col][mid%col];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target) {
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
             mid = start + (end-start)/2;    
        }
        return 0;
    }
    main(){
   vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,50},{53,62,78,98}};
   cout << searchMatrix(v, 16);
}
