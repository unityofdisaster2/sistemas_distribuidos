#include<stdio.h>

int main (){
    char caracter = 0;
    int entero = 0;
    float flotante = 0;
    long largo = 0;
    double doble = 0;

    char *pcaracter;
    int *pentero;
    float *pflotante;
    long *plargo;
    double *pdoble;


    char cadena[] ="ESCOM - IPN";


    printf("caracter: %x\nentero: %x\nflotante: %x\nlargo: %x\ndoble: %x\n",&caracter,&entero,&flotante,&largo,&doble);
    printf("%d\n%d\n%d\n%d\n%d\n",sizeof(caracter),sizeof(entero),sizeof(flotante),sizeof(largo),sizeof(doble));
    printf("tamano de apuntador\n");
    printf("%d\n%d\n%d\n%d\n%d\n",sizeof(&caracter),sizeof(&entero),sizeof(&flotante),sizeof(&largo),sizeof(&doble));
    printf("ap\n");
    printf("%d\n%d\n%d\n%d\n%d\n",sizeof(pcaracter),sizeof(pentero),sizeof(pflotante),sizeof(plargo),sizeof(pdoble));

    for(int i = 0; i <= 10; i++){
        printf("valor cadena: %c\t",cadena[i]);
        printf("direccion: %x\n",&cadena[i]);
    }
    char a = 'a';
    int j = 0;
    while(a != '\0'){
        a = cadena[j]; 
        j++;
    }
    printf("valor de a: %c\n",a);
    printf("\nvalor %x\n",cadena[11]);



}
