#include <stdio.h>
#include<string.h>


int main()
{
    printf("\033[0;32m                 _.--""""''-.\n");
    printf("              .-'            '.\n");
    printf("            .'                 '.\n");
    printf("           /            .        )\n");
    printf("          |                   _  (\n");
    printf("          |          .       / \\  \\\n");
    printf("          \\         .     .  \\_/  |\n");
    printf("           \\    .--' .  '         /\n");
    printf("            \\  /  .'____ _       /,\n");
    printf("             '/   (\\    `)\\       |\n");
    printf("             ||\\__||    |;-.-.-,-,|\n");
    printf("             \\\\___//|   \\--'-'-'-'|\n");
    printf("              '---' \\             |\n");
    printf("       .--.          '---------.__)   .-.\n");
    printf("      .'   \\     created by         /  '.\n");
    printf("     (      '.                    _.'     )\n");
    printf("      '---.   '.    NEKRO     _.-'    .--'\n");
    printf("           `.   `-._      _.-'   _.-'`\n");
    printf("             `-._   '-.,-'   _.-'\n");
    printf("                 `-._   `'.-'\n");
    printf("               _.-'` `;.   '-._\n");
    printf("        .--.-'`  _.-'`  `'-._  `'-.--.\n");
    printf("       (       .'            '.       )\n");
    printf("        `,  _.'                '._  ,'\n");
    printf("          ``                      ``\n");
    printf(" ██████╗██████╗  █████╗  ██████╗██╗  ██╗███╗   ███╗███████╗     ██╗ ██╗  ██╗\n");
    printf("██╔════╝██╔══██╗██╔══██╗██╔════╝██║ ██╔╝████╗ ████║██╔════╝    ████████╗███║\n");
    printf("██║     ██████╔╝███████║██║     █████╔╝ ██╔████╔██║█████╗      ╚██╔═██╔╝╚██║\n");
    printf("██║     ██╔══██╗██╔══██║██║     ██╔═██╗ ██║╚██╔╝██║██╔══╝      ████████╗ ██║\n");
    printf("╚██████╗██║  ██║██║  ██║╚██████╗██║  ██╗██║ ╚═╝ ██║███████╗    ╚██╔═██╔╝ ██║\n");
    printf(" ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝ ╚═════╝╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═╝ ╚═╝  ╚═╝\n\n");
    
    char password = "azerty";
    char input = " ";
    printf("\033[0;35mEnter the password please:\033[0;37m ");
    scanf("%s",&input);
    printf("\n\n");
    
    if (strcmp(input,password) == 0)
    {
        printf("\033[0;36mWell done !");
    }
    else
    {
        printf("\033[0;31mThis is not the good password !");
    }
    
    
    return 0;
}
