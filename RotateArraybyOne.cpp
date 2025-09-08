// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int s = arr.size();
        int last = arr[s - 1];
        for(int i = s - 1; i > 0; i--){
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }
};
