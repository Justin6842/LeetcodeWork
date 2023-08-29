class Solution
{
public:
   int bestClosingTime(string customers)
   {
      int missed = 0;
      for (int i = 0; i < customers.length(); i++)
      {
         if (customers[i] == 'Y')
            missed++;
      }
      int sol = 0;
      int pen = missed;
      for (int i = 1; i <= customers.length(); i++)
      {
         if (customers[i - 1] == 'Y')
            missed--;
         else
         {
            missed++;
         }
         if (missed < pen)
         {
            sol = i;
            pen = missed;
         }
      }
      return sol;
   }
};