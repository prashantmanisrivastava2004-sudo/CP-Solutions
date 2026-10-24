class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();

               int top = 0, bottom = n - 1;

               // Find a possible celebrity
               while (top < bottom) {
                   if (mat[top][bottom] == 1) {
                       top++;
                   }
                   else {
                       bottom--;
                   }
               }

               // Verify the candidate
               int candidate = top;

               for (int i = 0; i < n; i++) {
                   if (i == candidate) continue;

                   if (mat[candidate][i] == 1 || mat[i][candidate] == 0) {
                       return -1;
                   }
               }

               return candidate;
        
    }
};