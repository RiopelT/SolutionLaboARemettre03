// But : Le programme prend en compte 10 valeures entrer par l'utilisateur et affiche la plus grande d'entre elles.
// Auteur : Thomas Riopel
// Date : 2021-09-13

#include <iostream>
using namespace std;



void main()
{
 // Déclaration des constantes :
   const int  NB = 10;
// Déclaration des variables :
   float nombre;
   float max;

   for (int compteur = 1; compteur <= NB; compteur++)
   {
      cout << "Veuillez entrer un nombre :";
      cin >> nombre;
      max = nombre;

      if (nombre > max)
      {
         cout << "Le max est" << nombre;
      }
  
   }
   
   
  

   system("pause");
}