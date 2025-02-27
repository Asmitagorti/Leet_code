void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    int new[matrixSize][matrixColSize[0]];
    for(int i=0;i<matrixSize;++i){
        for(int j=0;j<matrixColSize[0];++j){
            new[i][j]=matrix[i][j];
        }
    }

    for(int i=0;i<matrixSize;++i){
        for(int j=0;j<matrixColSize[i];++j){
            if(matrix[i][j]==0) {
                for(int k=0;k<matrixSize;++k){
                    new[k][j]=0;
                }
            }
        }
    }
    for(int i=0;i<matrixSize;++i){
        for(int j=0;j<matrixColSize[i];++j){
            if(matrix[i][j]==0) {
                for(int k=0;k<matrixColSize[0];++k){
                    new[i][k]=0;
                }
            }
        }
    }
    for(int i=0;i<matrixSize;++i){
        for(int j=0;j<matrixColSize[i];++j){
            matrix[i][j]=new[i][j];
        }
    }


}
