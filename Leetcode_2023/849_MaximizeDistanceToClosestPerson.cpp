class Solution
{
public:
   int maxDistToClosest(vector<int> &seats)
   {
      bool left{true};
      int sol{0};
      int distance{0};
      for (int i = 0; i < seats.size(); i++)
      {
         if (seats[i] == 1)
         {
            if (left)
               left = false;
            else
            {
               distance = (distance + 1) / 2;
            }
            if (distance > sol)
               sol = distance;
            distance = 0;
         }
         else
         {
            distance++;
         }
      }
      if (distance > sol)
         return distance;
      return sol;
   }
};