class Solution {
public:
    char rev(char c){
        if(c == ')') return '(';
        if(c == ']') return '[';
        if(c == '}') return '{';
        return ')';
    }

    bool isValid(string s) {
        vector<char> cur;
        string ss = "([{";
        for(char c: s){
            if(ss.find(c)!= -1) cur.emplace_back(c);
            else if(cur.size() == 0 || (cur.back() != rev(c))){
                return false;
            }
            else cur.pop_back();
        }
        return cur.size() == 0;
    }
};