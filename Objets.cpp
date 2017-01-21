#include "Objets.h"
#include <iostream>

//Classe Objet

enum typeObjet
{



};


Objet::Objet(std::string nom,std::string useText, int prix) : m_nom(nom),m_useText(useText) ,m_prix(prix)
{}

void Objet::afficher(std::ostream& flux)
{
	flux << m_nom << std::endl;
	
}

std::ostream& operator<<(std::ostream& flux, Objet& objet)
{
	objet.afficher(flux);

	return flux;
}

bool Objet::isEqual(Objet a)const
{
	return m_nom == a.m_nom;

}
bool operator==(Objet const& a, Objet const& b)
{
	return a.isEqual(b);
}

std::string Objet::getUseText()
{
	return m_useText;
}





// Classe fille Arme
Arme::Arme(std::string nom, int prix, int degats) : Objet::Objet(nom,"Equiper ",prix), m_degats(degats)
{}
void Arme::afficher(std::ostream& flux)
{
	flux << m_nom << "  : " <<m_degats << std::endl;
}

