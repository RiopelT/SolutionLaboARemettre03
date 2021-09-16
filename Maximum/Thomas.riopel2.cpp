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
   double max;

   for (int compteur = 1; compteur <= NB; compteur++)
   {
      
      cout << "Veuillez entrer un nombre :";
      cin >> nombre;
      
      
      
      if (compteur==1)
      {
          max = nombre;
      }
      else if (max<nombre)
      {
         max = nombre;
         
      }
      else if (compteur==NB)
      {
         cout << "Le max est : " << max <<endl;
      }
      {

      }
      {
        
      }
  
   }



   /*
                 Plan de tests
         Nombres
         1
         2
         3
         4
         5
         6
         7
         8
         9
         10
         Max : 10

         -1
         -2
         -3
         -4
         -5
         -6
         -7
         -8
         -9
         -10
         max: -1
   
   
   
   
   
   
   
   
   */
   
   
  

   system("pause");
}