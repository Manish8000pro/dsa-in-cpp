vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int>spiral;

	int rowStart = 0, colStart = 0,rowEnd = matrix.size()-1,colEnd = matrix[0].size()-1;

	while(rowStart<=rowEnd&&colStart<=colEnd){
		//first row ko print kravo 

		for(int j=colStart;j<=colEnd;j++){
			spiral.push_back(matrix[rowStart][j]);
		}
		rowStart++;

		// Last column ko print kravo
			
		
		for(int i = rowStart;i<=rowEnd;i++){
			spiral.push_back(matrix[i][colEnd]);
		}
		colEnd--;
		

		// Last row ko print kravo 
		if(rowStart<=rowEnd){
			for(int j=colEnd;j>=colStart;j--){
			spiral.push_back(matrix[rowEnd][j]);
		}
		rowEnd--;
		}
		

		// first col ko print kravo
		if(colStart<=colEnd){
			for(int i = rowEnd;i>=rowStart;i--){
			spiral.push_back(matrix[i][colStart]);
		}
		colStart++;
		}
		
	}
	return spiral;
}