#include <iostream>
#include <string>
#include "Ville.h"
#include <boost\make_shared.hpp>
#include "MenuJoueur.h"
//Classe localisation

Localisation::Localisation(std::string nom, std::vector<boost::shared_ptr<Personnage>> listePersonnage, std::vector<boost::shared_ptr<Localisation>> direction) : m_nom(nom),m_listePersonnage(listePersonnage), m_direction(direction)
{

}

void Localisation::voyager()
{

}

void Localisation::afficher(std::ostream& flux)
{
	flux << "                      ----------------------------------" << std::endl;
	flux << "                                       Loc" << std::endl;
	flux << "                      ----------------------------------" << std::endl;

}

std::ostream& operator<<(std::ostream& flux, Localisation& loc)
{

	loc.afficher(flux);
	return flux;
}








// Classe Ville

Ville::Ville(std::vector<boost::shared_ptr<Personnage>> listePersonnage, std::vector<boost::shared_ptr<Localisation>> direction, std::string nom ) : Localisation(nom, listePersonnage, direction)
{

}
 void Ville::afficher(std::ostream& flux)
{
	 flux << "                      ----------------------------------" << std::endl;
	 flux << "                                    Ville" << std::endl;
	 flux << "                      ----------------------------------" << std::endl;
}







//Classe Capitale


Capitale::Capitale() : Ville::Ville(m_listePersonnage, m_direction, "Capitale")
{

	

	
}

void Capitale::afficher(std::ostream& flux)
{
	flux << "                      ----------------------------------" << std::endl;
	flux << "                                    Capitale            "<< std::endl;
	flux << "                      ----------------------------------" << std::endl;
}

void Capitale::voyager()
{



}