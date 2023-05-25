#include <stdio.h>
#include <stdbool.h>

#define MAX_COMPUTERS 100

// Énumération pour le type d'ordinateur
typedef enum {
    DESKTOP,
    LAPTOP,
    MINIPC
} TypeOrdinateur;

// Structure représentant un ordinateur
typedef struct {
    char marque[20];
    TypeOrdinateur type;
    int prix;
    int stock;
} Ordinateur;

// Structure représentant un administrateur
typedef struct {
    char nom[20];
    char mot_de_passe[20];
} Administrateur;

// Tableau des ordinateurs disponibles
Ordinateur ordinateurs[MAX_COMPUTERS];
Administrateur admin = {"admin", "password"};
int nombreOrdinateurs = 0;
bool estAdmin = false;

// Fonctions
void ajouterOrdinateur();
void consulterDetailsOrdinateur();
void mettreAJourStock();
void seConnecterEnTantQuAdmin();

int main() {
    int choix;
    
    while (true) {
        printf("\n=== Gestion de la boutique d'informatique ===\n");
        printf("1. Ajouter un nouvel ordinateur\n");
        printf("2. Consulter les détails d'un ordinateur\n");
        printf("3. Mettre à jour le stock d'un ordinateur\n");
        printf("4. Se connecter en tant qu'administrateur\n");
        printf("5. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        
        switch(choix) {
            case 1:
                if (estAdmin) {
                    ajouterOrdinateur();
                } else {
                    printf("Seul l'administrateur peut ajouter des ordinateurs.\n");
                }
                break;
            case 2:
                consulterDetailsOrdinateur();
                break;
            case 3:
                if (estAdmin) {
                    mettreAJourStock();
                } else {
                    printf("Seul l'administrateur peut mettre à jour le stock.\n");
                }
                break;
            case 4:
                seConnecterEnTantQuAdmin();
                break;
            case 5:
                return 0;
            default:
                printf("Choix invalide.\n");
        }
    }
}

void ajouterOrdinateur() {
    // Votre code pour ajouter un ordinateur ici
}

void consulterDetailsOrdinateur() {
    // Votre code pour consulter les détails d'un ordinateur ici
}

void mettreAJourStock() {
    // Votre code pour mettre à jour le stock ici
}

void seConnecterEnTantQuAdmin() {
    // Votre code pour se connecter en tant qu'admin ici
}
