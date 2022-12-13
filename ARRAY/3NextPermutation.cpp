#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), index1, index2;
        //to find breaking point
        //first break point will be second last index
    	for (index1 = n - 2; index1 >= 0; index1--) {
            if (nums[index1] < nums[index1 + 1]) {
                break;
            }
        }
        // no break point simply reverse it
    	if (index1 < 0) {
    	    reverse(nums.begin(), nums.end());
    	} else {
    	    for (index2 = n - 1; index2> index1; index2--) {
                if (nums[index2] > nums[index1]) {
                    break;
                }
            } 
    	    swap(nums[index1], nums[index2]);
    	    reverse(nums.begin() + index1 + 1, nums.end());
        }
    }
    int main(){
        vector<int> arr{1,3,5,4,2};
    
        nextPermutation(arr);
    cout << "next permutation is:"<< endl;
 for (int i = 0; i < arr.size(); i++) {
    
      cout << arr[i] << " ";
    }
    cout << "\n";
  }

   
