class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int size = profits.size();
        vector<pair<int,int>> pairs;
        vector<bool> used(size,false);
        for (int i = 0; i < size; i++){
            pairs.emplace_back(capital[i], profits[i]);
        }
        sort(pairs.begin(), pairs.end());
        priority_queue<int> pq;
        int counter = 0;
        while (k > 0){
            while (counter < size && pairs[counter].first <= w){
                pq.push(pairs[counter++].second);
            }
            if (pq.empty())
                break;
            w += pq.top();
            pq.pop();
            k--;
        }
        return w;
    }
};