#pragma once
#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <iostream>
#include <string>
#include <boost\shared_ptr.hpp>
#include "Objets.h"
#include "MenuJoueur.h"
#include "Inventaire.h"

class Personnage
{
public : 
	Personnage(std::string nom);
	virtual void afficher(std::ostream& flux);
	void afficherInv();
	void prendreObjet(boost::shared_ptr<Objet> objetAPrendre);

protected : 
	
	std::string m_nom;
	int m_vie;
	int m_mana;
	int m_Lvl;
	Inventaire m_inv;
	boost::shared_ptr<Arme> m_arme;

};

class Mage : public Personnage
{
public :
	Mage(std::string nom);
	
private : 


};

class Guerrier : public Personnage
{
public : 
	Guerrier(std::string nom);
private :
};


std::ostream& operator<<(std::ostream& flux2, Personnage perso);

#endif // DEF_PERSONNAGE
