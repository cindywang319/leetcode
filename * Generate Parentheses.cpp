class Solution {
public:
    vector<string> ret;
    string tmp;
    int total;
    void dfs(int left, int right) {
        if(left == total && right == total)
            ret.push_back(tmp);
            
        if(left < total ) {
            tmp += "(";
            dfs(left + 1, right);
            tmp.resize(tmp.size() - 1);
        }
        
        if(left > right) {
            tmp += ")";
            dfs(left, right + 1);
            tmp.resize(tmp.size() - 1);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        tmp = "";
        total = n;
        dfs(0,0);
        return ret;
    }
};
