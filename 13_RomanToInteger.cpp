class Solution
{
public:
   int romanToInt(string s)
   {
      int sol{0};
      for (int i = 0; i < s.size(); i++)
      {
         if (s[i] == 'C')
         {
            if (i + 1 < s.size() && (s[i + 1] == 'D' || s[i + 1] == 'M'))
               sol -= 100;
            else
            {
               sol += 100;
            }
         }
         else if (s[i] == 'X')
         {
            if (i + 1 < s.size() && (s[i + 1] == 'L' || s[i + 1] == 'C'))
               sol -= 10;
            else
            {
               sol += 10;
            }
         }
         else if (s[i] == 'I')
         {
            if (i + 1 < s.size() && (s[i + 1] == 'V' || s[i + 1] == 'X'))
               sol -= 1;
            else
            {
               sol += 1;
            }
         }
         else if (s[i] == 'V')
            sol += 5;
         else if (s[i] == 'L')
            sol += 50;
         else if (s[i] == 'D')
            sol += 500;
         else
         {
            sol += 1000;
         }
      }
      return sol;
   }
};