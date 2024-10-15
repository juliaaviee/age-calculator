#include <stdio.h>
//código calcular idade
int main()
{
    int anoNasc;
    int anoAtual=2024;
    int idade;
    printf("Qual seu ano de nascimento? ");
    scanf("%d", &anoNasc);
    idade=anoAtual-anoNasc;
    printf("Sua idade é:%d", idade);

    return 0;
}
