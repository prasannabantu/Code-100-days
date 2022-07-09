class Solution {
public:
int ori;
queue<vector<int> >q;
void dfs(vector<vector<int> > &image,int sr,int sc,int color)
{
        while(!q.empty())
        {
                auto k=q.front();
                sr=k[0],sc=k[1];
                if(image[sr][sc]==ori) image[sr][sc]=color;
                if(sr-1>=0 && image[sr-1][sc]==ori) q.push({sr-1,sc});
                if(sc-1>=0 && image[sr][sc-1]==ori) q.push({sr,sc-1});
                if(sc+1<=image[0].size()-1 && image[sr][sc+1]==ori) q.push({sr,sc+1});
                if(sr+1<=image.size()-1 && image[sr+1][sc]==ori) q.push({sr+1,sc});
                q.pop();
        }
}
vector<vector<int> > floodFill(vector<vector<int> >& image, int sr, int sc, int color) {
        q.push({sr,sc});
        ori=image[sr][sc];
        if(ori==color) return image;
        dfs(image,sr,sc,color);
        return image;
}
};
