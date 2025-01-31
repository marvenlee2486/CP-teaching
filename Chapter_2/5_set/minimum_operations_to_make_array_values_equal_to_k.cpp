class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set<int> st;
        for(int v: nums){
            if(v < k) return -1;
            if(v == k) continue;
            st.emplace(v);
        }
        return st.size();
    }
};