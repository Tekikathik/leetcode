int searchInsert(int* arr, int a, int t) {
    for (int i=0;i<a;i++){
        if (arr[i]==t){
            return i;
        }
    }
    for (int i=0;i<a;i++){
        if (arr[i]>t){
            return i;
        }
    }
    return a;
}