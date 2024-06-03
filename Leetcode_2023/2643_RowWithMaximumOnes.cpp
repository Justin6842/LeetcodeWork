class Solution
{
public:
   vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
   {
      vector<int> sol{-1, -1};
      for (int i = 0; i < mat.size(); i++)
      {
         int onecount{0};
         for (int j = 0; j < mat[0].size(); j++)
         {
            if (mat[i][j] > 0)
               onecount++;
         }
         if (onecount > sol[1])
         {
            sol[0] = i;
            sol[1] = onecount;
         }
      }
      return sol;
   }
};