#include <stdio.h>
int ele , pos ;   //global variables

// function to print Array of given size n
void printArr(int arr[], int n){
    for (int i = 0 ; i < n; i++){
        printf("%d ",arr[i]);
    }
}

// function to Add an element in an existing integer Array at given position
void insert_ele(int arr[] , int *n  , int ele , int pos ){
    (*n)++;
    printf("\nenter element you want to insert : ");
    scanf("%d",&ele);

    printf("enter position where you want to insert %d : ", ele);
    scanf("%d",&pos);

    for (int i = *n ; i >= pos ; i--){
        arr[i] = arr[i-1];
    }
    arr[pos-1] = ele ;
}

int main(){
    int n;
    printf("enter size of integer array : ");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0 ; i < n ; i++){
        printf("enter value for position%d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\noriginal array is :");
    printArr(arr , n);



    insert_ele(arr , &n , ele , pos );
    printf("\nArray after insersion :");
    printArr(arr , n);
}
