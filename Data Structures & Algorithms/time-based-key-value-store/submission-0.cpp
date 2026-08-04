class TimeMap {
public:
unordered_map<string, vector<pair<int,string>>> state;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        state[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string result="";
        if(!state.contains(key)){
            return result;
        }
        vector<pair<int,string>> val=state[key];
        int st=0,end=val.size()-1;
        while(st<=end){
            int mid = st + (end-st)/2;
            if(val[mid].first<=timestamp){
                st=mid+1;
                result=val[mid].second;
            }
            else{
                end=mid-1;
            }
        }
        return result;
    }
};
