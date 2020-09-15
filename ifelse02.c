/*C-if else statement*/
#include<stdio.h>
int student2(){
    int number;
    printf("Student2\n");
    printf("Enter an integer: ",number);
    scanf("%d",&number);
    //True if the remainder is 0
    if(number%2==0){
        printf("%d is an Even integer.\a\a\a\n",number);
    }
    else{
        printf("%d is an Odd interger.\a\a\a\n",number);
    }
    printf("End Programming\n");
    return 0;
}
