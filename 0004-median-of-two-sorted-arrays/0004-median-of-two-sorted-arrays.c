/*void merge(int *arr,int l,int m,int h){
	int i=l,j=m+1,k=0,B[h-l+1];
	while (i<=m && j<=h){
		if (arr[i]<=arr[j]){
			B[k]=arr[i];
			i++;
			k++;
		}
		else {
			B[k]=arr[j];
			j++;
			k++;
		}
	}
	while (i<=m){
		B[k]=arr[i];
		k++;
		i++;
	}
	while (j<=h){
		B[k]=arr[j];
		k++;
		j++;
	}
	k=0;
	for (int i=l;i<=h;i++){
		arr[i]=B[k];
		k++;
	}
}
void merge_sort(int *arr,int l,int h){
	if (l<h){
		int m=(l+h)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,h);
		merge(arr,l,m,h);
	}
}*/
double findMedianSortedArrays(int* arr, int a, int* arra, int b) {
    
    if (a==0){
        if ((b%2)==1){
            int c=b/2;
            return arra[c];
        }
        if (b%2==0){
            int c=b/2;
            float  f=(arra[c]+arra[c-1])/2.0;
            return f;
        }
        
    }
    if (b==0){
        if ((a%2)==1){
            int c=a/2;
            return arr[c];
        }
        if (a%2==0){
            int c=a/2;
            float  f=(arr[c]+arr[c-1])/2.0;
            return f;
        }
        
    }
    int A[a+b],i=0,j=0,k=0;
    while(i<a && j<b){
        if (arr[i]>arra[j]){
            A[k]=arra[j];
            j++;
            k++;
        }
        else {
            A[k]=arr[i];
            k++;
            i++;
        }
    }
    while(i<a){
        A[k]=arr[i];
        i++;
        k++;
    }
    while (j<b){
        A[k]=arra[j];
        j++;
        k++;
    }
    if ((a+b)%2==0){
       int   c=(a+b)/2;
       float f=(A[c]+A[c-1])/2.0;
        return f;
    }
    else if ((a+b)%2==1){
        int  c=(a+b)/2;
        float  f=A[c];
        return f;
    }
    else {
        return 1;
    }
}