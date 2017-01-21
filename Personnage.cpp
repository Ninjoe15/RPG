#include <iostream>
#include "Personnage.h"
#include "Objets.h"
#include <string>
#include <boost\shared_ptr.hpp>

//Classe Personnage

Personnage::Personnage(std::string nom) : m_nom(nom), m_vie(100), m_mana(100), m_Lvl(1), m_arme(new Arme("Poings", 0 , 2))
{


}
void Personnage::afficher(std::ostream& flux)
{
	
	flux << "                      ----------------------------------" << std::endl;
	flux << "                                  Personnage" << std::endl;
	flux << "                      ----------------------------------" << std::endl;
	flux << " Vous vous appelez " << m_nom << std::endl << " Vie : " << m_vie << std::endl <<
		"Mana : " << m_mana << std::endl << "Niveau : " << m_Lvl << std::endl <<
		"Arme : " << *m_arme << std::endl;

	

}
std::ostream& operator<<(std::ostream& flux2, Personnage perso)
{
	perso.afficher(flux2);
	return flux2;
}

void Personnage::afficherInv()
{
	std::cout << "                      ----------------------------------" << std::endl;
	std::cout << "                                 Inventaire" << std::endl;
	std::cout << "                      ----------------------------------" << std::endl;
	std::cout << m_inv;

}


void Personnage::prendreObjet(boost::shared_ptr<Objet> objetAPrendre)
{
	m_inv.ajouterObjet(objetAPrendre);

}




//Classe Guerrier
Guerrier::Guerrier(std::string nom) : Personnage::Personnage(nom)
{}


//Classe Mage
Mage::Mage(std::string nom) : Personnage::Personnage(nom)
{

}