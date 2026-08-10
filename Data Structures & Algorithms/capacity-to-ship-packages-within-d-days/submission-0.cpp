class Solution {
   public:
    bool isValid(vector<int>& w, int tempCap, int d) {
        int dayCount = 1, weight = w[0];
        for (int i = 1; i < w.size(); i++) {
            if (weight + w[i] > tempCap) {
                dayCount++;
                weight = w[i];
            } else {
                weight += w[i];
            }
        }
        return dayCount <= d;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int minCap = 0, maxCap = 0, tc = 0, ans = 0;
        for (int i = 0; i < weights.size(); i++) {
            minCap = max(minCap, weights[i]);
            maxCap += weights[i];
        }

        while (minCap <= maxCap) {
            tc = minCap + (maxCap - minCap) / 2;
            if (isValid(weights, tc, days)) {
                ans = tc;
                maxCap = tc - 1;
            } else {
                minCap = tc + 1;
            }
        }
        return ans;
    }
};