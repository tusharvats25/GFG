class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        // code here
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
            
            if(mp[arr[i]]==2)
            ans.push_back(arr[i]);
        }
        return ans;
    }
};
