#include <stdio.h>
int main()
{
  int num1,num2;
  char op;
  printf("Enter the value of num1: ");
  scanf("%d", &num1);
  printf("Enter the value of num2: ");
  scanf("%d", &num2);
  printf("Enter operator: ");
  scanf("\n%c", &op);
  if (op =='+')
  {
    printf("Sum:%d",num1+num2);
  }
  else if (op=='-')
  {
    printf("Diff:%d",num1-num2);
  }
  else if (op=='*')
  {
    printf("Product:%d",num1*num2);
  }
  else if (op=='/')
  {
    printf("Quotient:%d",num1/num2);
  }
  else
  {
    printf("Invalid operator");
  }
  return 0;
}
