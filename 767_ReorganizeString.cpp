class Solution
{
public:
   string reorganizeString(string s)
   {
      unordered_map<char, int> index;
      for (int i = 0; i < s.length(); i++)
      {
         index[s[i]]++;
      }
      vector<pair<int, char>> sorting;
      for (auto &x : index)
      {
         sorting.push_back({x.second, x.first});
      }
      sort(sorting.begin(), sorting.end(), greater());

      if (sorting[0].first > (s.length() + 1) / 2)
         return "";

      vector<char> sample(s.length(), ' ');
      int i = 0;
      for (int j = 0; j < sorting.size(); j++)
      {
         while (sorting[j].first > 0)
         {
            sample[i] = sorting[j].second;
            sorting[j].first -= 1;
            i += 2;
            if (i >= s.length())
               i = 1;
         }
      }
      string sol = "";
      for (int j = 0; j < sample.size(); j++)
      {
         sol = sol + sample[j];
      }
      return sol;
   }
};