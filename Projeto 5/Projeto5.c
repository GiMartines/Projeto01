#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");

char categoria, refri;
float precoUni, precoEsto, total, imposto, impoTot;

printf("Digite o pre�o do produto: R$");
scanf("%f", &precoUni);

printf("\nDigite a categoria do produto, sendo (A-Alimenta��o, L-Limpeza, V-Vestu�rio): ");
fflush (stdin);
scanf("% c", &categoria);
categoria = toupper (categoria);

printf("\nDigite S se o produto precisa de refrigera��o e N para n�o: ");
fflush (stdin);
scanf("% c", &refri);
refri = toupper (refri);

if(precoUni <= 20){
    if(categoria = 'A'){
        precoEsto = 5;
        imposto = 0.4;
    }
    else if(categoria = 'L'){
        precoEsto = 10;
        imposto = 0.2;
    }
    else if(categoria = 'V'){
        precoEsto = 15;
        imposto = 0.2;
    }
}
else if(precoUni > 20 && precoUni <= 50){
    if(refri = 'S'){
        precoEsto = 21;
        imposto = 0.4;
    }
    else if(refri = 'N'){
        precoEsto = 0;
        imposto = 0.2;
    }
}
else{
    if(refri = 'S'){
        if(categoria = 'A'){
            precoEsto = 6;
            imposto = 0.4;
        }
        else if(categoria = 'L'){
            precoEsto = 2;
            imposto = 0.4;
        }
        else if(categoria = 'V'){
            precoEsto = 4;
            imposto = 0.4;
        }
    }
    if(refri = 'N'){
        if(categoria != 'A' && categoria != 'V'){
            precoEsto = 0;
            imposto = 0.4;
        }
        else if(categoria = 'L'){
            precoEsto = 1;
            imposto = 0.2;
        }
    }
}

printf("\nPre�o unit�rio: R$%.2f", precoUni);
printf("\nPre�o estocagem: R$%.2f", precoEsto);

impoTot = precoUni * imposto;

printf("\nImposto: R$%.2f", impoTot);

total = precoUni + precoEsto + impoTot;

printf("\nTotal: R$%.2f", total);


return 0;
}
