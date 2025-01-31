class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(int v: stones) pq.emplace(v);
        while(pq.size() != 1){
            int u = pq.top();
            pq.pop();
            int v = pq.top();
            pq.pop();
            if(u > v){
                pq.emplace(u - v);
            }
            if(pq.size() == 0) pq.emplace(0);
        }
        return pq.top();
    }
};