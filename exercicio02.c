#include<stdio.h>
#include<string.h>

// prototipo da funcao

void mostrarMes();
int entradaMes();

main(){
 
    mostrarMes();
    
}

int entradaMes(){
    int numero;

    printf("Digite um numero correspondente a um mes: ");
    scanf("%d", &numero);
    return numero;
}

// implementar a função
void mostrarMes(){
    int num = entradaMes();
    char nomeMes[20];
    int diasMes=0;

    switch (num){
        case 1: case 3: case 5:  case 7: case 8: case 10: case 12:
        diasMes = 31;

        if(num == 1 ){
            strcpy(nomeMes, "Janeiro");
        }else if(num == 3){
            strcpy(nomeMes, "Marco");
        }else if(num == 5){
            strcpy(nomeMes, "Maio");
        }else if(num == 7){
            strcpy(nomeMes, "Julho");
        }else if(num == 8){
            strcpy(nomeMes, "Agosto");
        }else if(num == 10){
            strcpy(nomeMes, "Outubro");
        }else{
             strcpy(nomeMes, "Dezembro");
        }
        break;

        case 4: case 6: case 9: case 11:
        diasMes=30;
         if(num == 4 ){
            strcpy(nomeMes, "Abril");
        }else if(num == 6){
            strcpy(nomeMes, "Junho");
        }else if(num == 9){
            strcpy(nomeMes, "Setembro");
        }else{
             strcpy(nomeMes, "Novembro");
        }
        break;

        case 2:
            diasMes=28;
            strcpy(nomeMes, "Fvereiro");
            break;
        
        default:
            printf("Valor invalido");

    }

    printf("total de dias: %d, mes correspondente %s", diasMes, nomeMes);
}
