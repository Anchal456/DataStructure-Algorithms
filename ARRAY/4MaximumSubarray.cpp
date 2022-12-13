#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector < int > & nums) {
    
        int sum = 0;
        int ans = INT_MIN;
        for(int n: nums){
            sum += n;
            if(sum < n){
                sum = n;
            }
            ans = max(ans, sum);
        }
        return ans;
        
    }

int main() {
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    
    int lon = maxSubArray(arr);
    cout << "The longest subarray with maximum sum is " << lon << endl;
    

}
