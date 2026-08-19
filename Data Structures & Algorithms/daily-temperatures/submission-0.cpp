class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> s;
        vector<int> result(temp.size(),0);
        int n = temp.size();
        int i=n-1;
        while(i>=0){
            if(s.empty()){
                result[i]=0;
                s.push(i);
                i--;
            }
            else{
                if(temp[s.top()]>temp[i]){
                    result[i] = s.top()-i;
                    s.push(i);
                    i--;
                }
                else{
                    s.pop();
                }
            }
        }
        return result;
    }
};
