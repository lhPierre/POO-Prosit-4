#include "FM.h"

/*======================================*/
int EM::frequencyCount = 0;

EM::EM(std::string name)
{
	this->name = name;

	this->frequencyCount++;
	
	this->frequency = this->frequencyCount;

	std::cout << "Creation radio " << this->frequency << "." << this->name << "..." << std::endl;
	
}

EM::~EM()
{

}

void EM::diffuser(const std::string message)
{
	evt e = &REC::reception;
	e(message);
}

/*======================================*/
std::string REC::texte_statique = "";

REC::REC(int nb_frequences)
{
	this->nb_frequencies = nb_frequences;
	/*
	for (int i = 0; i < this->nb_frequencies; i++)
	{
		int f;
		std::cout << "Frequence " << i << " : ";
		std::cin >> f;
		this->frequencies->push_back(f);
	}
	*/
	this->buffer = new LinkedList;
}

REC::~REC()
{

}

void REC::reception(const std::string message)
{
	REC::texte_statique = message;
}

void REC::ecoute()
{
	std::cout << this->buffer->pop() << std::endl;
}

void REC::pushAtHead()
{
	this->buffer->push(texte_statique);
}

bool REC::isSubscribed(int frequency)
{
	bool test = false;

	for (int i = 0; i < this->nb_frequencies; i++)
	{
		if (frequency == this->frequencies->at(i));
		{
			test = true;
			return test;
		}
	}

	return test;
}