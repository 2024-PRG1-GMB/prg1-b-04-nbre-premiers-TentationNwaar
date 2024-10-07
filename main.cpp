//Date : 07.10.2024
//Auteur : Maxence Weyermann
//Description : Affiche les nombres premiers jusqu'à la limite de l'utilisateur

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    const int valeur_affichage_max = 5;
    int valeur_affichee = 0;
    int limite_utilisateur;
    bool est_Premier;
    char relancer_programme;

    do {
        cout << "Ce programme ...\n" << endl;

        do {
            cout << "entrer une valeur [2-1000] : ";
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

            //Afficher nbr premier sur 5 colonnes
            if (est_Premier) {
                cout << setw(4) << i; //Ajustement proposé par chatGPT
                valeur_affichee++;

                if (valeur_affichee == valeur_affichage_max) {
                    cout << '\n';
                    valeur_affichee = 0;
                }
            }
        }

        //Ajustement de l'affichage pour les grandes valeurs
        if (valeur_affichee != 0) {
            cout << '\n';
        }

        do {
            cout << "\nVoulez-vous recommencer [O/N] : ";
            cin >> relancer_programme;
        } while (relancer_programme != 'O' && relancer_programme != 'N');

        if (relancer_programme == 'O'){
            continue;
        }

        else{
            cout << "\nFin de programme" << endl;
        }

    } while (relancer_programme != 'N');

    return EXIT_SUCCESS;
}
