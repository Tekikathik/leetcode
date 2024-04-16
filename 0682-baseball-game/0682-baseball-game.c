int calPoints(char** operations, int operationsSize) {
    int  stack[1001];
    int top=-1;
    for(int i=0;i<operationsSize;i++){
        char ch=operations[i][0];
        if (ch=='C' && top != -1){
            top--;
        }
        else if (ch=='D' && top != -1){
            stack[++top]=stack[top]*2;
        }
        else if (ch=='+' && top !=-1){
            if (top>0){
                int a=top;
                stack[++top]=stack[a-1]+stack[a];
            }
        }
        else {
            stack[++top]=atoi(operations[i]);
        }
    }
    int sum=0;
    for (int i=0;i<=top;i++){
        sum=sum+stack[i];
    }
    return sum;
    
}