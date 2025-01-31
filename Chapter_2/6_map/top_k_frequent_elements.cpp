class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int v: nums){
            if(mp.find(v) == mp.end()) mp[v] = 0;
            mp[v]++;
        }

        vector<pair<int,int> > v;
        for(auto&[x,y]: mp){
            v.emplace_back(y,x);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        
        vector<int> ret;
        for(int i = 0; i < k; i++){
            ret.emplace_back(v[i].second);
        }
        return ret;
    }
};