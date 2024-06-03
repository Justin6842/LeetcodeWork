class Solution
{
public:
   int reverse(int x)
   {
      if (x == 0)
         return 0;
      double sol{0};
      vector<int> thing;
      while (x != 0)
      {
         thing.push_back(x % 10);
         x /= 10;
      }
      for (int i = 0; i < thing.size(); i++)
      {
         if (thing[i] == 0 && sol == 0)
            continue;
         sol = sol * 10 + thing[i];
      }
      if (sol > INT_MAX || sol < INT_MIN)
         return 0;
      else
      {
         return (int)sol;
      }
   }
};