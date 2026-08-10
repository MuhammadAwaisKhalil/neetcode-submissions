class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        //Using reversal trick
        // as we have to move array right which results in starting values at end
        // we can reverse the entire array
        // reverse the first k elements and then everse remainder elements
        // as for k elemnts we are swapping [A|B] A with B where A is n-k elemts
        // and B is the k elemnts (k elemts are pushe froward to be at start)
        // we reverse the array to swap A and B then rreverse indiv so that
        // they are in correct order
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};