class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();//row
        int m=matrix[0].size();//col
        bool firstRowimpacted=false;
        bool firstColimpacted=false;
        for(int col=0;col<m;col++){
            if(matrix[0][col]==0){
                firstRowimpacted=true;
                break;
            }
        }
        for(int row=0;row<n;row++){
            if(matrix[row][0]==0){
                firstColimpacted=true;
                break;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;// first element of row 
                    matrix[0][j]=0;//first element of col
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstRowimpacted){
            for(int j=0;j<m;j++){
                matrix[0][j]=0;
            }
        }
        if(firstColimpacted){
            for(int i=0;i<n;i++){
                matrix[i][0]=0;
            }
        }

    }
};