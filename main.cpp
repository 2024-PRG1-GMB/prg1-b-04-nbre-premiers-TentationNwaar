#include <iostream>

using namespace std;

int main() {

    int limite_utilisateur;
    char relancer_programme;

    cout << "Ce programme affiche les nombres premiers suivant la saisie" << endl;

    do {
        cout << "Entrez une valeur [2-1000] : ";
        cin >> limite_utilisateur;
    } while (limite_utilisateur < 2 || limite_utilisateur > 1000);

    //Calcul, divisible par 1 et lui-même uniquement
    for (int nombre_premier = 1; nombre_premier <= limite_utilisateur; ++nombre_premier) {
        cout << "nombre_premier" << endl;
        if (nombre_premier % nombre_premier != 0){
            if (nombre_premier % 2 == 0){
                cout << nombre_premier << endl;
            }
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
