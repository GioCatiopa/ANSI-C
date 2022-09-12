/*directives to the preprocessor*/
#include <stdio.h>
/*function signature*/
int factorial_calculation(int);
int ric_factorial_calculation(int);
/*definition of the main function*/
int main(int argc, char const *argv[]) {
  int num, fact, fact_ric, out;
  /*loop to check that the entered value meets certain criteria*/
  do{
    printf("Enter an integer value: ");
    out = scanf("%d", &num);
    if(out != 1 || num < 0) {
      printf("Error! The entered value is invalid.\n");
    }
  }while(out != 1 || num < 0);
  /*the non-recursive function that calculates the factorial is called*/
  fact = factorial_calculation(num);
  /*the recursive function that calculates the factorial is called*/
  fact_ric = ric_factorial_calculation(num);
  /*the calculated results are printed*/
  printf("\nCalculation of the factorial of %d = %d\n", num, fact);
  printf("Recursive calculation of the factorial of %d = %d", num, fact_ric);

  return 0;
}
/*definition of the non-recursive function that calculates the factorial of an integer*/
int factorial_calculation(int num) {
  int fact, i;

  for(fact = 1, i = 2; i <= num; i++) {
    fact = fact * i;
  }

  return (fact);
}
/*definition of the recursive function for the calculation of the factorial of an integer*/
int ric_factorial_calculation(int num) {
  int fact;

  if(num == 0 || num == 1) {
    fact = 1;
  }else{
    fact = num * ric_factorial_calculation(num - 1);
  }
}
