class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        sort(worker.begin(), worker.end());
        vector<pair<int,int>> dAndP;
        int size_d = difficulty.size();
        int size_w = worker.size();
        for (int i = 0; i < size_d; i++){
            dAndP.emplace_back(difficulty[i], profit[i]);
        }
        sort(dAndP.begin(), dAndP.end());
        int ct = 0;
        int ct_worker = 0;
        int total = 0;
        int max = 0;
        while(ct_worker < size_w){
            if (ct < size_d && worker[ct_worker] >= dAndP[ct].first){
                if(max < dAndP[ct].second)
                    max = dAndP[ct].second;
                ct++;
            } else{
                total += max;
                ct_worker++;
            }
        }
        return total;
    }
};