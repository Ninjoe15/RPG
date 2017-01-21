#include <iostream>
#include "Menu.h"
#include <map>
#include <string>
#include <cstdlib>
#include "CreationPerso.h"

void afficherMenu()
{
	std::map <int, std::string> maptest;
	maptest[1] = "Nouvelle partie";
	maptest[2] = "Charger partie";
	maptest[3] = "Quitter";

	std::cout << "            -----------------|RPG DU TURFU|-----------------" << std::endl;
	for (auto i : maptest)std::cout << i.first << " : " << i.second << std::endl;
	choisirAction();
}

void choisirAction()
{
	int choix{ 0 };
	std::cin >> choix;
	
	switch (choix)
	{
	case 1 :
		choisirNom();
		break;
	case 2 :
		std::cout << "Non";
		break;
	case 3 :
		exit(0);
		break;
	
	default : 
		choisirAction();
		break;

    }



}

