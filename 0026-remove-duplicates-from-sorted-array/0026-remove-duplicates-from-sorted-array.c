int removeDuplicates(int* arr, int a) {
    int k=1;
    for (int i=1;i<a;i++){
        if (arr[i]!=arr[k-1]){
            arr[k]=arr[i];
            k++;
        }
    }
    return k;
}