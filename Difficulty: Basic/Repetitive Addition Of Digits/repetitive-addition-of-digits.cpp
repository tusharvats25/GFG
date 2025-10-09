class Solution {
  public:
    int solve(int n)
    {
        int sum=0;
        
        while(n!=0)
        {
            int d=n%10;
            
            sum+=d;
            
            n/=10;
        }
        
        return sum;
    }
    int singleDigit(int n) {
        
        int sum=0;
        // code here
        while(n>=10)
        {
            sum=solve(n);
            
            n=sum;
        }
        
        return sum;
    }
};