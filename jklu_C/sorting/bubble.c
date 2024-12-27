#include<stdio.h>
#include<stdlib.h>
void swap(int* a,int* b){
    int temp;
    temp=*a;;
    *a=*b;
    *b=temp;

}

void bubblesort( int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j =0;j<n-i+1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    printf("the sorted list is ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}
int main(){
    int size;
    printf("enter sizeof array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter the value ");
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,size);   
}