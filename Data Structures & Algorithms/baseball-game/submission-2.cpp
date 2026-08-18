class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="D"){
                s.push(s.top()*2);

            }
            else if(operations[i]=="+"){
                int topE = s.top();
                s.pop();
                int sum = topE + s.top();
                s.push(topE);
                s.push(sum);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};