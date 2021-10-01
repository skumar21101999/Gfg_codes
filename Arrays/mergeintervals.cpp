 vector<vector<int>> merge(vector<vector<int>>&v) {
        sort(v.begin(),v.end());
        int res=0;
        for(int i=1;i<v.size();i++){
            if(v[res][1]>=v[i][0]){
                v[res][1]=max(v[res][1],v[i][1]);
            }
            else{
                res++;
                v[res][0]=v[i][0];
                v[res][1]=v[i][1];
            }
        }
        vector<vector<int>> r;
        for(int i=0;i<=res;i++){
            r.push_back(v[i]);
        }
        return r;
    }