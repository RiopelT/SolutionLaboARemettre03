// But : Le programme prend en compte 10 valeures entrer par l'utilisateur et affiche la plus grande d'entre elles.
// Auteur : Thomas Riopel
// Date : 2021-09-13

#include <iostream>
using namespace std;



void main()
{
 // D�claration des constantes :
   const int  NB = 10;
// D�claration des variables :
   float nombre;
   float max;

   for (int compteur = 1; compteur <= NB; compteur++)
   {
      cout << "Veuillez entrer un nombre :";
      cin >> nombre;

      // On dout ajouter cette note � la somme des notes on utilise la m�me variable que le resultat attendu : moyenne 
      max = nombre;
      cout << "Le max est : " << max << endl;
   }


   system("pause");
}