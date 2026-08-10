class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size();
        int boats=0,p1=0,p2=n-1;
        while(p1<=p2){
            if(people[p1]+people[p2]<=limit){
                p1++;
                
            }
            p2--;
            boats++;
        }
        return boats;
        
    }
};