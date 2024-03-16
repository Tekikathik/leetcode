void merge(int* arr, int a, int m, int* arra, int b, int n) {
    for (int i=m,j=0;i<a,j<b;i++,j++){
        arr[i]=arra[j];
    }
    for (int i=0;i<a-1;i++){
        for (int j=0;j<a-i-1;j++){
            if (arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}