class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        // int ans=min(a,b);
        // while(ans>0)
        // {
        //     if(a%ans==0 && b%ans==0)
        //     break;
        //     ans--;
        // }
        // return ans;
        
        return (b==0)?a:gcd(b,a%b);
    }
};
