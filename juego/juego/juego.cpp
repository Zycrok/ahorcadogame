
#include <iostream>



void juego()
{
    char map[10][10];
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j) {
            map[i][j] = '-';
        }
    }

    int mov;
    int x = 0;
    int y = 0;
    map[0][0] = 'x';
    for (int i = 0; i < 10;i++)
    {
        for (int j = 0;j < 10;j++)
        {
            printf("%c ", map[i][j]);
        }
        printf("\n");
    }
    while (map[3][3] != 'x')
    {
        printf("Arriba [1] \nAbajo[2] \nIzquierda[3]\nDerecha [4]\nIngresa tu siguiente movimiento:");
        scanf_s("%d", &mov);
        switch (mov)
        {
        case 1:
            x--;
            if (x >= 0 && y>=0 && x<10 && y<10)
            {
                map[0 + x + 1][0 + y] = '-';
                map[0 + x][0 + y] = 'x';
            }
            else
            {
                printf("Saliste del mapa :(");
                exit(0);
            }
            break;
        case 2:
            x++;
            if (x >= 0 && y >= 0 && x < 10 && y < 10)
            {
                map[0 + x - 1][0 + y] = '-';
                map[0 + x][0 + y] = 'x';
            }
            else
            {
                printf("Saliste del mapa :(");
                exit(0);
            }
            break;
        case 3:
            y--;
            if (x >= 0 && y >= 0 && x < 10 && y < 10)
            {
                map[0 + x][0 + y + 1] = '-';
                map[0 + x][0 + y] = 'x';
            }
            else
            {
                printf("Saliste del mapa :(");
                exit(0);
            }
            break;
        case 4:
            y++;
            if (x >= 0 && y >= 0 && x < 10 && y < 10)
            {
                map[0 + x][0 + y - 1] = '-';
                map[0 + x][0 + y] = 'x';
            }
            else
            {
                printf("Saliste del mapa :(");
                exit(0);
            }
            break;

        }

        for (int i = 0; i < 10;i++)
        {
            for (int j = 0;j < 10;j++)
            {
                printf("%c ", map[i][j]);
            }
            printf("\n");
        }
    }
    printf("Saliste del mapa, empieza el minijuego del ahorcado, adivina la palabra: \n");
    char word[3] = { 'o', 's', 'o' };
    char adv[3];
    int vidas = 5;
    for (int i = 0; i < 3;i++)
    {
        adv[i] = '_';
        printf("%c", adv[i]);
    }
    printf("\n");
    while (vidas > 0)
    {
        char letra;
        printf("Ingresa una letra: ");
        scanf_s(" %c", &letra);
        if (word[0] == letra || word[1] == letra || word[0] == letra)
        {
            for (int i = 0; i < 3; i++)
            {
                if (word[i] == letra)
                {
                    adv[i] = letra;
                }
            }
        }
        else
        {
            vidas--;
        }
        for (int i = 0; i < 3; i++)
        {
            printf("%c ", adv[i]);
        }
        printf("\n");
        if (word[0] == adv[0] && word[1] == adv[1] && word[2] == adv[2])
        {
            printf("Felicidades Ganaste!!");
            break;
        }
        printf("Te quedan %d vidas\n", vidas);

    }
}

void ola()
{
    char word[3] = { 'o', 's', 'o' };
    char adv[3];
    int vidas = 5;
    for (int i = 0; i < 3;i++)
    {
        adv[i] = '_';
    }
    while (vidas > 0)
    {
        char letra;
        printf("Ingresa una letra: ");
        scanf_s(" %c", &letra);
        if (word[0] == letra || word[1] == letra || word[0] == letra)
        {
            for (int i = 0; i < 3; i++)
            {
                if (word[i] == letra)
                {
                    adv[i] = letra;
                }
            }
        }
        else
        {
            vidas--;
        }
        for (int i = 0; i < 3; i++)
        {
            printf("%c ", adv[i]);
        }
        printf("\n");
        if (word[0] == adv[0] && word[1] == adv[1] && word[2] == adv[2])
        {
            printf("Felicidades Ganaste!!");
            break;
        }
        printf("Te quedan %d vidas\n", vidas);
        
    }
}

void prueba()
{
    char word[3] = { 'o', 's', 'o' };
    char adv[3];
    int vidas = 5;
    while (vidas > 0)
    {
        char letra;
        printf("Ingresa una letra: ");
        scanf_s(" %c", &letra);
        if (word[0] == letra || word[1] == letra || word[0] == letra)
        {
            for (int i = 0; i < 3; i++)
            {
                if (word[i] == letra)
                {
                    adv[i] = letra;
                }
            }
        }
        else
        {
            vidas--;
        }
        printf("Te quedan %d vidas", vidas);
    }
}


int main()
{
    juego();
}
