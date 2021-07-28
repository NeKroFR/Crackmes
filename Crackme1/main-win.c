#include <stdio.h>
#include<string.h>
#include <conio.h>
#include<windows.h>

int main()
{


    SetConsoleTextAttribute(hc, 0xfc);
    printf("                       ______\n");
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
    printf("     (_/             created by nekro      \\_)\n");
    printf(" ██████╗██████╗  █████╗  ██████╗██╗  ██╗███╗   ███╗███████╗     ██╗ ██╗  ██╗\n");
    printf("██╔════╝██╔══██╗██╔══██╗██╔════╝██║ ██╔╝████╗ ████║██╔════╝    ████████╗███║\n");
    printf("██║     ██████╔╝███████║██║     █████╔╝ ██╔████╔██║█████╗      ╚██╔═██╔╝╚██║\n");
    printf("██║     ██╔══██╗██╔══██║██║     ██╔═██╗ ██║╚██╔╝██║██╔══╝      ████████╗ ██║\n");
    printf("╚██████╗██║  ██║██║  ██║╚██████╗██║  ██╗██║ ╚═╝ ██║███████╗    ╚██╔═██╔╝ ██║\n");
    printf(" ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═╝ ╚═╝  ╚═╝\n\n");
    SetConsoleTextAttribute(hc, 0x07);
    char password[] = "dGhpcyBpcyBhIHZlcnkgdmVyeSBzdHJvbmcgcGFzc3dvcmQ=";
    char input[250] = " ";
    printf("Enter the password please: ");
    scanf("%s",&input);
    printf("\n\n");
    
    if (strcmp(input,password) == 0)
    {
        SetConsoleTextAttribute(hc, 0x02);
        printf("Well done !\n");
    }
    else
    {
        SetConsoleTextAttribute(hc, 0x04);
        printf("This is not the good password !\n");
    }
    getch();
    
    return 0;
}
