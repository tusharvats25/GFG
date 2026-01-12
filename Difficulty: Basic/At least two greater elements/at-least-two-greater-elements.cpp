class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-2;i<=arr.size();i++)
        {
            arr.pop_back();
        }
        return arr;
    }
};