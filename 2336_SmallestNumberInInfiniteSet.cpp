class SmallestInfiniteSet {
public:
    priority_queue<int>que;
    vector<bool> contains;
    SmallestInfiniteSet() {
        for (int i = 1; i <= 1000; i++){
            que.push(i*-1);
            contains.push_back(true);
        }
    }
    
    int popSmallest() {
        int x = que.top()*-1;
        contains[x-1] = false;
        que.pop();
        return x;
    }
    void addBack(int num) {
        if (!contains[num-1]){
            contains[num-1] = true;
            que.push(num*-1);
        }
    }
};
