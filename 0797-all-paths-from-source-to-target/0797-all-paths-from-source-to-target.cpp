class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void dfs(int node, vector<vector<int>>& graph) {
        path.push_back(node);

        if(node == graph.size()-1) {
            ans.push_back(path);
        }
        else {
            for(int x : graph[node]) {
                dfs(x, graph);
            }
        }

        path.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(0, graph);
        return ans;
    }
};