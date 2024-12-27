#ifndef __FONCTION_BELL__
#define __FONCTION_BELL__


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <sys/ioctl.h>


#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"


int obtenirLargeurConsoleBE();
void afficherTitreBE(const char *titreBE);
void afficherMenuBE();
void afficherMenuSoloBE();
// void MapBE(int (*tabBE)[3]);
bool PlacementBE(int (*tabBE)[3], int PosXYBE, char *SymbolBE);
void MapBE(int (*tabBE)[3]);
bool Terrain_videBE(int (*tabBE)[3]);
bool Terrain_pleinBE(int (*tabBE)[3]);
int VictoryBE(int (*tabBE)[3]);
char *MouvementBE(int valeurBE);
void ResetBE(int (*tabBE)[3]);
void MultijoueurBE(int (*tableBE)[3]);
void IAFacileBE(int (*tabBE)[3]);
int evaluerBE(int (*tabBE)[3]);
int MinimaxBE(int (*tabBE)[3], int profondeur, bool maximiser);
void meilleurCoupIABE(int (*tab)[3]);
void SoloFaciileBE(int tableBE[3][3]);
void SoloMaitreBE();


void GameBE();

// Securisation...

bool VerificationBE(char* valeurBE);
int ConversionBE(char* valeurBE);


#endif