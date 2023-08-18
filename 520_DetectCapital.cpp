class Solution
{
public:
   bool detectCapitalUse(string word)
   {
      if (word[0] - 'a' < 0 && word.length() > 1)
      {
         if (word[1] - 'a' < 0)
         {
            for (int i = 2; i < word.length(); i++)
            {
               if (word[i] - 'a' >= 0)
                  return false;
            }
         }
         else
         {
            for (int i = 2; i < word.length(); i++)
            {
               if (word[i] - 'a' < 0)
                  return false;
            }
         }
      }
      else
      {
         for (int i = 1; i < word.length(); i++)
         {
            if (word[i] - 'a' < 0)
               return false;
         }
      }
      return true;
   }
};