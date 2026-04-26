int** generateMatrix(int n, int* returnSize, int** returnColumnSizes) {
    int i,j;
    int **resp=(int**)malloc(n *sizeof(int));
    *returnColumnSizes=(int*)malloc(n *sizeof(int));
    if(!resp){
        printf("erro ao alocar");}
    if(!returnColumnSizes){
        printf("erro ao malocar");}
    for(i=0;i<n;i++){
        resp[i] = (int*)malloc(n * sizeof(int));
    }
    return (resp);
