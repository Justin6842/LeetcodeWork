class Solution
{
public:
   int accountBalanceAfterPurchase(int purchaseAmount)
   {
      int dif = purchaseAmount % 10;
      int tens = purchaseAmount / 10;
      if (dif >= 5)
         dif = 1;
      else
      {
         dif = 0;
      }
      return (100 - tens * 10 - dif * 10);
   }
};