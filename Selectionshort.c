#include <stdio.h>
void selectionsort(int array[],int size){
    for(int step=0;step<size-1;step++){
        int min_idx = step;
        for(int i = step+1;i<size;i++){
            if (array[i]<array[min_idx]){
                min_idx=i;
            }
        }
        int temp =array[min_idx];
        array[min_idx]=array[step];
        array[step]=temp; 

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
selectionsort(data,size);
printf("sorted array:\n");
for(int i=0;i<size;i++){
    printf("%d ",data[i]);
}
}