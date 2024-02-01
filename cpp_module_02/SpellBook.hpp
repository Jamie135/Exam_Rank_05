#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class SpellBook
{
private:
	SpellBook(SpellBook const &obj);
	SpellBook &operator=(SpellBook const &op);
	std::map <std::string, ASpell *> _SpellBook;
public:
	SpellBook();
	~SpellBook();
	void	learnSpell(ASpell*);
	void	forgetSpell(std::string const &);
	ASpell	*createSpell(std::string const &);
};
