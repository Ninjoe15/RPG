#pragma once
#ifndef DEF_MENUJOUEUR
#define DEF_MENUJOUEUR

#include <iostream>
#include <string>
#include <boost\shared_ptr.hpp>
#include "Personnage.h"
#include "Ville.h"

void afficherMenuJoueur(boost::shared_ptr<Localisation> loc, Personnage joueur);



#endif // !DEF_MENUJOUEUR
