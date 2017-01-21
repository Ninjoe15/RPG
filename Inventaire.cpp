#include "Inventaire.h"
#include "MenuJoueur.h"
#include "Personnage.h"
#include "Ville.h"
#include <iostream>




Inventaire::Inventaire()
{

}

void Inventaire::afficher(std::ostream& flux)
{
	if (m_listeObjet.size() > 0)
	{

		for (unsigned int i{ 0 }; i < m_listeObjet.size(); i++)
		{
			flux << i + 1 << "." <<*m_listeObjet[i];
		}
	}
	else
	{
		flux << "Votre inventaire est vide" << std::endl;
	}
	flux << m_listeObjet.size() + 1 << "." << "Retour " << std::endl;

	choixObjet();



}

void Inventaire::choixObjet()
{
	int index{ 0 };
	std::cin >> index;

	

	if (index <= m_listeObjet.size())
	{
		index -= 1;
		action(m_listeObjet[index],index);
	}
	
		

}

void Inventaire::action(boost::shared_ptr<Objet> objet, int objetIndex)
{
	std::cout << "1." << objet->getUseText() << std::endl;
	std::cout << "2." << "Jeter" << std::endl;
	std::cout << "3." << "Retour" << std::endl;

	int choix{ 0 };
	std::cin >> choix;

	switch (choix)
	{
	case 1 : 
		std::cout << "Vous avez utilisez : " << *objet << std::endl << std::endl;
		break;
	case 2 :
		jeterObjet(objetIndex);
		break;
	
		


	}
}



void Inventaire::ajouterObjet(boost::shared_ptr<Objet> newObjet)
{

	m_listeObjet.push_back(newObjet);


}

void Inventaire::jeterObjet(int objetIndex)
{
	
	m_listeObjet.erase(m_listeObjet.begin() + objetIndex);


}

std::ostream& operator<<(std::ostream& flux, Inventaire& inv)
{
	inv.afficher(flux);
	return flux;
}




