// But : L'utilisateur à 5 chances pour devnier un nombre choisi pas le programme. 
// Auteur :Thomas Riopel
// Date : 2021-09-14

#include <time.h>
#include <iostream>

using namespace std;
int main()
{
   const int compteurMax = 5;
   //variable utilisateur
   int NbUtilisateur;
   //varibale random
   int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
   srand(time(0)); // pour activer l’aléatoire dans le programme
   iRandom = rand() % 101;
   //boucle pour les 5 essaie
   for (int i = 1; i <= compteurMax;)
   {
      cout << i << " chance , veiller entrer un nombre :" << endl;//demander a lutilisateur de trouver un nombre
      cin >> NbUtilisateur;
      system("cls");
      if (NbUtilisateur >= 0 && NbUtilisateur <= 100)//verifier si le nombre est en 0 ou 100
      {
         i++;
         if (NbUtilisateur < iRandom)//veirifier si le nombre est plus grand
         {
            cout << "Votre nombre est plus grand" << endl;
            system("pause");
            system("CLS");
         }
         else if (NbUtilisateur > iRandom)//verifier si le nombre est plus petit
         {
            cout << "Votre nombre est plus petit" << endl;
            system("pause");
            system("CLS");
         }
         else//dit a lutiisateur que le nombre est egale
         {

            cout << "vous avez vue juste !! Bravo" << endl;
            i = 6;
         }
      }
      else//dit a lutilisateur que le nombre N,est pas entre 0 ou 100
      {
         cout << "veuiller recommencer avec un nombre entre 0 et 100" << endl;
         system("pause");
         system("CLS");
      }


   }
   return 0;
}

/*
            Plan de tests
         1 chances : 50 --) le nombre est plus grand
         2 chances : 60 --) le nombre est plus grand
         3 chances : 90 --) le nombre est plus petit
         4 chances : 85 --) le nombre est plus petit
         5 chances : 82 --) le nombre est plus peit

         Exit

         1 chances : 90 --) le nombre est plus petit
         2 chances : 60 --) le nombre est plus grand
         3 chances : 70 --) le nombre est plus grand
         4 chances : 85 --) le nombre est plus petit
         5 chances : 82 --) le nombre est plus peit














*/

