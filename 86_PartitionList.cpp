class Solution
{
public:
   ListNode *partition(ListNode *head, int x)
   {
      vector<int> low;
      vector<int> high;
      ListNode *temp = head;
      while (temp != nullptr)
      {
         if (temp->val < x)
            low.push_back(temp->val);
         else
         {
            high.push_back(temp->val);
         }
         temp = temp->next;
      }
      ListNode *sol = nullptr;
      if (low.size() > 0)
      {
         sol = new ListNode(low[0], nullptr);
         temp = sol;
         for (int i = 1; i < low.size(); i++)
         {
            temp->next = new ListNode(low[i], nullptr);
            temp = temp->next;
         }
         if (high.size() > 0)
         {
            temp->next = new ListNode(high[0], nullptr);
            temp = temp->next;
         }
      }
      else if (high.size() > 0)
      {
         sol = new ListNode(high[0], nullptr);
         temp = sol;
      }
      for (int i = 1; i < high.size(); i++)
      {
         temp->next = new ListNode(high[i], nullptr);
         temp = temp->next;
      }
      return sol;
   }
};