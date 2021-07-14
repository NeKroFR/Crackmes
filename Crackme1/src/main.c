#include <stdio.h>
#include<string.h>
#include <conio.h>


int main()
{



    printf("\033[0;32m                       ______\n");
    printf("                    .-\"      \"-.\n");
    printf("                   /            \\\n");
    printf("       _          |              |  \n");
    printf("      ( \\         |,  .-.  .-.  ,|         / )\n");
    printf("       > \"=._     | )(__/  \\__)( |     _.=\" <\n");
    printf("      (_/\"=._\"=._ |/     /\\     \\| _.=\"_.=\"\\_)\n");
    printf("             \"=._ (_     ^^     _)\"_.=\"\n");
    printf("                _.=\"| \\IIIIII/ |\"=._\n");
    printf("                _.=\"| \\IIIIII/ |\"=._\n");
    printf("      _     _.=\"_.=\"\\          /\"=._\"=._     _\n");
    printf("     ( \\_.=\"_.=\"     `--------`     \"=._\"=._/ )\n");
    printf("      > _.=\"                            \"=._ <\n");
    printf("     (_/          \033[0;37m   \033[46mcreated by nekro\033[0;32m      \\_)\n");
    printf(" ██████╗██████╗  █████╗  ██████╗██╗  ██╗███╗   ███╗███████╗     ██╗ ██╗  ██╗\n");
    printf("██╔════╝██╔══██╗██╔══██╗██╔════╝██║ ██╔╝████╗ ████║██╔════╝    ████████╗███║\n");
    printf("██║     ██████╔╝███████║██║     █████╔╝ ██╔████╔██║█████╗      ╚██╔═██╔╝╚██║\n");
    printf("██║     ██╔══██╗██╔══██║██║     ██╔═██╗ ██║╚██╔╝██║██╔══╝      ████████╗ ██║\n");
    printf("╚██████╗██║  ██║██║  ██║╚██████╗██║  ██╗██║ ╚═╝ ██║███████╗    ╚██╔═██╔╝ ██║\n");
    printf(" ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═╝ ╚═╝  ╚═╝\n\n");
    
    char password[] = "dGhpcyBpcyBhIHZlcnkgdmVyeSBzdHJvbmcgcGFzc3dvcmQ=";
    char input[250] = " ";
    printf("\033[0;35mEnter the password please:\033[0m ");
    scanf("%s",&input);
    printf("\n\n");
    
    if (strcmp(input,password) == 0)
    {
        printf("\033[0;36mWell done !\n");
    }
    else
    {
        printf("\033[0;31mThis is not the good password !\n");
    }
    getch();
    
    return 0;
}
