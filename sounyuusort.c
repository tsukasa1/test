#include <stdio.h>

#define N 7
int a[N]={5,3,8,2,9,1,6};
void swap(int i, int j){
    int t=a[i];
    a[i]=a[j];
    a[j]=t;
}
void sort(void){
    int i,j,k,w;
    for(i=1;i<N;i++){
        for(j=i-1;j>=0;j--){
            if(a[j]<a[i]) break;
        }
        for(k=i;k>j+1;k--){
            swap(k,k-1);
        }
    }
}
int main(void){
    int k;
    for(k=0;k<N;k++){
        printf("%d ",a[k]);
    }
    printf("\n");
    sort();
    for(k=0;k<N;k++){
        printf("%d ",a[k]);
    }

    return 0;
}