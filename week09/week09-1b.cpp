class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M=matrix.size();
        int N=matrix.size();
        int i=0,j=0,dir=0;  //0 right, 1 down, 2 left, 3 up
        int dI[4]={0,1,0,-1};   //value of move
        int dJ[4]={1,0,-1,0};   //value of move
        
        vector<int> ans;
        for(int k=0;k<N-1;k++){
            ans.push_back(matrix[i][j]);    //把答案送進去ans
            i+=dI[dir];
            j+=dJ[dir];
        }
        dir=(dir+1)%4;
        for(int kk=1;kk<=M+1;kk++){
            for(int k=0;k<M-kk;k++){
                ans.push_back(matrix[i][j]);
                i+=dI[dir];
                j+=dJ[dir];
            }
            dir=(dir+1)%4;
            for(int k=0;k<N-kk;k++){
                ans.push_back(matrix[i][j]);
                i+=dI[dir];
                j+=dJ[dir];
            }
            dir=(dir+1)%4;
        }
        return ans;   
    }
};