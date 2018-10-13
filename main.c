#include <stdio.h>



void wyswietl_uklad(double a1, double a2, double b1, double b2, double c1, double c2);

void wyswietl_info();

void wyswietl_info() {
    printf("Program rozwiazuje układ dwóch równań liniowych.\n");
    printf("a1*x + b1*y = c1\n");
    printf("a2*x + b2*y = c2\n");
    printf("\n");
    printf("Podaj współczynniki.\n");
}

void wyswietl_uklad(double a1, double a2, double b1, double b2, double c1, double c2) {
    printf("Twój układ równań:\n");
    printf("%5.2lf*x + %5.2lf*y = %5.2lf\n", a1, b1, c1);
    printf("%5.2lf*x + %5.2lf*y = %5.2lf\n", a2, b2, c2);
    printf("\n");
}





double wyznacznik(double k, double l, double m, double n){
    return k * n - l * m;
}

int main() {
    double a1, a2, b1, b2, c1, c2;
    double W, Wx, Wy;
    double x, y;


    wyswietl_info();

    printf("Podaj a1: ");
    scanf("%lf", &a1);
    printf("Podaj a2: ");
    scanf("%lf", &a2);
    printf("Podaj b1: ");
    scanf("%lf", &b1);
    printf("Podaj b2: ");
    scanf("%lf", &b2);
    printf("Podaj c1: ");
    scanf("%lf", &c1);
    printf("Podaj c2: ");
    scanf("%lf", &c2);

    wyswietl_uklad(a1, a2, b1, b2, c1, c2);



    W = wyznacznik(a1, a2, b1,b2);
    Wx = wyznacznik(c1, c2, b1, b2);
    Wy = wyznacznik(a1, a2, c1, c2);

    printf("Wyznacznik W = %lf", W);
    printf("Wyznacznik Wx = %lf", Wx);
    printf("Wyznacznik Wy = %lf", Wy);
    printf("\n");

    if(W !=0){
        x = Wx / W;
        y = Wy / W;
        printf("Rozwiązanie:\n");
        printf("x = %5.2lf, y = %5.2lf", x, y);
        printf("\n");
    } else{
        if(Wx != 0.0 || Wy != 0.0) {
            printf("Układ równań sprzeczny - nie ma rozwiązania.");
        } else{
            printf("Układ równań nieoznaczony - nieskończenie wiele rozwiązań");
        }
    }

    return 0;
}