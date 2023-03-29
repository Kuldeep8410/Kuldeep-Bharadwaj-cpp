#include<stdio.h>
int main(){
    int arr[20];
    int i,num;
    for(i=0;i<=19;i++){
        printf("\nenter the %d element of an array ",i+1);
        scanf("%d",&arr[i]);
        }
        printf("\nenter the element which you want to search ");
        scanf("%d",&num);
        for(i=0;i<=19;i++){
            if(arr[i]==num){
                printf("\n%d ",i+1);
            }
        }
        printf("is the element");
        
}
