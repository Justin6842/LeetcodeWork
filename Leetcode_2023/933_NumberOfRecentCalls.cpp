class RecentCounter {
public:
    vector<int> range;
    int start{0};
    RecentCounter() {   
    }
    int ping(int t) {
        range.push_back(t);
        while (range[start] < t-3000) start++;
        return (range.size()-start);
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */