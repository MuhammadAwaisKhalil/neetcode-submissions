class Solution {
public:
    string decodeString(string s) {
        stack<int> rep;
        stack<string> strs;
        int currentNum=0;
        string currentStr="";

        for(char c:s){
            if(isdigit(c)){
                currentNum=currentNum*10 + c-'0';
            }
            else if(c=='['){
                rep.push(currentNum);
                strs.push(currentStr);

                currentNum=0;
                currentStr="";
            }
            else if(c==']'){
                int k = rep.top();rep.pop();
                string prevStr = strs.top();strs.pop();
                string repStr = "";
                while(k>0){
                    repStr+=currentStr;
                    k--;
                }
                currentStr=prevStr+repStr;
            }
            else{
                currentStr+=c;
            }
        }
        return currentStr;
    }
};