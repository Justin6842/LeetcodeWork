class Solution
{
public:
   string dayOfTheWeek(int day, int month, int year)
   {
      string results[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
      int months[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
      int total = 4;
      total += 365 * (year - 1971) + (year - 1968) / 4;
      total += months[month - 1];
      if (year % 4 == 0 && month <= 2)
         total--;
      if (year == 2100 && month > 2)
         total--;
      total += day;
      return results[total % 7];
   }
};