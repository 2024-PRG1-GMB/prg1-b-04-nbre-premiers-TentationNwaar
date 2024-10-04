#include <iostream>

using namespace std;

int main() {

    const int valeur_affichage_max = 5;
    int valeur_affichee = 0;
    int limite_utilisateur;
    bool est_Premier;
    char relancer_programme;

    cout << "Ce programme ..." << endl;

    do {
        cout << "\nentrer une valeur [2-1000] : ";
        cin >> limite_utilisateur;
    } while (limite_utilisateur < 2 || limite_utilisateur > 1000);

    cout << "\nVoici la liste des nombres premiers" << endl;

    //Calcul, divisible par 1 et lui-même uniquement
    for (int i = 2; i <= limite_utilisateur; ++i) {
        est_Premier = true;
        for (int diviseur = 2; diviseur < i; ++diviseur) {
            if (i % diviseur == 0) {
                est_Premier = false;
                break;
            }
        }

        // Afficher nbr premier sur 5 colonnes
        // Solution proposée par ChatGPT
        // Ma solution faisait disparaître une valeur
        // (réinitialisation du compteur à 0)
        if (est_Premier) {
            cout << '\t' << i;
            valeur_affichee++;
        }
            if (valeur_affichee % valeur_affichage_max == 0){
              cout << '\n';
            }
        }

    //Demander si l'utilisateur veut recommencer
    do {
        cout << "\n\nVoulez-vous recommencer [O/N] : ";
        cin >> relancer_programme;
    } while (relancer_programme != 'O' && relancer_programme != 'N'); //Vérifier que les caractères soient justes

    cout << "\nFin de programme" << endl;

    return EXIT_SUCCESS;
}
