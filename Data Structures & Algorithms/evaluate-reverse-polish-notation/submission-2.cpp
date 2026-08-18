class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> s;
        for(int i=0;i<t.size();i++){
            if(t[i]=="+"){
                int prevT = s.top();
                s.pop();
                int val = s.top()+prevT;
                s.pop();
                s.push(val);
            }
            else if(t[i]=="-"){
                int prevT = s.top();
                s.pop();
                int val = s.top()-prevT;
                s.pop();
                s.push(val);
            }
            else if(t[i]=="*"){
                int prevT = s.top();
                s.pop();
                int val = s.top()*prevT;
                s.pop();
                s.push(val);
            }
            else if(t[i]=="/"){
                int prevT = s.top();
                s.pop();
                int val = s.top()/prevT;
                s.pop();
                s.push(val);
            }
            else{
                s.push(stoi(t[i]));
            }
        }
        return s.top();
    }
};
