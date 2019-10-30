#include <stdio.h>
int main(){
    int cont;

    float dinheiro,impostoarrecadado,imposto;
    float imp1,imp2,imp3,imp4;
    cont=0;
    dinheiro=0,0;
    impostoarrecadado=0,0;
    imp1=0,075;
    imp2=0,15;
    imp3=0,22;
    imp4=0,275;
    
    printf("digite o valor para calcular o imposto\n");
    while (cont==0){
        scanf("%f",&dinheiro);
        dinheiro=("%.2f",dinheiro);
        printf("\n");
        if (dinheiro<0.0){
            break;
        }
        
        if (dinheiro<=1903.98){
            continue;
            
        }
        
        if (dinheiro>=1903.99 && dinheiro<=2826.65){
            ;
            imposto=dinheiro*0.075;
            impostoarrecadado=impostoarrecadado+imposto;
            
           
        }
      
        if (dinheiro>=2826.66 && dinheiro <=3751.05){
            
            imposto=dinheiro*0.15;
            impostoarrecadado=impostoarrecadado+imposto;
            
        }
        if (dinheiro>=3751.06 && dinheiro<=4664.68){
            
            imposto=dinheiro*0.225;
            impostoarrecadado=impostoarrecadado+imposto;
            
        } 
        if (dinheiro>=4664.69){
            imposto=dinheiro*0.275;
            impostoarrecadado=impostoarrecadado+imposto;
            
        }
        
    }
    printf("imposto arrecadado:%.2f\n",impostoarrecadado);
    return 0;
}
