class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        vector<int> st;
        int ptr = 0;
        for(int v: pushed){
            while(st.size() != 0 && popped[ptr] == st.back()) {
                st.pop_back();
                ptr++;
            }
            st.emplace_back(v);
        }
        while(st.size() != 0 && popped[ptr] == st.back()) {
            st.pop_back();
            ptr++;
        }
        return st.size() == 0;
    }
};