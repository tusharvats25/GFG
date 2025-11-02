

class Solution {
  public:
    int findMissing(vector<int>& arr1, vector<int>& arr2) {
        // your code
        int n=arr2.size();
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=arr1[i];
            sum2+=arr2[i];
        }
        sum1+=arr1[arr1.size()-1];
        
        return sum1-sum2;
    }
};