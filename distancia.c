#include <math.h>
#include <stdio.h>

int main(void) {
  int n, i, j;
  scanf("%d", &n);
  double x[n];
  double y[n];
  for(i=0; i<n; i++) {
    scanf("%lf", &x[i]);
  }
  for(i=0; i<n; i++) {
    scanf("%lf", &y[i]);
  }
  double menor_distancia = 1e7;
  int a = -1;
  int b = -1;
  for(i=0; i<n;i++) {
    for(j=i+1; j<n; j++) {
      double dist = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
      if(dist < menor_distancia){
        menor_distancia = dist;
        a = i;
        b = j;
      }
    }
  }
  printf("Pontos: %d e %d\n", a,b);
  printf("Distancia: %f", menor_distancia);
  return 0;
}