1. Return the center of the given star graph.

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, bool> vis;
        int ans;
        for(auto edge : edges){
            if(vis[edge[0]]){
                ans = edge[0];
                break;
            }
            else vis[edge[0]] = true;
            if(vis[edge[1]]){
                ans = edge[1];
                break;
            }
            else vis[edge[1]] = true;
        }
        return ans;
    }
};

2. If the town judge exists, then:

    a. The town judge trusts nobody.
    b. Everybody (except for the town judge) trusts the town judge.
    c. There is exactly one person that satisfies properties 1 and 2.

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int ans = -1;
        vector<int> followers(n+1,0);
        vector<int> following(n+1,0);
        for(auto t : trust){
            int a = t[0];
            int b = t[1];
            followers[b]++;
            following[a]++;
        }
        for(int i=1;i<=n;i++){
            if(followers[i]==n-1 and following[i]==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1) return 1;
        int ans = -1;
        map<int,int> followers;
        for(auto t : trust){
            int a = t[0];
            int b = t[1];
            followers[b]++;
            followers[a]--;
        }
        for(auto follower : followers){
            if(follower.second==n-1){
                ans=follower.first;
                break;
            }
        }
        return ans;
    }
};