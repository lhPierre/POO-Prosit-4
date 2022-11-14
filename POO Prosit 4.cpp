#include "pch.h"

int main()
{
	EM nrj("nrj");
	EM nikos("nikos");
	EM jul("jul");
	
	REC utilisateur1(1);
	REC utilisateur2(1);

	nrj.diffuser("Salut les jeunes !");
	utilisateur1.pushAtHead();
	
	nikos.diffuser("Salut les loups !");
	utilisateur1.pushAtHead();
	utilisateur2.pushAtHead();

	jul.diffuser("Ca dit quoi l'equipe ?");
	utilisateur1.pushAtHead();
	
	std::cout << "Messagerie Utilisateur 1 :" << std::endl;
	utilisateur1.ecoute();

	std::cout << "Messagerie Utilisateur 2 :" << std::endl;
	utilisateur2.ecoute();
}
