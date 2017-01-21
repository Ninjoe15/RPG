#include "MenuJoueur.h"
#include "Ville.h"

void afficherMenuJoueur(boost::shared_ptr<Localisation> loc,Personnage joueur)
{
	std::cout << *loc;

	std::cout << "1. Partir" << std::endl << "2.Voir les marchands" << std::endl << "3.Inventaire" << std::endl;

	int choix;

	std::cin >> choix;

	switch (choix)
	{
	case 1:
		loc->voyager();
		break;

	case 3:
		joueur.afficherInv();
		break;

	default:
		joueur.afficherInv();
		break;
	}
}