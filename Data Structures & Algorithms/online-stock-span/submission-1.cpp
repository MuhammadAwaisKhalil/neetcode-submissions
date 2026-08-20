class StockSpanner {
public:
stack<int> s;
vector<int> ans;
    StockSpanner() {
        
    }
    
    int next(int price) {
        ans.push_back(price);
        int n = ans.size();
        int span=-1;
        
        while(!s.empty()){
            if(ans[s.top()]<=price){
                s.pop();
            }
            else{
                span = (n-1) - s.top();
                s.push(n-1);
                return span;
            }
        }
        if(s.empty()){
            s.push(n-1);
            return n;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */