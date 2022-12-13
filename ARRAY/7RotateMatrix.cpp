#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        
    int n = matrix.size();
        //apply transpose matrix concept
        
        for(int i = 0; i < n ; i++)
        {
            for(int j = 0; j < i ; j++)
            {
                
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // reverse every row of the matrix
        for(int i = 0 ; i < n ; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
    int main() {
  vector < vector < int >> arr;
  arr = {{1, 2, 3}, { 4, 5, 6}, {7,8,9}};
  rotate(arr);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}

