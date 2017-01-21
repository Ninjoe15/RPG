#pragma once
#ifndef DEF_INVENTAIRE
#define DEF_INVENTAIRE

#include <vector>
#include <boost\shared_ptr.hpp>
#include "Objets.h"
#include <iostream>
#include <algorithm>
#include "Personnage.h"
#include "Ville.h"

class Inventaire
{
public : 
	Inventaire();
	void afficher(std::ostream& flux);
	void jeterObjet(int objetIndex);
	void ajouterObjet(boost::shared_ptr<Objet> newObjet);
	void choixObjet();
	void action(boost::shared_ptr<Objet> objet, int objetIndex);

protected : 

	std::vector<boost::shared_ptr<Objet>> m_listeObjet;

};

std::ostream& operator<<(std::ostream& flux, Inventaire& inv);


#endif // !DEF_INVENTAIRE
