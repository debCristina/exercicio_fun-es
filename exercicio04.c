#include<stdio.h>
#include<math.h>

double calcularVolumeC(double alt, double raio);

main(){
    double r = 10, a = 5;
    double res= calcularVolumeC(a, r);
    printf("O volume e: %.2lf", res);
    
}

double calcularVolumeC(double alt, double raio){
    double pi = 3.1415;
    double volumeC = pi * pow(raio, 2) * alt;
    return volumeC;
}
