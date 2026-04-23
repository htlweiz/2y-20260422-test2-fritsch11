/// \file
/// \author
/// \date

#include <inttypes.h>
#include <stdio.h>
#include <math.h>
// TODO: your code goes here

double compute_hypotenuse(int leg_a, int leg_b) {
  double hyp2 = 0;
  double hyp = 0;
  hyp2 = leg_a * leg_a + leg_b * leg_b;
  hyp = sqrt(hyp2);
  return hyp;
  }
 int main(void){
  double leg_a = 0, leg_b = 0;

  scanf("%lf", &leg_a);

  printf("%f", compute_hypotenuse(leg_a, leg_b));

  return 0;
}
