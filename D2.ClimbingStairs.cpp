class Solution {
public:
    //like fibonacci
    int climbStairs(int n) {
        
        if(n<=2){
            return n;
        }
        
        int first=1,second=2,ans=3;
        for(int i=3;i<=n;i++){
            ans = first+second;
            first = second;
            second = ans;
        }
            
            return ans;
        
    }
    
    
};
