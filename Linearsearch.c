#include<stdio.h>
int main(){
    int arr[10]={9,7,6,5,3,4,2,1,};
    int n=8;
    int key=1;
    int found=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("Found at index:%d ",i);
            found=1;
            break;
        }
    }
    if(found==0){
    printf("not found");
    }
    return 0;

}