class Solution {
  public:
    bool isPossible(int n, vector<pair<int, int>>& pre) {
        // code here
        //int n=numCourses;


        vector<vector<int>> graph(n);
        vector<int> indegree(n,0);
        for(int i=0;i<pre.size();i++)
        {
            int a=pre[i].first;
            int b=pre[i].second;


            graph[b].push_back(a);
            indegree[a]++;
        }
        // graph ready 
        queue<int> q;
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            if(!indegree[i])
            q.push(i);
        }

        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(auto ele:graph[node])
            {
                indegree[ele]--;
                if(indegree[ele]==0)
                q.push(ele);
            }
        }

        return ans.size()==n;
    }
};