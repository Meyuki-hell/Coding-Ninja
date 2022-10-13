int binarySearch(int *input, int n, int val)
{
    int start = 0, end = n, mid = 0;
    //bool f = false;
    
    while(start <= end){
        mid = (start + end) / 2;
        if( input[mid] == val){
           // f = true;
            return mid;
        }
        else if(input[mid] > val){
            //f = true;
            end = mid - 1;
        }
        else {
           // f =true;
            start = mid + 1;
        }
        
    }
    return -1;
    
    //Write your code here
}
