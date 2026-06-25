class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<vector<int>> graph(n);
        vector<int> indegree(n,0);
        for(int i=0;i<prerequisites.size();i++)
        {
            int a=prerequisites[i][0];
            int b=prerequisites[i][1];


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

        if (ans.size()==n)
        return ans;
        
        
        return {};
    }
};