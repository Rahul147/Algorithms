#include<stdio.h>

#define INF 1000
#define MAX 100
/*
void Merge(int *a, int beg, int mid, int end) {
	int n1, n2, L[6], R[6];
	int i, j, k;
	
	n1 = mid - beg + 1;
	n2 = end - mid;
	
	for(i = 1; i <= n1; i++) {
		L[i] = a[beg + i - 1];
		//printf("%d ", L[i]);
	}
	//printf("\n");
	for(j = 1; j <= n2 ; j++) {
		R[i] = a[mid + j];
		//printf("%d ", R[i]);
	}
	//printf("\n");
	L[n1 + 1] = INF;
	R[n2 + 1] = INF;
	
	i = j = 1;

	for(k = beg; k <= end; k++) {
		
		if(L[i] <= R[j]) {
			
			a[k] = L[i];
			i = i + 1;
			//printf("%d", a[k]);
		}
			
		else {
			
			a[k] = R[j]; 
			j = j + 1;
			//printf("%d\n", a[k]);
		}
			
	}
	

}
*/

void Merge(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}

void Merge_Sort(int *a, int beg, int end) {
	int mid;
	
	if(beg < end) {
		
		mid = ( beg + end ) / 2;
		
		Merge_Sort(a, beg, mid);
		Merge_Sort(a, mid+1, end);
		
		Merge(a, beg, mid, end);
	}
	
	//return;
}

int main(void) {
	int i, end, beg, Arr[5], size;
	
	scanf("%d", &size);
	
	for(i = 1; i <= size; i++) {
		scanf("%d", &Arr[i]);
	}
	
	beg = 1;
	end = size;
	
	
	Merge_Sort(Arr, beg, end);

	for(i = 1; i <= size; i++) {
		printf("%d ", Arr[i]);
	}
	
	return 0;

}