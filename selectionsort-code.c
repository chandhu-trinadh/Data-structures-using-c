#include <stdio.h>
#include<stdlib.h>
void selectionSort(int N[],int n){
int i,j,min,t;
for(i=0;i<n;i++){
min=i;
for(j=i+1;j<n;j++)
if (N[j]<N[min])min=j;
t=N[i];N[i]=N[min];N[min]=t;
}
}
int main(){
int n,*arr,i;
printf("enter the number of elements:");
scanf("%d",&n);
arr=(int*) calloc (n,sizeof (int));
printf("enter the values:\t");
for(i=0;i<n;i++)scanf("%d",(arr+i));
selectionSort (arr,n);
for(i=0;i<n;i++)printf("\t %d \t",*(arr+i));
return 0;
}