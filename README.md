TIC-TAC-TOE
Description

Le TIC-TAC-TOE (le morpion) est un jeu codé en C avec une interface très conviviale en mode terminal. Ce projet permet de jouer en mode solo contre une IA ou en mode multijoueur.
Fonctionnalités

    Mode Solo : Jouez contre une IA facile ou une IA plus avancée utilisant l'algorithme Minimax.
    Mode Multijoueur : Jouez contre un autre joueur sur la même machine.
    Affichage Dynamique : L'affichage du jeu s'ajuste en fonction de la largeur de la console pour une meilleure expérience visuelle.

Fichiers

    fonction_bell.c : Contient les fonctions principales pour l'affichage du jeu, la logique de l'IA et les mécaniques du jeu.

Installation

Clonez le dépôt :

    git clone https://github.com/Bello-dev/TIC-TAC-TOE.git

Accédez au répertoire du projet :

cd TIC-TAC-TOE


Compilation

Pour compiler le projet, utilisez la commande :

    make

Cela va compiler tous les fichiers .c et créer un exécutable nommé prog

Exécution

    make run
    
Cela va exécuter l'exécutable prog.

Nettoyage
Pour supprimer l'exécutable, utilisez la commande :

    make clean

Aperçu des Fonctions

    obtenirLargeurConsoleBE : Obtient la largeur de la console.
    afficherTitreBE : Affiche un titre centré dans la console.
    afficherMenuBE : Affiche le menu principal.
    afficherMenuSoloBE : Affiche le menu du mode solo.
    MapBE : Affiche le plateau du Tic-Tac-Toe.
    MouvementBE : Retourne une chaîne représentant un mouvement sur le plateau.
    Terrain_videBE : Vérifie si le plateau est vide.
    Terrain_pleinBE : Vérifie si le plateau est plein.
    PlacementBE : Place un mouvement sur le plateau.
    VictoryBE : Vérifie les conditions de victoire.
    ResetBE : Réinitialise le plateau.
    IAFacileBE : Logique de l'IA facile.
    SoloFaciileBE : Gère le mode solo facile.
    SoloMaitreBE : Gère le mode solo avancé utilisant l'algorithme Minimax.
    MultijoueurBE : Gère le mode multijoueur.
    VerificationBE : Valide l'entrée.
    ConversionBE : Convertit l'entrée en position sur le plateau.
    evaluerBE : Évalue l'état du plateau pour l'algorithme Minimax.
    MinimaxBE : Algorithme Minimax pour les mouvements de l'IA.
    meilleurCoupIABE : Détermine le meilleur mouvement pour l'IA utilisant Minimax.
