#include <stdio.h>
#include <stdbool.h>

#define MAX_COMPUTERS 100

// Structure représentant un ordinateur
typedef struct {
    char marque[20];
    int prix;
    int stock;
} Ordinateur;

// Tableau des ordinateurs disponibles
Ordinateur ordinateurs[MAX_COMPUTERS];
int nombreOrdinateurs = 0;

// Fonction pour ajouter un nouvel ordinateur
void ajouterOrdinateur() {
    if (nombreOrdinateurs >= MAX_COMPUTERS) {
        printf("Le nombre maximum d'ordinateurs a été atteint.\n");
        return;
    }
    
    printf("Ajouter un nouvel ordinateur :\n");
    
    printf("Marque : ");
    scanf("%s", ordinateurs[nombreOrdinateurs].marque);
    
    printf("Prix : ");
    scanf("%d", &ordinateurs[nombreOrdinateurs].prix);
    
    printf("Stock : ");
    scanf("%d", &ordinateurs[nombreOrdinateurs].stock);
    
    nombreOrdinateurs++;
    
    printf("L'ordinateur a été ajouté avec succès.\n");
}

// Fonction pour consulter les détails d'un ordinateur
void consulterDetailsOrdinateur() {
    int choix;
    
    printf("Sélectionnez l'ordinateur dont vous souhaitez consulter les détails :\n");
    
    for (int i = 0; i < nombreOrdinateurs; i++) {
        printf("%d. %s\n", i + 1, ordinateurs[i].marque);
    }
    
    printf("Votre choix : ");
    scanf("%d", &choix);
    
    if (choix >= 1 && choix <= nombreOrdinateurs) {
        Ordinateur ordinateur = ordinateurs[choix - 1];
        
        printf("Détails de l'ordinateur :\n");
        printf("Marque : %s\n", ordinateur.marque);
        printf("Prix : %d\n", ordinateur.prix);
        printf("Stock : %d\n", ordinateur.stock);
    } else {
        printf("Choix invalide.\n");
    }
}

// Fonction pour mettre à jour les stocks d'un ordinateur
void mettreAJourStock() {
    int choix;
    int nouveauStock;
    
    printf("Sélectionnez l'ordinateur dont vous souhaitez mettre à jour le stock :\n");
    
    for (int i = 0; i < nombreOrdinateurs; i++) {
        printf("%d. %s\n", i + 1, ordinateurs[i].marque);
    }
    
    printf("Votre choix : ");
    scanf("%d", &choix);
    
    if (choix >= 1 && choix <= nombreOrdinateurs) {
        printf("Nouveau stock : ");
        scanf("%d", &nouveauStock);
        
        ordinateurs[choix - 1].stock = nouveauStock;
        
        printf("Le stock a été mis à jour avec succès.\n");
    } else {
        printf("Choix invalide.\n");
    }
}

int main() {
    int choix;
    
    while (true) {
        printf("\n");
        printf("=== Gestion de la boutique d'informatique ===\n");
        printf("1. Ajouter un nouvel ordinateur\n");
        printf("2. Consulter les détails d'un ordinateur\n");
