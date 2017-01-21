#pragma once
#ifndef DEF_OBJETS
#define DEF_OBJETS

#include <string>
#include <iostream>
#include <boost\shared_ptr.hpp>

class Objet
{
public : 
	Objet(std::string nom,std::string useText, int prix);
	virtual void afficher(std::ostream& flux);
	bool isEqual(Objet a)const;
	std::string getUseText();

protected : 
	int m_prix;
	std::string m_nom;
	std::string m_useText;

};

bool operator==(Objet const& a, Objet const& b);

class Arme : public Objet
{
public:
	Arme(std::string nom, int prix ,int degats);
	virtual void afficher(std::ostream& flux);

protected : 
	int m_degats;

};

std::ostream& operator<<(std::ostream& flux, Objet& objet);


#endif // !DEF_OBJETS
