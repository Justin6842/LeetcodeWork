class MyStack
{
public:
   queue<int> que;
   MyStack()
   {
   }

   void push(int x)
   {
      que.push(x);
   }

   int pop()
   {
      int x;
      for (int i = 1; i <= que.size(); i++)
      {
         if (i == que.size())
         {
            x = que.front();
            que.pop();
         }
         else
         {
            x = que.front();
            que.pop();
            que.push(x);
         }
      }
      return x;
   }

   int top()
   {
      int x;
      for (int i = 1; i <= que.size(); i++)
      {
         x = que.front();
         que.pop();
         que.push(x);
      }
      return x;
   }

   bool empty()
   {
      return (que.size() == 0);
   }
};