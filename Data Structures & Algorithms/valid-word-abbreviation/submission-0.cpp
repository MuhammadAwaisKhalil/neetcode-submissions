class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int first=0,second=0;
        while(first<word.length()&&second<abbr.length()){
            if(!isdigit(abbr[second])){
                if(word[first]!=abbr[second]){
                    return false;
                }

                second++;
                first++;
            }
            else{
                if(abbr[second]=='0'){
                    return false;
                }
                int num=0;
                while(second<abbr.length()&&isdigit(abbr[second])){
                    num=num*10+(abbr[second]-'0');
                    second++;
                }
                first+=num;
            }
        }

        return first==word.length()&&second==abbr.length();
    }
};