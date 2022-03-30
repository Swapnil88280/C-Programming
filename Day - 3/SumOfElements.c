void sumOfElements(int *arr){
    
    int sum=0;
    
    printf("Size %d\n",sizeof(arr)/sizeof(arr[0]));
    for(int i=0; i<5; i++){
        sum+=arr[i];
        printf("\n%d ",arr[i]);
    }

    printf("\n Sum of elements %d",sum);

}