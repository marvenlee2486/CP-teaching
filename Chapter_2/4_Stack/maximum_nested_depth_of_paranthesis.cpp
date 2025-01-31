class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int cur = 0;
        for(char c:s){
            if(c=='(') cur++;
            if(c==')') cur--;

            ans=max(ans,cur); 
        }   
        return ans;
    }
};