class Solution
{
public
   int search(int[] nums, int target)
   {
      if (nums.length == 1)
      {
         if (target == nums[0])
            return 0;
         return -1;
      }
      int low = 0;
      int high = nums.length - 1;
      int split = -1;
      while (low <= high)
      {
         int mid = (low + high) / 2;
         if (nums[mid] > nums[mid + 1])
         {
            split = mid;
            break;
         }
         else if (nums[mid] < nums[nums.length - 1])
            high = mid - 1;
         else
         {
            low = mid + 1;
         }
      }
      if (target < nums[0])
      {
         high = nums.length - 1;
         split++;
         while (split < high)
         {
            int mid = (split + high) / 2;
            if (nums[mid] == target)
               return mid;
            else if (nums[mid] > target)
               high = mid - 1;
            else
            {
               split = mid + 1;
            }
         }
         if (nums[split] == target)
            return split;
      }
      else
      {
         low = 0;
         if (split == -1)
            split = nums.length - 1;
         while (low < split)
         {
            int mid = (low + split) / 2;
            if (nums[mid] == target)
               return mid;
            else if (nums[mid] > target)
               split = mid - 1;
            else
            {
               low = mid + 1;
            }
         }
         if (nums[low] == target)
            return low;
      }
      return -1;
   }
}