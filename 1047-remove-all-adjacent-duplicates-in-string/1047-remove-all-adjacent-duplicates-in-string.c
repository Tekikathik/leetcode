char* removeDuplicates(char* s) {
    char *stack=malloc(strlen(s)+1);
    int top=-1;
    stack[++top] = s[0];
    for (int i=1;i<strlen(s);i++){
        if (top== -1 || stack[top]!=s[i]){
            stack[++top]=s[i];
        }
        else {
            top--;
        }
    }
    stack[++top]='\0';
    return stack;
    
}