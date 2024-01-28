#include <stdio.h>

float problem1(){
  float num1 = 2.5;
  printf("Problem 1 Result: %.10f\n", num1);
  return num1;
}

float problem2() {
    float num2 = -1.0/10.0;
    printf("\nProblem 2 Result: %.10f\n", num2);
    return num2;
}

double problem3() {
    double num3 = 1/3;
    printf("\nProblem 3 Result: %f\n", num3);
    num3 = 1.0/3.0;
    printf("Problem 3 Result: %f\n", num3);
    return num3;
}

float problem4() {
    double num4 = 9999999.3399999999;
    printf("\nProblem 4 Result: %f\n", num4);
    float num4_new = (float)num4;
    printf("Problem 4 Result: %f\n", num4_new);
    return num4_new;
}

int problem5() {
  int num5;
  num5 = 30000*30000;
  printf("\nProblem 5 Result: %d\n", num5);
  num5 = 40000*40000;
  printf("Problem 5 Result: %d\n", num5);
  num5 = 50000*50000;
  printf("Problem 5 Result: %d\n", num5);
  num5 = 60000*60000;
  printf("Problem 5 Result: %d\n", num5);
  num5 = 70000*70000;
  printf("Problem 5 Result: %d\n", num5);
  return num5;
}

float problem6() {
  float num6 = 1e20;
  printf("\nProblem 6 Result: %f\n", num6);
  float num6_two = (1e20 + 3500000000);
  printf("Problem 6 Result: %f\n", num6_two);
  float num6_three = (1e20 + (3500000000 * 1000000000));
  printf("Problem 6 Result: %f\n", num6_three);
  float loop_num;
  loop_num = 1e20;
  for (int i = 0; i < 1000000000; i++) {
    loop_num += 3500000000;
  }
  printf("Problem 6 Result: %f\n", loop_num);
}

int main() {
  problem1();

  problem2();

  problem3();

  problem4();

  problem5();

  problem6();
}