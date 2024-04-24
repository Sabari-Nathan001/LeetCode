class Solution {
public:
 void dfs(vector<vector<int>>&graph,vector<vector<int>>& Totalpaths,vector<int>Eachpath,int start,int destination){
        Eachpath.push_back(start);
        if(start==destination){
            Totalpaths.push_back(Eachpath);
            return;
        }
        for(auto x:graph[start]){
            dfs(graph,Totalpaths,Eachpath,x,destination);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph){
        vector<vector<int>> Totalpaths;
        vector<int>Eachpath;
        int nodes=graph.size();
        if(nodes==0)
            return Totalpaths;
        dfs(graph,Totalpaths,Eachpath,0,nodes-1);

        return Totalpaths;
    }
};