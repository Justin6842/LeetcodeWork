class Solution
{
public:
   vector<int> searchRange(vector<int> &nums, int target)
   {
      vector<int> sol(2, -1);
      if (nums.size() == 0)
         return sol;
      if (nums[0] == target)
         sol[0] = 0;
      else
      {
         int min{1};
         int max = nums.size() - 1;
         int mid;
         while (min <= max)
         {
            mid = (min + max) / 2;
            if (nums[mid] == target && nums[mid - 1] != target)
            {
               sol[0] = mid;
               break;
            }
            else if (nums[mid] < target)
               min = mid + 1;
            else
            {
               max = mid - 1;
            }
         }
         if (sol[0] == -1)
            return sol;
      }
      if (nums[nums.size() - 1] == target)
         sol[1] = nums.size() - 1;
      else
      {
         int min{0};
         int max = nums.size() - 2;
         int mid;
         while (min <= max)
         {
            mid = (min + max) / 2;
            if (nums[mid] == target && nums[mid + 1] != target)
            {
               sol[1] = mid;
               break;
            }
            else if (nums[mid] <= target)
               min = mid + 1;
            else
            {
               max = mid - 1;
            }
         }
      }
      return sol;
   }
};