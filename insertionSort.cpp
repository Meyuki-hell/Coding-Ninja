void insertionSort(int *input, int size)
{
    
    for(int i = 1; i < size; i++){
        int curr;
        curr = input[i];
        int j;
        for(j = i - 1; j >= 0; j--){
            
            if(curr < input[j]){
                input[j+1] = input[j];
            }
            else{
                break;
            }
           
        }
        input[j+1] = curr;
    }
    
    //Write your code here
}
