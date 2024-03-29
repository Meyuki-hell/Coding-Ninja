int countWaysToMakeChange(int arr[], int n, int value, int **output){
	if(n == 0)
		return 0; 
	if(value == 0)
		 return 1;
	if(value < 0)
		return 0;

	if(output[n][value] > 0)
		return output[n][value];

	int ans1 = countWaysToMakeChange(arr + 1, n - 1, value, output);
	int ans2 = countWaysToMakeChange(arr, n, value - arr[0], output);

	output[n][value] = ans1 + ans2;

	return output[n][value] ;
}

int countWaysToMakeChange(int denominations[], int numDenominations, int value){
	//Write your code here
	int **output = new int *[11];

	for(int i = 0; i < 11; i++){
		output[i] = new int[1000];
		for(int j = 0; j < 1000; j++){
			output[i][j] = 0;
		}
	}
	int ans = countWaysToMakeChange(denominations, numDenominations, value, output);

	return ans;
}
