class Solution {
public:
    vector<string> ans;
    void helper(int open, int closed, string op){
        if (open==0 && closed ==0){ans.push_back(op); return;}
        if (open != 0){string op1=op; op1 += "("; helper(open-1, closed, op1);}
        if (open<closed){string op2=op; op2 += ")"; helper(open, closed-1, op2);}
        return;
    }
    vector<string> generateParenthesis(int n) {
        int open = n, closed = n;
        string op = "";
        helper(open, closed, op);
        return ans;
    }
};
