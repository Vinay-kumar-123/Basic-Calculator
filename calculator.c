#include<stdio.h>
int main(){
  float a,b,result;
  char opr;

  printf("Enter two number : \n");
  scanf("%f%f",&a,&b);

  printf("Enter operator(+,-,*,/): ");
  scanf(" %c", &opr);

  switch(opr){
  case '+': result = a + b;
   break;
  case '-': result = a - b;
   break;
  case '*': result = a * b;
   break;
  case '/': result = a / b;
  default:
    printf("please enter valid operator \n");
    break;
  
  }

  printf("Result is : %f",result);
  return 0;
}