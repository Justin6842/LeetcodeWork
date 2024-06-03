char * longestCommonPrefix(char ** strs, int strsSize){
    if (strsSize == 1) return strs[0];
    int finalLen = 0;
    while (strs[0][finalLen] != '\0'){
        finalLen++;
    }
    for (int i = 1; i < strsSize; i++){
        if (strs[i][0] == '\0'){
            return "";
        }
        for (int j = 0; j < finalLen; j++){
            if (strs[i][j] == '\0' || strs[i][j] != strs[0][j]){
                finalLen = j;
                break;
            }
        }
    }
    if (finalLen > 0){
        char* sol = malloc(finalLen * sizeof(int));
        strs[0][finalLen] = '\0';
        strcpy(sol, strs[0]);
        return sol;
    }
    return "";
}