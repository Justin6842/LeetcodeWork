class Solution
{
public:
   int hIndex(vector<int> &citations)
   {
      int sol = 0;
      for (int i = citations.size() - 1; i > -1; i--)
      {
         if (citations[i] > sol)
            sol++;
         else
         {
            break;
         }
      }
      return sol;
   }
};