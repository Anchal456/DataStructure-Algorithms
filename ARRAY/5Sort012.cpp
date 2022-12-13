#include<iostream>
#include<vector>
using namespace std;
    void sortColors(vector<int>& nums) {
        int low = 0; 
        int high = nums.size() - 1; 
        int mid = 0; 

        while (mid <= high) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[low++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[high--]); 
                break; 
            }
        }
         
    }
    int main(){
        vector<int> arr{0,1,1,0,1,2,1,2,0,0,0,1};
    
        sortColors(arr);
    cout << "element after sorting is:"<< endl;
 for (int i = 0; i < arr.size(); i++) {
    
      cout << arr[i] << " ";
    }
    cout << "\n";
  }

    

