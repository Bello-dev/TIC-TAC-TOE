#include "fonction_bell.h"

// #define max(x,y,z) (x>=y ? x:y) >= z ? (x>=y ? x:y) : z


// int main(int argc, char const *argv[])
// {
//     printf("le plus grand est: %lf\n",max(1.2,5,0.3));
//     return 0;
// }

// Fonction pour obtenir la largeur de la console
int obtenirLargeurConsoleBE() {
    struct winsize wBE;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &wBE);
    return wBE.ws_col;
}

void afficherTitreBE(const char *titreBE) {
    system("clear");
    int largeurConsoleBE = obtenirLargeurConsoleBE();
    int longueurTitreBE = strlen(titreBE);
    int paddingBE = (largeurConsoleBE - longueurTitreBE) / 2;
    
    // Dessiner le cadre supérieur
    for (int iBE = 0; iBE < largeurConsoleBE; iBE++) {
        printf(BLUE "=" RESET);
    }
    printf("\n");
    
    // Dessiner la ligne du titre avec padding pour centrer
    printf(BLUE);
    for (int i = 0; i < paddingBE; i++) {
        printf(" ");
    }
    printf("%s", titreBE);
    printf(RESET "\n");
    
    // Dessiner le cadre inférieur
    for (int iBE = 0; iBE < largeurConsoleBE; iBE++) {
        printf(BLUE "=" RESET);
    }
    printf("\n");
}



void afficherMenuBE() {
    struct winsize wBE;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &wBE);
    int largeurConsoleBE = wBE.ws_col;

    system("clear");
    afficherTitreBE("MENU DU JEU");
    printf("\n");

    char *optionsBE[] = {
        "Que souhaitez-vous faire 👇?\n",
        "1.  MODE SOLO",
        "2.  MODE MULTIJOURS (2 PLAYERS)",
        "3.  AIDE",
        "0.  QUITTER LE JEU"
    };
    char *couleursBE[] = {
        YELLOW,
        GREEN,
        GREEN,
        GREEN,
        RED
    };
    
    int nbOptionsBE = sizeof(optionsBE) / sizeof(optionsBE[0]);    
    
    int longueurOptionBE = strlen(optionsBE[0]);
        int paddingBE = (largeurConsoleBE - longueurOptionBE) / 2;
        printf("%s", couleursBE[0]);
        
            // Centrer la première ligne sans numéro
            for (int j = 0; j < paddingBE; j++) {
                printf(" ");
            }
            printf("%s\n", optionsBE[0]);
            
    // Cadre supérieur
    for (int iBE = 0; iBE < largeurConsoleBE; iBE++) {
        printf(CYAN "=" RESET);
    }
    printf("\n");

    for (int iBE = 1; iBE < nbOptionsBE; iBE++) {
        int longueurOptionBE = strlen(optionsBE[iBE]);
        int paddingBE = (largeurConsoleBE - 40) / 2;
        printf("%s", couleursBE[iBE]);
        
        if (iBE == 0) {
            // Centrer la première ligne sans numéro
            for (int jBE = 0; jBE < paddingBE; jBE++) {
                printf(" ");
            }
            printf("%s\n", optionsBE[iBE]);
        } else {
            // Conserver les numéros alignés et centrer le texte restant
            printf(" ");
           // printf("%d. ", i - 1 == 8 ? 0 : i);
            int longueurPrefixeBE = 0 + (iBE - 1 == 8 ? 0 : 1);  // 3 pour "x. " ou "0. "
            for (int j = 0; j < paddingBE; j++) {
                printf(" ");
            }
            printf("%s\n", optionsBE[iBE]);  // Passer le numéro et le point
        }
        printf(RESET);
    }

    // Cadre inférieur
    for (int iBE = 0; iBE < largeurConsoleBE; iBE++) {
        printf(CYAN "=" RESET);
    }
    printf("\n");

    printf("\nVotre choixBE : ");
}


void afficherMenuSoloBE() {
    struct winsize wBE;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &wBE);
    int largeurConsoleBE = wBE.ws_col;

    system("clear");
    afficherTitreBE("MENU DU MODE SOLO");
    printf("\n");

    char *optionsBE[] = {
        "Que souhaitez-vous Jouer 👇?\n",
        "1.  MODE FACILE",
        "2.  MODE MAîTRE (vs IA)",
        "0.  RETOUR AU MENU PRINCIPAL"
    };
    char *couleursBE[] = {
        YELLOW,
        GREEN,
        GREEN,
        RED
    };
    
    int nbOptionsBE = sizeof(optionsBE) / sizeof(optionsBE[0]);    
    
    int longueurOptionBE = strlen(optionsBE[0]);
        int paddingBE = (largeurConsoleBE - longueurOptionBE) / 2;
        printf("%s", couleursBE[0]);
        
            // Centrer la première ligne sans numéro
            for (int j = 0; j < paddingBE; j++) {
                printf(" ");
            }
            printf("%s\n", optionsBE[0]);
            
    // Cadre supérieur
    for (int iBE = 0; iBE < largeurConsoleBE; iBE++) {
        printf(CYAN "=" RESET);
    }
    printf("\n");

    for (int iBE = 1; iBE < nbOptionsBE; iBE++) {
        int longueurOptionBE = strlen(optionsBE[iBE]);
        int paddingBE = (obtenirLargeurConsoleBE() - 40) / 2;
        printf("%s", couleursBE[iBE]);
        
        if (iBE == 0) {
            // Centrer la première ligne sans numéro
            for (int jBE = 0; jBE < paddingBE; jBE++) {
                printf(" ");
            }
            printf("%s\n", optionsBE[iBE]);
        } else {
            // Conserver les numéros alignés et centrer le texte restant
            printf(" ");
           // printf("%d. ", i - 1 == 8 ? 0 : i);
            int longueurPrefixeBE = 0 + (iBE - 1 == 8 ? 0 : 1);  // 3 pour "x. " ou "0. "
            for (int jBE = 0; jBE < paddingBE; jBE++) {
                printf(" ");
            }
            printf("%s\n", optionsBE[iBE]);  // Passer le numéro et le point
        }
        printf(RESET);
    }

    // Cadre inférieur
    for (int iBE = 0; iBE < largeurConsoleBE; iBE++) {
        printf(CYAN "=" RESET);
    }
    printf("\n");

    printf("\nVotre choix : ");
}

void MapBE(int (*tabBE)[3])
{
    afficherTitreBE("Tic-Tac-Toe Bello-dev");
    printf("\n\n\t\t\033[1m       |       |       \033[0m\n");
    printf("\t\t\033[1m   %s   \033[1m|\033[0m   %s   \033[1m|\033[0m   %s   \n",MouvementBE(tabBE[0][0]),MouvementBE(tabBE[0][1]),MouvementBE(tabBE[0][2]));
    printf("\t\t\033[1m_______|_______|_______\n");    printf("\t\t\033[1m       |       |       \033[0m\n");
    printf("\t\t   %s   \033[1m|\033[0m   %s   \033[1m|\033[0m   %s   \n",MouvementBE(tabBE[1][0]),MouvementBE(tabBE[1][1]),MouvementBE(tabBE[1][2]));
    printf("\t\t\033[1m_______|_______|_______\n");
    printf("\t\t\033[1m       |       |       \033[0m\n");
    printf("\t\t   %s   \033[1m|\033[0m   %s   \033[1m|\033[0m   %s   \n",MouvementBE(tabBE[2][0]),MouvementBE(tabBE[2][1]),MouvementBE(tabBE[2][2]));
    printf("\t\t\033[1m       |       |       \033[0m\n\n");
}

char* MouvementBE(int valeurBE)
{
    if(valeurBE != 0 && valeurBE != 1)
        return " ";
    else if(valeurBE == 0)
        return "\033[1m\033[36m\033[5mO\033[0m";
    else
        return "\033[1m\033[31m\033[5mX\033[0m";
}

bool Terrain_videBE(int (*tabBE)[3])
{
    for(int iBE = 0; iBE < 3 ; iBE ++)
        for(int jBE = 0; jBE < 3 ; jBE ++)
            if( tabBE[iBE][jBE] == 0 || tabBE[iBE][jBE] == 1)
                return false;
    return true;
}

bool Terrain_pleinBE(int (*tabBE)[3])
{
    for(int iBE = 0; iBE < 3 ; iBE ++)
        for(int jBE = 0; jBE < 3 ; jBE ++)
            if( tabBE[iBE][jBE] != 0 && tabBE[iBE][jBE] != 1)
                return false;
    return true;
}

bool PlacementBE(int (*tabBE)[3], int PosXYBE, char *SymbolBE)
{
    if(PosXYBE == 1 && strstr(SymbolBE,"X") && tabBE[2][0] != 1 && tabBE[2][0] != 0)
    {
        tabBE[2][0] = 1;
        return true;
    }  
    else if(PosXYBE == 1 && strstr(SymbolBE,"O") && tabBE[2][0] != 1 && tabBE[2][0] != 0)
    {
        tabBE[2][0] = 0;
        return true;
    }
    else if(PosXYBE == 2 && strstr(SymbolBE,"X") && tabBE[2][1] != 1 && tabBE[2][1] != 0)
    {
        tabBE[2][1] = 1;
        return true;
    }  
    else if(PosXYBE == 2 && strstr(SymbolBE,"O") && tabBE[2][1] != 1 && tabBE[2][1] != 0)
    {
        tabBE[2][1] = 0;
        return true;
    }  
    else if(PosXYBE == 3 && strstr(SymbolBE,"X") && tabBE[2][2] != 1 && tabBE[2][2] != 0)
    {
        tabBE[2][2] = 1;
        return true;
    }  
    else if(PosXYBE == 3 && strstr(SymbolBE,"O") && tabBE[2][2] != 1 && tabBE[2][2] != 0)
    {
        tabBE[2][2] = 0;
        return true;
    }  
    else if(PosXYBE == 4 && strstr(SymbolBE,"X") && tabBE[1][0] != 1 && tabBE[1][0] != 0)
    {
        tabBE[1][0] = 1;
        return true;
    }  
    else if(PosXYBE == 4 && strstr(SymbolBE,"O") && tabBE[1][0] != 1 && tabBE[1][0] != 0)
    {
        tabBE[1][0] = 0;
        return true;
    }  
    else if(PosXYBE == 5 && strstr(SymbolBE,"X") && tabBE[1][1] != 1 && tabBE[1][1] != 0)
    {
        tabBE[1][1] = 1;
        return true;
    }  
    else if(PosXYBE == 5 && strstr(SymbolBE,"O") && tabBE[1][1] != 1 && tabBE[1][1] != 0)
    {
        tabBE[1][1] = 0;
        return true;
    }  
    else if(PosXYBE == 6 && strstr(SymbolBE,"X") && tabBE[1][2] != 1 && tabBE[1][2] != 0)
    {
        tabBE[1][2] = 1;
        return true;
    }  
    else if(PosXYBE == 6 && strstr(SymbolBE,"O") && tabBE[1][2] != 1 && tabBE[1][2] != 0)
    {
        tabBE[1][2] = 0;
        return true;
    }  
    else if(PosXYBE == 7 && strstr(SymbolBE,"X") && tabBE[0][0] != 1 && tabBE[0][0] != 0)
    {
        tabBE[0][0] = 1;
        return true;
    }  
    else if(PosXYBE == 7 && strstr(SymbolBE,"O") && tabBE[0][0] != 1 && tabBE[0][0] != 0)
    {
        tabBE[0][0] = 0;
        return true;
    }  
    else if(PosXYBE == 8 && strstr(SymbolBE,"X") && tabBE[0][1] != 1 && tabBE[0][1] != 0)
    {
        tabBE[0][1] = 1;
        return true;
    }  
    else if(PosXYBE == 8 && strstr(SymbolBE,"O") && tabBE[0][1] != 1 && tabBE[0][1] != 0)
    {
        tabBE[0][1] = 0;
        return true;
    }  
    else if(PosXYBE == 9 && strstr(SymbolBE,"X") && tabBE[0][2] != 1 && tabBE[0][2] != 0)
    {
        tabBE[0][2] = 1;
        return true;
    }  
    else if(PosXYBE == 9 && strstr(SymbolBE,"O") && tabBE[0][2] != 1 && tabBE[0][2] != 0)
    {
        tabBE[0][2] = 0;
        return true;
    }  
    else
        return false;
}

int VictoryBE(int (*tabBE)[3])
{
    if(tabBE[0][0] == tabBE[0][1] && tabBE[0][1] == tabBE[0][2] && tabBE[0][0] == 1 )
        return 2;
    else if(tabBE[0][0] == tabBE[0][1] && tabBE[0][1] == tabBE[0][2] && tabBE[0][0] == 0 )
        return 3;
    else if(tabBE[1][0] == tabBE[1][1] && tabBE[1][1] == tabBE[1][2] && tabBE[1][0] == 1 )
        return 2;
    else if(tabBE[1][0] == tabBE[1][1] && tabBE[1][1] == tabBE[1][2] && tabBE[1][0] == 0 )
        return 3;
    else if(tabBE[2][0] == tabBE[2][1] && tabBE[2][1] == tabBE[2][2] && tabBE[2][0] == 1 )
        return 2;
    else if(tabBE[2][0] == tabBE[2][1] && tabBE[2][1] == tabBE[2][2] && tabBE[2][0] == 0 )
        return 3;
    else if(tabBE[0][0] == tabBE[1][0] && tabBE[1][0] == tabBE[2][0] && tabBE[0][0] == 1 )
        return 2;
    else if(tabBE[0][0] == tabBE[1][0] && tabBE[1][0] == tabBE[2][0] && tabBE[0][0] == 0 )
        return 3;
    else if(tabBE[0][1] == tabBE[1][1] && tabBE[1][1] == tabBE[2][1] && tabBE[0][1] == 1 )
        return 2;
    else if(tabBE[0][1] == tabBE[1][1] && tabBE[1][1] == tabBE[2][1] && tabBE[0][1] == 0 )
        return 3;
    else if(tabBE[0][2] == tabBE[1][2] && tabBE[1][2] == tabBE[2][2] && tabBE[0][2] == 1 )
        return 2;
    else if(tabBE[0][2] == tabBE[1][2] && tabBE[1][2] == tabBE[2][2] && tabBE[0][2] == 0 )
        return 3;
    else if(tabBE[0][0] == tabBE[1][1] && tabBE[1][1] == tabBE[2][2] && tabBE[0][0] == 1 )
        return 2;
    else if(tabBE[0][0] == tabBE[1][1] && tabBE[1][1] == tabBE[2][2] && tabBE[0][0] == 0 )
        return 3;
    else if(tabBE[0][2] == tabBE[1][1] && tabBE[1][1] == tabBE[2][0] && tabBE[0][2] == 1 )
        return 2;
    else if(tabBE[0][2] == tabBE[1][1] && tabBE[1][1] == tabBE[2][0] && tabBE[0][2] == 0 )
        return 3;
    else 
        return 0;
}

void ResetBE(int (*tabBE)[3])
{
    for(int iBE= 0; iBE < 3; iBE ++)
        for(int jBE = 0; jBE < 3; jBE ++)
            tabBE[iBE][jBE] = 3;
}

void IAFacileBE(int (*tabBE)[3])
{
    srand(time(0));

    int iBE, jBE;

    do
    {
        iBE = rand() % 3;
        jBE = rand() % 3;
    } while (tabBE[iBE][jBE] ==  0);

    tabBE[iBE][jBE] = 0;
    printf("L' IA a joue en position %d,%d", iBE+1, jBE+1);
}
void SoloFaciileBE(int tabBE[3][3])
{
                        afficherTitreBE("MODE FACILE");
                        sleep(2);
                        while(!Terrain_pleinBE(tabBE) && VictoryBE(tabBE) == 0)
                        {
                            int posBE;
                            char SymbolBE = 'X';

                            back3BE:
                            MapBE(tabBE);
                            char *cksBE = malloc(sizeof(char));

                            printf("A ton tour de jouer (X): ");
                            scanf("%s", cksBE);
                            
                            if(!VerificationBE(cksBE))
                            {
                                system("clear");
                                goto back3BE;
                           }
                            posBE = ConversionBE(cksBE);
                            if(!PlacementBE(tabBE, posBE, &SymbolBE))
                            {
                                printf("Mouvement invalide !\n");
                                continue;
                            }

                            if(VictoryBE(tabBE) == 2)
                            {
                                MapBE(tabBE);
                                sleep(2);
                                afficherTitreBE("Felicitation ! vous avez gagné");
                                sleep(3);
                                break;
                            }

                            printf("Tour de l' IA (o)\n");
                            back4BE:
                            sleep(1);
                            int PosXYBE;
                            srand(time(0));
                            PosXYBE = rand() % 9;
                            while(!PlacementBE(tabBE,PosXYBE,"\033[5m\033[34mO\033[0m"))
                                goto back4BE;

                            if (VictoryBE(tabBE) == 3)
                            {
                                MapBE(tabBE);
                                sleep(2);
                                printf("L' IA a gagnée!\n");
                                break;
                            }

                            if (Terrain_pleinBE(tabBE) && VictoryBE(tabBE) == 0)
                            {
                                MapBE(tabBE);
                                printf("MAtch Nul !\n");
                                sleep(2);
                                break;
                            }

                        }
}

void SoloMaitreBE()
{   
    
    int tab1BE[3][3];
    ResetBE(tab1BE);


    afficherTitreBE("MODE IA (ESTRELLA)");
    sleep(2);
    bool jeuTermineBE = false; // Le jeu est-il terminé ?
    bool tour_IABE = false;   // Commence avec le joueur humain

    printf("Bienvenue au niveu Estrella !\n");
    // meilleurCoupIABE(tab1BE);  // Affiche le plateau au début du jeu
    // MapBE(tab1BE);

    while (!jeuTermineBE) {
        if (tour_IABE) {
            printf("C'est au tour de l'IA...\n");
            meilleurCoupIABE(tab1BE);  // L'IA joue son tour
            back6BE:
            MapBE(tab1BE);  // Affiche le plateau après le coup de l'IA

            if (VictoryBE(tab1BE) == 2) {  // Si l'IA gagne
                printf("L'IA a gagné !\n");
                jeuTermineBE = true;
            }
            tour_IABE = false;  // Passe au tour du joueur
        } else {
            int caseChoisieBE;
            char *swapBE = malloc(sizeof(char));
            MapBE(tab1BE);
            printf("C'est à vous de jouer : ");
            scanf("%s", swapBE);
            if(!VerificationBE(swapBE))
                {
                    system("clear");
                     goto back6BE;
                }
            caseChoisieBE = ConversionBE(swapBE);
            bool coupValideBE = false;
            
    
            // Valider si la case choisie est libre
            for (int iBE = 0; iBE < 3; iBE++) {
                for (int jBE = 0; jBE < 3; jBE++) {
                    if (tab1BE[iBE][jBE] == caseChoisieBE) {
                        tab1BE[iBE][jBE] = 0;  // Joueur place 'O'
                        coupValideBE = true;
                        break;
                    }
                }
                if (coupValideBE) 
                    break;
            }

            if (!coupValideBE) {
                printf("Coup invalide ! Veuillez choisir une autre case.\n");
                continue;  // Redemande au joueur de choisir un coup valide
            }

            MapBE(tab1BE);  // Affiche le plateau après le coup du joueur

            if (VictoryBE(tab1BE) == 3) {  // Si le joueur gagne
                printf("Vous avez gagné ! Félicitations !\n");
                jeuTermineBE = true;
            }
            tour_IABE = true;  // Passe au tour de l'IA
        }

        // Vérifie si le plateau est plein (match nul)
        if (Terrain_pleinBE(tab1BE) && !jeuTermineBE) {
            printf("Match nul !\n");
            jeuTermineBE = true;
        }
    }

    printf("Fin du jeu ! Merci d'avoir joué.\n");
}


void MultijoueurBE(int (*tabBE)[3])
{
    char *nom1BE = malloc(sizeof(char));
    char *nom2BE = malloc(sizeof(char));
    system("clear"); fflush(stdout);
    printf("\n\tJoueur 1, entrer votre nom: ");
    scanf("%s",nom1BE);
    printf("\n\tJoueur 2, entrer votre nom: ");
    scanf("%s",nom2BE);
    // Chargement();
    int PosXYBE;
    while(!Terrain_pleinBE(tabBE))
    {
        system("clear"); char *valeurBE = malloc(sizeof(char));
        back1BE:
        MapBE(tabBE);
        printf("\n\n");
        printf("\t\033[1mEntrer votre placement( \033[31m%s\033[0m ): ",nom1BE);
        scanf("%s",valeurBE);
        if(!VerificationBE(valeurBE))
        {
            system("clear");
            goto back1BE;
        }
        PosXYBE = ConversionBE(valeurBE);
        while(!PlacementBE(tabBE,PosXYBE,"\033[5m\033[34mX\033[0m"))
        {
            system("clear");
            printf("\n\t\033[1m\033[31mMouvement impossible !!!, veuillez entrer un autre choix\033[0m\n");
            sleep(1);
            system("clear");
            goto back1BE;
        }
        sleep(1);
        system("clear"); fflush(stdout);
        back2BE:
        MapBE(tabBE);
        printf("\n\n");
        if(Terrain_pleinBE(tabBE) == true && VictoryBE(tabBE) != 3 && VictoryBE(tabBE) != 2)
        {
            system("clear");
            MapBE(tabBE);
            printf("\n\n");
            printf("\n\n\t\t \033[1m\033[31m\033[5mMatch Nul\033[0m\n\n");
            sleep(3);
            break;
        } 
        if(VictoryBE(tabBE) == 2)
        {
            system("clear");
            MapBE(tabBE);
            printf("\n\n");
            printf("\n\n\t\t \033[5m\033[1m\033[32mVictoire\033[0m\033[1m du Joueur \033[4m\033[5m\033[31m%s\033[0m\n\n",nom1BE);
            sleep(3);
            break;
        }
        else if(VictoryBE(tabBE) == 3)
        {
            system("clear");
            MapBE(tabBE);
            printf("\n\n");
            printf("\n\n\t\t \033[5m\033[1m\033[32mVictoire\033[0m\033[1m du Joueur \033[4m\033[5m\033[36m%s\033[0m\n\n",nom2BE);
            sleep(3);
            break;
        } 
        printf("\t\033[1mEntrer votre placement( \033[36m%s\033[0m ): ",nom2BE);
        scanf("%s",valeurBE);
        if(!VerificationBE(valeurBE))
        {
            system("clear");
            goto back2BE;
        }
        PosXYBE = ConversionBE(valeurBE);
        while(!PlacementBE(tabBE,PosXYBE,"\033[5m\033[34mO\033[0m"))
        {
            system("clear");
            printf("\n\t\033[1m\033[31mMouvement impossible !!!, veuillez entrer un autre choix\033[0m\n");
            sleep(1);
            system("clear");
            goto back2BE;
        }
        sleep(1);
        system("clear"); fflush(stdout);
        MapBE(tabBE);
        printf("\n\n");
        if(VictoryBE(tabBE) == 2)
        {
            system("clear");
            MapBE(tabBE);
            printf("\n\n");
            printf("\n\n\t\t \033[5m\033[1m\033[32mVictoire\033[0m\033[1m du Joueur \033[4m\033[5m\033[31m%s\033[0m\n\n",nom1BE);
            sleep(3);
            break;
        }
        else if(VictoryBE(tabBE) == 3)
        {
            system("clear");
            MapBE(tabBE);
            printf("\n\n");
            printf("\n\n\t\t \033[5m\033[1m\033[32mVictoire\033[0m\033[1m du Joueur \033[4m\033[5m\033[36m%s\033[0m\n\n",nom2BE);
            sleep(3);
            break;
        }   
        sleep(1);
    }
}

bool VerificationBE(char* valeurBE)
{
    int longueurBE = strlen(valeurBE);
    for(int iBE = 0 ; iBE < longueurBE; iBE ++)
        if(valeurBE[iBE] > '9' || valeurBE[iBE] < '0')
            return false;
    return true;
}

int ConversionBE(char* valeurBE)
{
    int resultBE = 0,longueurBE = strlen(valeurBE);
    for(int iBE = 0; iBE < longueurBE; iBE ++)
        resultBE += (valeurBE[iBE] -'0')*pow(10,(longueurBE - (iBE + 1)));
    return resultBE;
}
// Fonction qui évalue l'état du tabBEau
int evaluerBE(int (*tabBE)[3]) {
    // Si l'IA (X) gagne
    if (VictoryBE(tabBE) == 2) return 10;
    // Si le joueur (O) gagne
    if (VictoryBE(tabBE) == 3) return -10;
    // Si c'est une égalité
    return 0;
}

// Fonction Minimax pour que l'IA choisisse toujours le meilleur coup
int MinimaxBE(int (*tabBE)[3], int profondeurBE, bool maximiserBE) {
    int scoreBE = evaluerBE(tabBE);

    // Si l'IA gagne ou perd, ou si le tabBEau est plein
    if (scoreBE == 10 || scoreBE == -10) return scoreBE;
    if (Terrain_pleinBE(tabBE)) return 0;

    // Maximisation (tour de l'IA)
    if (maximiserBE) {
        int meilleurBE = -1000;
        for (int iBE = 0; iBE < 3; iBE++) {
            for (int jBE = 0; jBE < 3; jBE++) {
                if (tabBE[iBE][jBE] != 1 && tabBE[iBE][jBE] != 0) {
                    tabBE[iBE][jBE] = 1; // IA joue 'X'
                    meilleurBE = fmax(meilleurBE, MinimaxBE(tabBE, profondeurBE + 1, false));
                    tabBE[iBE][jBE] = iBE * 3 + jBE + 1; // Annule le coup
                }
            }
        }
        return meilleurBE;
    }
    // Minimisation (tour du joueur)
    else {
        int meilleurBE = 1000;
        for (int iBE = 0; iBE < 3; iBE++) {
            for (int jBE = 0; jBE < 3; jBE++) {
                if (tabBE[iBE][jBE] != 1 && tabBE[iBE][jBE] != 0) {
                    tabBE[iBE][jBE] = 0; // Joueur joue 'O'
                    meilleurBE = fmin(meilleurBE, MinimaxBE(tabBE, profondeurBE + 1, true));
                    tabBE[iBE][jBE] = iBE * 3 + jBE + 1; // Annule le coup
                }
            }
        }
        return meilleurBE;
    }
}

// Fonction pour que l'IA choisisse son meilleur mouvement
void meilleurCoupIABE(int (*tabBE)[3]) {

    int meilleurBE = -1000, ligneBE = -1, colonneBE = -1;
    
    // Parcourt les cases du tabBEau
    for (int iBE = 0; iBE < 3; iBE++) {
        for (int jBE = 0; jBE < 3; jBE++) {
            // Si la case est vide
            if (tabBE[iBE][jBE] != 1 && tabBE[iBE][jBE] != 0) {
                tabBE[iBE][jBE] = 1; // IA joue 'X'
                int valeurBE = MinimaxBE(tabBE, 0, false); // Appelle Minimax
                tabBE[iBE][jBE] = iBE * 3 + jBE + 1; // Annule le coup

                // Si ce coup est meilleur, l'enregistre
                if (valeurBE > meilleurBE) {
                    meilleurBE = valeurBE;
                    ligneBE = iBE;
                    colonneBE = jBE;
                }
            }
        }
    }
    
    // Joue le meilleur coup trouvé
    if (ligneBE != -1 && colonneBE != -1) {
        tabBE[ligneBE][colonneBE] = 1;
    }
}