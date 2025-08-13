

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
       int n=arr.size();
       int maxm=arr[n-1];
        vector<int>ans;
        ans.push_back(maxm);
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<maxm)
            continue;
            maxm=arr[i];
            ans.push_back(maxm);
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};