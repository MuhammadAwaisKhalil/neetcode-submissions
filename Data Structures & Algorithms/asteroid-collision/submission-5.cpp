class Solution {
public:
    
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> ra;
        for(int i=0;i<asteroids.size();i++){
            if(ra.empty()){
                ra.push(asteroids[i]);
            }
            else if(ra.top()>0&&asteroids[i]>0||ra.top()<0&&asteroids[i]<0){
                ra.push(asteroids[i]);
            }
            else if(ra.top()>0&&asteroids[i]<0){
                bool destroyed=false;
                while(!ra.empty()&&ra.top()>0&&asteroids[i]<0){
                    if(ra.top()<abs(asteroids[i])){
                        ra.pop();
                    }
                    else if(ra.top()==abs(asteroids[i])){
                        ra.pop();
                        destroyed=true;
                        break;
                    }
                    else{
                        destroyed=true;
                        break;
                    }
                }
                if(!destroyed)
                ra.push(asteroids[i]);
            }
            else{
                ra.push(asteroids[i]);
            }
        }
        vector<int> ans;
        while(!ra.empty()){
            ans.push_back(ra.top());
            ra.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};