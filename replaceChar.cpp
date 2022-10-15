void replaceCharacter(char input[], char c1, char c2) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++){
        len++;
    }
    for(int i = 0; i < len; i++){
        if(input[i] == c1){
            input[i] = c2;
        }
    }
    // Write your code here
}
