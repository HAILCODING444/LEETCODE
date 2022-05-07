// o(n ^ 2 ) time 
// o (1) space 
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size() ; 
        for(int i=0 ; i<n ; i++){
            int m = image[i].size() ;
            int p=0 , q=m-1 ; 
            while(p <= q){
                int temp = image[i][p] ; 
                image[i][p] = image[i][q] ; 
                image[i][q] = temp ; 
                p++ ; 
                q-- ; 
            }
            
            for(int j=0 ; j<m ; j++){
                if(image[i][j] == 0) image[i][j] =1 ; 
                else image[i][j] = 0 ; 
            }
        }
        return image ; 
    }
};


/*
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        int n = arr.size() ;
        int m = arr[0].size() ; 
        // reverse each row 
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m/2 ; j++){
                int temp = arr[i][j] ; 
                arr[i][j] = arr[i][m-j-1] ;
                arr[i][m-j-1] = temp ; 
            }
        }
        // invert everything 
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                arr[i][j] = !arr[i][j] ; 
            }
        }
        return arr ; 
    }
};
*/ 