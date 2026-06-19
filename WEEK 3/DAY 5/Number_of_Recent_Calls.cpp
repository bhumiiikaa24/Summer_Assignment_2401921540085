class RecentCounter {
public:
    vector<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push_back(t);
        while (!q.empty() && q.front() < t - 3000) {
            q.erase(q.begin());
        }
        return q.size();
        
    }
};
