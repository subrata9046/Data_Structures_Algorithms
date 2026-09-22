#include <stdio.h>
void insertionsort(int array[],int size){
    for(int step=1;step<size;step++){
        int key = array[step];
        int j = step-1;
        while(j>=0 && key<array[j]){
            array[j+1]=array[j];
            --j;
        }
        array[j+1]=key;
        printf("step %d: ",step+1);
for(int i=0;i<size;++i){
    printf("%d",array[i]);
}
printf("\n");
            
            }
        }

int main(){
int data[]={7,4,9,2,3,5,1,6};
int size = sizeof(data)/sizeof(data[0]);
insertionsort(data,size);
printf("sorted array:\n");
for(int i=0;i<size;i++){
    printf("%d ",data[i]);
}
}