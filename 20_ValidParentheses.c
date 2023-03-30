bool isValid(char * s){
    if (strlen(s)%2 == 1) return false;
    char* stack = (char*)malloc(strlen(s)*sizeof(char));
    int point = 0;
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            stack[point++] = s[i];
        }
        else{
            if (point == 0) return false;
            else if (s[i] == ')' && stack[point-1] != '(') return false;
            else if (s[i] == '}' && stack[point-1] != '{') return false;
            else if (s[i] == ']' && stack[point-1] != '[') return false;
            stack[--point] = '\0';
        }
    }
    if (point == 0) return true;
    return false;
}