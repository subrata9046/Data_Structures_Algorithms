#include<stdio.h>
void bubblesort(int array[],int size);
int main(){
int data[]={6,4,7,8,1,9,5};
int size = sizeof(data)/sizeof(data[0]);
bubblesort(data,size);
printf("sorted array:\n");
for(int i=0;i<size;i++){
    printf("%d ",data[i]);//{4,6}
  
}
}

void bubblesort(int array[],int size){ //int size = 7;
    for(int step=0;step<size-1;++step){//0<6;
        for(int i=0;i<size-step-1;++i){//0<6;
            if(array[i]>array[i+1]){//6>4;
                int temp=array[i];//temp=6;
                array[i]=array[i+1];//array[0]=4;
                array[i+1]=temp;//array[1]=6;
            }
        }
        printf("step %d: ",step+1);
for(int i=0;i<size;++i){
    printf("%d ",array[i]);
}
printf("\n");
    }
}