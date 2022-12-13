#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& current_prices) {
        int min_price = INT_MAX;
        int profit = 0;
        // going on each day
        for(int i=0; i<current_prices.size(); i++){
         // prices = current price
            min_price = min(current_prices[i],min_price);
            profit = max(profit, current_prices[i]-min_price);
        }
        return profit;
        
    }
    int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}