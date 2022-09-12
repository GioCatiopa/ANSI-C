#include <stdio.h>

int factorial_calculation(int);
int ric_factorial_calculation(int);

int main(int argc, char const *argv[]) {
  int num, fact, fact_ric, out;

  do{
    printf("Enter an integer value: ");
    out = scanf("%d", &num);
  }while(out != 1 || num < 0);

  fact = factorial_calculation(num);

  fact_ric = ric_factorial_calculation(num);

  printf("\nCalculation of the factorial of %d = %d\n", num, fact);
  printf("Recursive calculation of the factorial of %d = %d", num, fact_ric);

  return 0;
}

int factorial_calculation(int num) {
  int fact, i;

  for(fact = 1, i = 2; i <= num; i++) {
    fact = fact * i;
  }

  return (fact);
}

int ric_factorial_calculation(int num) {
  int fact;

  if(num == 0 || num == 1) {
    fact = 1;
  }else{
    fact = num * ric_factorial_calculation(num - 1);
  }
}
