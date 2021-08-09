from colorama import Fore, Style, init

init()

print(Fore.GREEN + Style.NORMAL +"""




                                    ,--.
                                   {    }
                                   K,   }
                                  /  ~Y`
                             ,   /   /
                            {_'-K.__/
                              `/-.__L._
                              /  ' /`\_}
                             /  ' /
                     ____   /  ' /
              ,-'~~~~    ~~/  ' /_
            ,'             ``~~~  ',
           (                        Y
          {                         I
         {      -                    `,
         |       ',                   )
         |        |   ,..__      __. Y
         |    .,_./  Y ' / ^Y   J   )|
         \           |' /   |   |   ||
          \          L_/    . _ (_,.'(
           \,   ,      ^^""' / |      )
             \_  \          /,L]     /
               '-_~-,       ` `   ./`
                  `'{_            )
                      ^^\..___,.--`


___________________    _____  _________  ____  __.  _____  ___________    _  _   ____ 
\_   ___ \______   \  /  _  \ \_   ___ \|    |/ _| /     \ \_   _____/ __| || |_/_   |
/    \  \/|       _/ /  /_\  \/    \  \/|      <  /  \ /  \ |    __)_  \   __   /|   |
\     \___|    |   \/    |    \     \___|    |  \/    Y    \|        \  |  ||  | |   |
 \______  /____|_  /\____|__  /\______  /____|__ \____|__  /_______  / /_  ~~  _\|___|
        \/       \/         \/        \/        \/       \/        \/    |_||_|  

""")


password = "";

input = input(Fore.MAGENTA + Style.NORMAL +"Enter the password please:\033[39m")

  
if("dGhpcyBpcyBhIHZlcnkgdmVyeSBzdHJvbmcgcGFzc3dvcmQ=" in input):
    {
        print(Fore.GREEN + Style.NORMAL +"Well done !\n")
    }
else:
    {
        print(Fore.RED + Style.NORMAL +"This is not the good password !\n")
    }
