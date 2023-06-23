//archivos de cabecera
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//declaracion de funciones
int Menu();
void Condicional();
void Fuerza();
void Carga();
void Distancia();
void Ejemplo();
void EntradaDatos1(float *, float *, float *);
void EntradaDatos2(float *, float *, float *);
void EntradaDatos3(float *, float *, float *);
void Diagrama();
void espera();
void Salir();
void Opinvalida();

//declaracion de constantes
#define K 8.99*(pow(10, -3))

//funcion principal
void main(){
  Condicional();
}

//cuerpo de las funciones
int Menu(){
  int sel = 0;
  printf("\nSeleccione una de las siguientes opciones:\n");
  printf(" 1.-Calcular fuerza ejercida sobre un objeto cargado\n");
  printf(" 2.-Calcular la magnitud de una de las cargas\n");
  printf(" 3.-Calcular la distancia entre las particulas\n");
  printf(" 4.-Mostrar Ejemplo\n");
  printf(" 5.-Mostrar Diagrama General\n");
  printf(" 6.-Salir\n");
  scanf("%d", &sel);
  return sel;
}

void Condicional(){
  system("clear");
  int sel;
  sel = Menu();
  switch (sel) {
    case 1: Fuerza();
      break;
    case 2: Carga();
      break;
    case 3: Distancia();
      break;
    case 4: Ejemplo();
      break;
    case 5: Diagrama();
      break;
    case 6: Salir();
      break;
    default: Opinvalida();
  }
}

void Fuerza(){
  system("clear");
  float q1, q2, r, res, mq1, mq2;
  EntradaDatos1(&q1, &q2, &r);
  res = (K*q1*q2)/pow(r,2);
  if(res > 0){
    printf("La fuerza de repulsion entre las cargas es %.3fN\n", res);
  }else{
    printf("La fuerza de atraccion entre las cargas es %.3fN\n", res);
  }
  espera();
  Condicional();
}

void Carga(){
  system("clear");
  float f, q, r, res;
  EntradaDatos2(&f, &q, &r);
  res = (f * pow(r,2)) / (K*q);
  printf("La carga q2 tiene una magnitud de %.3fμC\n", res);
  espera();
  Condicional();
}

void Distancia(){
  system("clear");
  float q1, q2, f, res;
  EntradaDatos3(&q1, &q2, &f);
  res = sqrt((K*q1*q2)/f);
  printf("La destancia que separa la cargas es de %.3fm\n", res);
  espera();
  Condicional();
}

void Ejemplo(){
  system("clear");
  float f = 0.237, q = -0.5, r = 3.5, res, d, di;
  printf("Fuerza = %.3fN\nCarga 1 = %.3fμC\nDistancia = %.3fm\n", f, q, r);
  res = (f * pow(r,2)) / (K*q);
  printf("La carga q2 tiene una magnitud de %.3fμC\n", res);
  espera();
  Condicional();
}

void EntradaDatos1(float *q1, float *q2, float *r){
  printf("Introduzca la carga 1 [μC](en caso de ser negativa introduzcala negativa)\n");
  scanf("%f", *&q1);
  printf("Introduzca la carga 2 [μC](en caso de ser negativa introduzcala negativa)\n");
  scanf("%f", *&q2);
  printf("Introduzca la distancia que separa las cargas [m]\n");
  scanf("%f", *&r);
}

void EntradaDatos2(float *f, float *q, float *r){
  printf("Introduzca la fuerza ejercida sobre la carga [N]\n");
  scanf("%f", *&f);
  printf("Introduzca la carga q1 [μC]\n");
  scanf("%f", *&q);
  printf("Introduzca la distancia que separa las cargas [m]\n");
  scanf("%f", *&r);
}

void EntradaDatos3(float *q1, float *q2, float *f){
  printf("Introduzca la magnitud de la carga 1 [μC]\n");
  scanf("%f", *&q1);
  printf("Introduzca la magnitud de la  carga 2 [μC]\n");
  scanf("%f", *&q2);
  printf("Introduzca la fuerza ejercida sobre las cargas [N]\n");
  scanf("%f", *&f);
}

void Diagrama(){
  system("clear");
  printf("\n\t\t\t\tMisma Carga\n\t\t\t\t");
  printf("q1\t\td\t\tq2\n");
  printf("\t\t\t\t▄▄\t\t \t\t▄▄\n");
  printf("\t\t\t\t██─────────────────────────────██\n");
  printf("\t\t\t\t▀▀\t\t \t\t▀▀\n");
  printf("\t\t\tF<───────\n");
  printf("\n\t\t\t\tDistinta Carga\n\t\t\t\t");
  printf("q1\t\td\t\tq2\n");
  printf("\t\t\t\t▄▄\t\t \t\t▄▄\n");
  printf("\t\t\t\t██─────────────────────────────██\n");
  printf("\t\t\t\t▀▀\t\t \t\t▀▀\n");
  printf("\t\t\t\t───────>F\n");
  espera();
  Condicional();
}

void espera(){
  int a;
  printf("Ingresa un numeor y luego presiona enter para continuar...");
  scanf("%d", &a);
}

void Salir(){
  printf("\nHasta luego, vuelve pronto :)\n");
}

void Opinvalida(){
  printf("Error: Opcion Invalida\n");
  Condicional();
}
