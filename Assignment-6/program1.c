// calculate time complexity 
// write program which accept name from user and print
 #include<stdio.h>
 int main()
 {
    // to use fgets you need a pointer to character array as buffer where the read string wil be stored
    char Arr[50];
    
    printf(" enter the your name \n");
    fgets(Arr,sizeof(Arr),stdin);
     // printf("your name is : %s",Arr);  // %s having limitation its not recognise space. so we use fgets()

     printf("%s",Arr);
     

    return 0;
    
 }