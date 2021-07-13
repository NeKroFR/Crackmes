#include <stdio.h>
#include<string.h>


int main()
{
    printf("                 _.--""""''-.\n");
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
    printf("Enter the password please: ");
    scanf("%s",&input);
    printf("\n\n");
    
    if (strcmp(input,password) == 0)
    {
        printf("Well done !");
    }
    else
    {
        printf("This is not the good password !");
    }
    
    
    return 0;
}
