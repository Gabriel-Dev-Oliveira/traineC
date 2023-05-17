#include <stdio.h>

int main()
{
    float notas[4];

    for(int i=0; i<4; i++)
    {
        printf("\nDigite a nota:");
        scanf("%f", &notas[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("\na nota é: %.2f", notas[i]);
    }
    return 0;
}
