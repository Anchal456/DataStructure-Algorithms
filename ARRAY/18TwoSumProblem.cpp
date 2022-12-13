#include<iostream>
#include<vector>
#include<map>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>map;
        //Traverse the vector
        for(int i = 0; i<nums.size(); i++){
            if(map.find(target-nums[i]) != map.end()){
                ans.push_back(map[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]] = i;
        }
        
       return ans;
    }
    int main(){
    vector<int> v;
     v={1,6,3,2,5};
     vector<int> result= twoSum (v, 11);
     for(int i: result)
     {
          cout<<i<<endl;
     }
     return 0;

}