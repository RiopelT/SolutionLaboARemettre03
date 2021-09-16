// But : Demander combien de vente le représentant à fait et le programme afichera le montant que le représenatnt recevera.
// AUteur : Thomas Riopel
// Date : 2021-09-13





#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//Declarer vairable 
	int representant = 1;
	float salairVente;
	float salaireTotal;
	//declarer les constante
	const int salaireSemain = 250;
	const float cutVente = 7.5;
	const int exit = -1;
	//varible utilisateur
	float NbVente;

	//demander a l'utilisateur son nombre de vente
	cout << "Combien de vente avez-vous fait #" << representant << endl;
	cin >> NbVente;
	//boucle pour pouvoir gerer plusieur representant des ventes
	while (NbVente != exit)
	{
		system("CLS");
		//calcul salaire brut
		salairVente = NbVente / 100 * cutVente;
		salaireTotal = salaireSemain + salairVente;
		//afficherr salaire brut
		cout << "Votre Representant#" << representant << " a fait :" << salaireTotal << "$" << endl;
		system("pause");//permettre a l'utilisateur de voir se qui est afficher
		system("CLS");
		representant++;
		//programme recommence
		cout << "Combien de vente avez-vous fait #" << representant << endl;
		cin >> NbVente;

	}
}
/*
				Plan de tests
	Nombre de ventes		$$$
	22							251.65	
	56							254.2
	120						259
	-1							EXIT





*/