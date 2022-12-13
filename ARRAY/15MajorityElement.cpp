#include<iostream>
#include<vector>
using namespace std;

int majorityElement(vector<int>& nums) {
       int count = 0;
        int majorityElement = 0;
        
        for(int i=0;i<nums.size();i++) {
            if(count == 0) {
                majorityElement = nums[i];
                count++;
            }
            else if(majorityElement == nums[i]) {
                count++;
            }
            else {
                count--;
            }
        }
        
        return majorityElement;
    }

    int main() {
  vector < int > arr;
  arr = {1,3,4,2,3,3,3,3,3,3,};
  cout << "The duplicate element is " << majorityElement(arr) << endl;
}