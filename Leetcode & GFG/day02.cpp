73. Set Matrix Zeroes

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rows, cols;
        int n = matrix.size();   // rows
        int m = matrix[0].size();  // cols
        cout<<n<<" "<<m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(auto row : rows)    cout<<row<<" ";
        cout<<"\n";
        for(auto col : cols)    cout<<col<<" ";
        cout<<"\n";
        for(auto row : rows){
            for(int j=0;j<m;j++){
                matrix[row][j]=0;
            }
        }
        for(auto col : cols){
            for(int i=0;i<n;i++){
                matrix[i][col]=0;
            }
        }
        
    }
};

118. Pascals Triangle

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector< vector<int> > ans;
        if(n==0) return ans;
        ans.push_back({1});
        if(n==1) return ans;
        ans.push_back({1,1});
        if(n==2) return ans;

        for(int i=2; i<n; i++){
            vector<int> arr;
            arr.push_back(1);
            for(int j=0; j+1<i; j++){
                arr.push_back(ans[i-1][j] + ans[i-1][j+1]);
            }
            arr.push_back(1);
            ans.push_back(arr);
        }
        return ans;
    }
};
