#include <stdio.h>
#include <math.h>

double a = 2, b = 7, n = 5, r = 0, st = 0, sc = 0;
float funcao(float x){
  return (x * x * x) + (2*(x * x)) + (3 * x) - 4;
}

double Delta(){ 
  double Dx = (b - a)/n;
  return Dx;
}


double retangulo(){
  double base = Delta();
  for(int i = 1; i <= n; i++){
    double resultado_ret = base * funcao(a + (i - 1) * base);
    printf("Retangulo %d = %.5lf;\n", i, resultado_ret);
    r += resultado_ret;
  }
  printf("Somatório final dos Retângulos = %0.2f;\n", r);
  return 0;
}

double triangulo_retangulo(){
  double base = Delta();
  printf("----------------------------------\n");
  for (int i = 1; i <= n; i++){
    double f1 = base * funcao(a + (i - 1) * base);
    double f2 = funcao(a + (i * base));
    double resultado_tri = f1 + (base/2) * (f2 - f1);
    printf("Triângulo Retângulo %d = %.5lf;\n", i, resultado_tri);
    st += resultado_tri;
  }
  printf("somatório final dos Triângulos Retângulos = %0.2f;\n", st);
  return 0;
}

double semi_circunferencia(){
  double base = Delta();
  printf("----------------------------------\n");
  for (int i = 1; i <= n; i++){
    double f1 = base * funcao(a + (i - 1) * base);
    double f3 = M_PI * (base * base)/8;
    double resultado_semi = f1 + f3;
    printf("Semicircunferência %d = %.5lf;\n", i, resultado_semi);
    sc += resultado_semi;
  }
  printf("somatório final das Semicircunferência = %0.2f;\n", sc);
  return 0;
}

int main(){
  printf("Cálculos das áreas sobre curvas.\n");
  printf("\nPara o Retângulo:\n");
  retangulo();
  printf("\nPara o Triângulo  Retângulo:\n");
  triangulo_retangulo();
  printf("\nPara a Semicircunferência:\n");
  semi_circunferencia();
}