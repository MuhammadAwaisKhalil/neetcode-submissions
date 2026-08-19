class Solution {
public:
    int carFleet(int target, vector<int>& pos, vector<int>& speed) {
        vector<pair<int, int>> cars;
        for(int i=0;i<pos.size();i++){
            cars.push_back({pos[i],speed[i]});
        }

        sort(cars.begin(),cars.end());
        reverse(cars.begin(),cars.end());

        stack<double> s;
        for(int i=0;i<cars.size();i++){
            int carP = cars[i].first;
            int carS = cars[i].second;
            
            double time = (float)(target-carP)/(float)(carS);
            if(s.empty()){
                s.push(time);
            }
            else{
                if(time>s.top()){
                    s.push(time);
                }
            }

        }
        return s.size();
    }
};
