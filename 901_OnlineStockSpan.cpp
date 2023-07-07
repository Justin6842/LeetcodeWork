class StockSpanner {
public:
    vector<int> range;
    vector<int> jumps;
    StockSpanner() {
        
    }
    
    int next(int price) {
        range.push_back(price);
        int i = jumps.size()-1;
        while (i > -1){
            if (range[i] > price){
                jumps.push_back(range.size()-1-i);
                return (jumps[jumps.size()-1]);
            }
            else{ i -= jumps[i]; }
        }
        jumps.push_back(jumps.size()+1);
        return (jumps[jumps.size()-1]);
    }
};
