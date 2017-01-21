#pragma once
#ifndef DEF_VILLE
#define DEF_VILLE

#include <iostream>
#include <string>
#include <boost\shared_ptr.hpp>
#include "Personnage.h"
#include <vector>



//Classe localisation
class Localisation
{
public : 
	Localisation(std::string nom, std::vector<boost::shared_ptr<Personnage>> listePersonnage, std::vector<boost::shared_ptr<Localisation>> direction);
	virtual void afficher(std::ostream& flux);
	virtual void voyager() ;

protected : 

	std::string m_nom;
	std::vector<boost::shared_ptr<Personnage>> m_listePersonnage;
	std::vector<boost::shared_ptr<Localisation>> m_direction;
};

std::ostream& operator<<(std::ostream& flux, Localisation& loc);

//Classe Ville
class Ville : public Localisation
{
public : 

	Ville(std::vector<boost::shared_ptr<Personnage>> listePersonnage, std::vector<boost::shared_ptr<Localisation>> direction, std::string nom = "Ville");
	virtual void afficher(std::ostream& flux);


protected : 


};


//Classe Capitale

class Capitale : public Ville
{
public : 
	Capitale();
	virtual void afficher(std::ostream& flux);
	 void voyager();


protected : 


};



#endif // !DEF_VILLE
