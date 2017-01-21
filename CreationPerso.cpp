#include <iostream>
#include <string>
#include <map>
#include "CreationPerso.h"
#include "Personnage.h"
#include "Ville.h"
#include "MenuJoueur.h"
#include <boost\shared_ptr.hpp>

void choisirNom()
{
	std::cout << "                      ----------------------------------" << std::endl;
	std::cout << "                             Creation du personnage" << std::endl;
	std::cout << "                      ----------------------------------" << std::endl;
	std::string nom{"Joe le Clodo"};

	std::cout << "Avant de commencer une nouvelle partie, " << std::endl <<
		" nous allons creer votre personnage " << std::endl << std::endl;
	std::cout << "Quelle est votre nom ? " << std::endl;

	std::cin >> nom;
	
	
	
	choisirClasse(nom);

}

void choisirClasse(std::string& nom)
{
	
	std::map <int, std::string> choixClasse;



	choixClasse[1] = "Mage";
	choixClasse[2] = "Guerrier";

	

	std::cout << "Nous allons maintenant choisir  votre classe : " << std::endl << std::endl;

	for (auto i : choixClasse)std::cout << i.first << " : " << i.second << std::endl;
	
	
	int c{ 0 };
	
	
	std::cin >> c;

		


	Personnage personnageJoueur(nom);
	Guerrier guerrier(nom);
	Mage mage(nom);
	
	switch (c)
	{
	case 1 :
		std::cout << "Vous avez choisi la classe Mage" << std::endl;
		personnageJoueur = mage;
		break;
	case 2 :
	

		std::cout << "Vous avez choisi la classe Guerrier" << std::endl;
		personnageJoueur = guerrier;
		break;
	default : 
		std::cout << "Vous n'avez choisi aucune classe, vous serai donc un guerrier par defaut" << std::endl;
		personnageJoueur = guerrier;
		break;
	}


	std::cout << personnageJoueur ;
	
	boost::shared_ptr<Capitale> cap(new Capitale);
	boost::shared_ptr<Arme> arme(new Arme("Epee", 20, 10));

	personnageJoueur.prendreObjet(arme);



}