class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }

        for(int i=0;i<t.size();i++){
            if(!m.contains(t[i])){
                return false;
            }
            else{
                m[t[i]]--;
            }
        }
        for(auto p:m){
            if(p.second !=0){
                return false;
            }
        
        }
        return true;
        
    }
};
