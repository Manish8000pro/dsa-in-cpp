void rotate(vector<vector<int>>& matrix) {
    int rowSize = matrix.size(),colSize = matrix[0].size();

	for(int i = 0;i<rowSize-1;i++){
		for(int j = i+1;j<colSize;j++){
			swap(matrix[i][j],matrix[j][i]);
		}
	}

	// vertically flip kr do 180 degree rotate kr do 

	int colStart = 0, colEnd = matrix[0].size()-1;

	while(colStart<colEnd){
		for(int i = 0;i<rowSize;i++){
			swap(matrix[i][colStart],matrix[i][colEnd]);
		}
		colStart++,colEnd--;
	}
	
}