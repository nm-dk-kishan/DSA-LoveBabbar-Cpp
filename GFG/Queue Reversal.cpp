class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack<int> s;
        
        while(!q.empty()){
            int element = q.front();
            q.pop();
            s.push(element);
        }
        
        while(!s.empty()){
            int elemeant = s.top();
            s.pop();
            q.push(element);
        }
    }
    

};