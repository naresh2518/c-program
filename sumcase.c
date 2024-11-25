#include<stdio.h>
int main(){
    char operator;
    int a;
    int b;
    printf("enter an operator (+,-,*,/):");
    scanf("%c", &operator);
    printf("Enter two operands: ");
     scanf("%d %d", &a, &b);
     
     switch (operator) {
    case '+':
      printf("%.d + %.d = %.d", a, b, a + b);
      break;
    case '-':
      printf("%.d - %.d = %.d", a, b, a - b);
      break;
    case '*':
      printf("%.d * %.d = %.d", a, b, a * b);
      break;
    case '/':
      printf("%.d / %.d = %.d", a, b, a / b);
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }

  return 0;

}