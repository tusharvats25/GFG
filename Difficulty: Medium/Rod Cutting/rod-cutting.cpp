// User function Template for C++

class Solution {
  public:
  int solve(int start,int size,vector<int>&price,vector<int>&dp)
  {
      if(size==0)
      return 0;
      if(dp[size]!=-1)
      return dp[size];
      int ans=INT_MIN;
      for(int i=0;i<price.size();i++)
      {
          if(size>=(i+1))
          ans=max(ans,price[i]+solve(i,size-(i+1),price,dp));
      }
      return dp[size]=ans;
  }
    int cutRod(vector<int> &price) {
        // code here
        int n=price.size();
        vector<int>dp(price.size()+1,-1);
        return solve(0,n,price,dp);
    }
};