class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        cout << nums.size();
        int valCount = 0;
        vector<int>::iterator iter = nums.begin();
        while(iter < nums.end()){
            if(*iter == val){
               nums.erase(iter);
               nums.push_back(-1);
               valCount++;
           } 
           else{
               iter++;
           }
        }
        return nums.size()-valCount;
    }
};