class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int sum=0;
        int j=0;
        int count=INT_MAX;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            while(sum>x)
            {
                count=min(count,i-j+1);
                sum-=arr[j];
                j++;
            }
        }
        return (count==INT_MAX?0:count);
    }
};