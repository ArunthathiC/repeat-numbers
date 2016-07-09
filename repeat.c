#include<stdio.h>
void main(){
  int a[10],n,i;
  printf("Enter the numbers");
  scanf("%d",&n);
  printf("Enter the array elements:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    for(j=1;j<i;j++){
    if(a[i]==a[j]){
    printf("%d",a[i]);
    }
  }
  }
  }
  
