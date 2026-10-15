class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>> pq;
        for (auto i : points){
            int x = i[0];
            int y = i[1];
            pq.push({x*x+y*y, i});
            if (pq.size()>k){
                pq.pop();
            }
        }
        vector<vector<int>> v;
        while (!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;

    }
};