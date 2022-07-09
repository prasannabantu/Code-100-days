class Solution {
public:
bool validPath(int n, vector<vector<int> >& edges, int start, int end) {
        unordered_map<int,vector<int> >graph;
        for(auto e:edges)
        {
                graph[e[0]].push_back(e[1]);
                graph[e[1]].push_back(e[0]);
        }
        vector<bool>vis(n,0);
        vis[start]=1;
        queue<int>q;
        q.push(start);
        while(!q.empty())
        {
                int pre=q.front();
                if(pre==end) return 1;
                for(auto e:graph[pre])
                {
                        if(!vis[e])
                        {
                                vis[e]=1;
                                q.push(e);
                        }
                }
                q.pop();
        }
        return false;
}
};

class Solution {
public:
bool validPath(int n, vector<vector<int> >& edges, int start, int end) {
        unordered_map<int,vector<int> >graph;
        for(auto e:edges)
        {
                graph[e[0]].push_back(e[1]);
                graph[e[1]].push_back(e[0]);
        }
        vector<bool>vis(n,0);
        stack<int>st;
        st.push(start);
        vis[start]=1;
        while(!st.empty())
        {
                int k=st.top();
                if(k==end) return 1;
                st.pop();
                for(auto node:graph[k])
                {
                        if(!vis[node])
                        {
                                vis[node]=1;
                                st.push(node);
                        }
                }
        }
        return 0;
}
};
