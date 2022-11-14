#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "ListeChainee.h"

typedef void (*evt)(std::string);

class EM
{
private:
	static int frequencyCount;
	int frequency;
	std::string name;
public:
	EM(std::string);
	~EM();
	void diffuser(const std::string);
};
/*===========================================*/
class REC
{
private:
	static std::string texte_statique;
	int nb_frequencies;
	std::vector<int>* frequencies;
	LinkedList *buffer;
public:
	REC(int);
	~REC();
	static void reception(const std::string);
	void ecoute();
	void pushAtHead();
	bool isSubscribed(int);
};
