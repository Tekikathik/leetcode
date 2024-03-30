int strStr(char* arr, char* n) {
    int a=strlen(arr) ,b=strlen(n),o=0;
    if (a<b) return -1;
    for(int i=0,j=0;i<a;i++){
        if (arr[i]==n[0]){
            o=i;
            while (j<b){
                if (arr[i] != n[j]){
                    i=o;
                    j=0;
                    break;
                }
                i++;
                j++;
            }
            if (j==b){
                return o;
            }
            
        }
        
    }
    return -1;
}