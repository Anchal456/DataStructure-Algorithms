#include<bits/stdc++.h>

using namespace std;
vector < vector < int >> merge(vector < vector < int >> & intervals) {
vector<vector<int>>mergedIntervals;
// if intervals are not given
if(intervals.size()==0){
    return mergedIntervals;
}
// if interval are given
sort(intervals.begin(),intervals.end());
vector<int>tempIntervals = intervals[0];

for(auto it:intervals){
    if(it[0] <= tempIntervals[1]){
        //merge interval
        tempIntervals[1] = max(it[1],tempIntervals[1]);
    }
    else{
        mergedIntervals.push_back(tempIntervals);
        tempIntervals = it;
    }

}
// push last resultant into the interval
mergedIntervals.push_back(tempIntervals);
return mergedIntervals;

}

int main() {
  vector < vector < int >> arr;
  arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
  vector < vector < int >> ans = merge(arr);

  cout << "Merged Overlapping Intervals are " << endl;

  for (auto it: ans) {
    cout << it[0] << " " << it[1] << "\n";
  }
}