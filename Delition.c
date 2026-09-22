#include<stdio.h>
int main(){
    int array[5]={10,20,30,40,50};
    int n=5;
    int pos=1;
    for(int i=pos;i<n-1;i++){
        array[i]=array[i+1];
    }
    n--;
    printf("array after Deletion:\n");
     for(int i=0;i<n;i++){
    printf("%d ",array[i]);
     }
     return 0;
}