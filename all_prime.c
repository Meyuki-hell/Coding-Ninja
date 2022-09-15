#include <iostream>
using namespace std;

int main(){
    int n, count = 0;
    cin >>  n;
    for (int i = 2; i <= n; i++){
        for(int j = 2; j < i; j++){
            if( i % j == 0){
                count++;
                break;
                
            }
        }
        if(count == 0 && i != 1){
            cout << i << endl;
        }
        count = 0;
    }

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  
}
