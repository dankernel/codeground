/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2017년 02월 01일 17시 33분 10초
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(int argc, const char *argv[])
{ 
  int ret = 0;

  int TC = 0;
  int test_case = 0;

  int loop = 0;
  int input = 0;
  int tmp = 0;
  int output = 0;

  // Test Case
  ret = scanf("%d", &TC);
  for(test_case = 1; test_case <= TC; test_case++) {

    // Init
    tmp = 0;
    output = 0;

    // Each numbers
    ret = scanf("%d", &loop);
    for (int i = 0; i < loop; i++) {
      /* code */
      ret = scanf("%d", &input);
      tmp ^= input;
      output = tmp;
    }
    
    // Output
    printf("Case #%d\n", test_case);
    printf("%d\n", output);
  }

  return 0;
}
