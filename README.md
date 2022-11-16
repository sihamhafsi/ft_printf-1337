# ft_printf
--------------------------------------------------------------------------------------------------------------------------------------------------------------------
Le prototype de ft_printf() devra être : </br> 
int ft_printf(const char *, ...);</br> 
Voici quelques impératifs à respecter :</br> 
• Contrairement à la fonction printf() originale, vous ne devez pas gérer de buffer.</br> 
• Vous devez gérer les conversions suivantes : cspdiuxX%</br> 
• Votre rendu sera comparé à la fonction printf() originale</br> 
Vous devez implémenter les conversions suivantes :</br> 
• %c Affiche un seul caractère.</br> 
• %s Affiche une chaîne de caractères (telle que définie par la convention C).</br> 
• %p L’argument de pointeur void * doit être affiché en hexadécimal.</br> 
• %d Affiche un nombre décimal (base 10).</br> 
• %i Affiche un entier en base 10.</br> 
• %u Affiche un nombre décimal non signé (base 10).</br> 
• %x Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules.</br> 
• %X Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules.</br> 
• %% Affiche un signe pourcentage.</br> 
