class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> st;
        reverse(nums.begin(), nums.end());
        for(int v: nums){
            if(st.find(v) == st.end()) st.emplace(v);
            else break;
        }
        int n = nums.size() - st.size();
        return (n + 2) / 3;
    }
};