#include <iostream>

using namespace std;

int main() {

    int limite_utilisateur;
    int diviseur = 0;
    char relancer_programme;

    cout << "Ce programme affiche les nombres premiers suivant la saisie" << endl;

    do {
        cout << "Entrez une valeur [2-1000] : ";
        cin >> limite_utilisateur;
    } while (limite_utilisateur < 2 || limite_utilisateur > 1000);

    //Calcul, divisible par 1 et lui-même uniquement
    for (int i = 2; i <= limite_utilisateur; ++i) {
        diviseur ++;
        if (i % diviseur == 0) {
            cout << i << endl;
        }
    }

    //Afficher nbr premier sur 5 colonnes

    //Demander si l'utilisateur veut recommencer
    do {
        cout << "Voulez-vous recommencer [O/N] : ";
        cin >> relancer_programme;
    } while (relancer_programme != 'O' && relancer_programme != 'N'); //Vérifier que les caractères soient justes

    cout << "\nFin de programme" << endl;

    return EXIT_SUCCESS;
}
