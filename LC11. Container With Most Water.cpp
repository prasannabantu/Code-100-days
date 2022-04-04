int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int i=0; int j=n;
        int h; int v=0;
        int maxi=-1;
        int f=0;
        while(i<j)
        {
            h=min(height[i],height[j]);
            v=max(v,(j-i)*h);

            while(i<j && height[i]<=h) i++;
            while(i<j && height[j]<=h) j--;


        }
        return v;
    }
