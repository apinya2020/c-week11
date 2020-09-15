#include<stdio.h>
int student4(){
    int number1,number2;
    printf("Student4");
    scanf("%d%d ",&number1,&number2);
    if(number1>=number2){
      if(number1==number2){
        printf("Result:%d=%d",number1,number2);
      }
      else{
        printf("Result:%d>%d",number1,number2);
      }
    }
    else{
       printf("Result:%d<%d",number1,number2);
    }
    return 0;
}
