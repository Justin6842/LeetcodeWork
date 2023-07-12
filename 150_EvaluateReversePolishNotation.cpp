class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stac;
        for (int i = 0; i < tokens.size(); i++){
            if (tokens[i] == "+"){
                int x = stac.top();
                stac.pop();
                int y = stac.top();
                stac.pop();
                stac.push(x+y);
            }
            else if (tokens[i] == "-"){
                int x = stac.top();
                stac.pop();
                int y = stac.top();
                stac.pop();
                stac.push(y-x);
            }
            else if (tokens[i] == "*"){
                int x = stac.top();
                stac.pop();
                int y = stac.top();
                stac.pop();
                stac.push(x*y);
            }
            else if (tokens[i] == "/"){
                int x = stac.top();
                stac.pop();
                int y = stac.top();
                stac.pop();
                stac.push(y/x);
            }
            else{
                int temp = 0;
                for (int j = 0; j < tokens[i].length(); j++){
                    if (tokens[i].at(j) == '-') continue;
                    temp = temp*10 + (tokens[i].at(j)-'0');
                }
                if (tokens[i].at(0) == '-') temp *= -1;
                stac.push(temp);
            }
        }
        return stac.top();
    }
};