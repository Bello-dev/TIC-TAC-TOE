#include "fonction_bell.h"


int main(void)
{
    int choixBE, tableBE[3][3];
    char *valeurBE = malloc(sizeof(char)); 

	afficherTitreBE("BELLO-DEV");
	sleep(2);
	afficherTitreBE("YOU ARE WELCOME");
    sleep(1);
    afficherTitreBE("BIENVENUE");
    sleep(1);

    do{
        ResetBE(tableBE);
        fflush(stdout);
        remark1BE:
        afficherMenuBE();
        scanf("%s",valeurBE);
        if(!VerificationBE(valeurBE))
        {
            system("clear");
            goto remark1BE;
        }
        choixBE = ConversionBE(valeurBE);
        system("clear"); fflush(stdout);
        switch(choixBE)
        {
            case 1:
                	afficherTitreBE("MODE SOLO");
                    int mBE;
                    char *swapperBE = malloc(sizeof(char));
                do
                {   ResetBE(tableBE);
                    afficherMenuSoloBE();
                    remark7BE:
                    scanf("%s",swapperBE);
                    if(!VerificationBE(swapperBE))
                    {
                        system("clear");
                        goto remark7BE;
                    }
                    mBE = ConversionBE(swapperBE);
                    switch(mBE)
                    {
                    case 1:
                        SoloFaciileBE(tableBE);
                        getchar();
                        while(getchar() != '\n');
                        break;
                    case 2:    
                        afficherTitreBE("MODE IA SUPER START");
                        ResetBE(tableBE);
                        SoloMaitreBE();
                        getchar();
                        while(getchar() != '\n');
                        break;
                    case 0:
                        break;
                    default:    
                        printf(RED"Choix non valide!"RESET);
                        break;
                        }
                    
                } while (mBE != 0);
                break;
            case 2:
            	afficherTitreBE("MODE MULTIJOEURS");
            	sleep(2);
                MultijoueurBE(tableBE);
                while(getchar() != '\n');
                break;
            case 3:
                afficherTitreBE("AIDE ET CONSEILS");
  				sleep(2);
                system("clear");
                char cBE;
                FILE *docBE = fopen("Rules/Rules.txt","rt");
                while((cBE = fgetc(docBE)) != EOF)
                    printf("\033[1m%c",cBE);
                fclose(docBE);
                printf("\n\t\033[1mTAPER \033[5m\033[31mENTRER\033[0m\033[1m POUR RETOURNER AU MENU PRINCIPAL \033[0m");
                getchar();
                while(getchar() != '\n');
                break;
            case 4:
                afficherTitreBE("MERCI D'AVOIR TESTER NOTRE JEU");
                sleep(2);
                afficherTitreBE("THANKS");
                sleep(2);
                system("clear");
                break;
            case 0:
                break;
            default:
                printf("\n\n\t\033[1m\033[31m Choix Non Disponible \n");
                usleep(0.2);
                break;
        }
    }while(choixBE != 0);

    afficherTitreBE("GOODBYE 👋🏾");
    sleep(1);
    system("clear");
    afficherTitreBE("À BIENTÔT🤗");
    sleep(1);
    int c = getchar();
    afficherTitreBE("BELLO-DEV");
    sleep(2);
    system("clear");
    return 0;
}
