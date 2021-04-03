#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inv_jogadores=1;
    float ouro, cocaina, maconha, arte, dinheiro;
	int loot_ouro = 0, loot_cocaina = 0, loot_maconha = 0, loot_arte = 0, loot_dinheiro = 0;
	int i;
	int cont_o=0, cont_c=0, cont_m=0, cont_a=0, cont_d=0;

    //Porcentagem da bag que é preenchida com cada loot
	ouro = 2.0/3.0;
	cocaina = 1.0/2.0;
	maconha = 2.0/5.0;
	arte = 1.0/2.0;
	dinheiro = 1.0/4.0;

    //Obtém o numero de players e o inventário de cada
	printf("Qual o numero de jogadores?\n");
	scanf("%f", &inv_jogadores);
	printf("\n");
	inv_jogadores = inv_jogadores*100;      //Converte o inventário para porcentagem

	//Número de bags que tem no mapa
	printf("Quantas bags de ouro, cocaina, maconha, pintura e dinheiro tem no mapa?\nDIGITE OS NUMEROS COM ESPACOS ENTRE ELES!\n");
	printf("O C M P D\n");
	scanf("%d %d %d %d %d", &loot_ouro, &loot_cocaina, &loot_maconha, &loot_arte, &loot_dinheiro);

    //Subtrai o loot do inventário para descobrir
    //quantas bags precisa pegar
    //O valor pode ficar negativo mas não tem problema!
    for(i=0;i<loot_ouro && inv_jogadores>0;i++){
        inv_jogadores = inv_jogadores - ouro*100;
    }
    cont_o = i;

    for(i=0;i<loot_cocaina && inv_jogadores>0;i++){
        inv_jogadores = inv_jogadores - cocaina*100;
    }
    cont_c = i;

    for(i=0;i<loot_maconha && inv_jogadores>0;i++){
        inv_jogadores = inv_jogadores - maconha*100;
    }
    cont_m = i;

    for(i=0;i<loot_arte && inv_jogadores>0;i++){
        inv_jogadores = inv_jogadores - arte*100;
    }
    cont_a = i;

    for(i=0;i<loot_dinheiro && inv_jogadores>0;i++){
        inv_jogadores = inv_jogadores - dinheiro*100;
    }
    cont_d = i;

    printf("\n\nVoce precisa de pegar:\n");
    if(cont_o>0){
        printf("%d ouro(s)\n", cont_o);
    }

    if(cont_c>0){
        printf("%d cocaina(s)\n", cont_c);
    }

    if(cont_m>0){
        printf("%d maconha(s)\n", cont_m);
    }

    if(cont_a>0){
        printf("%d pintura(s)\n", cont_a);
    }

    if(cont_d>0){
        printf("%d dinheiro(s)", cont_d);
    }
    printf("\n\n");
    system("PAUSE");
	return 0;
}

