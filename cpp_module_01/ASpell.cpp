#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects)
{}

ASpell &ASpell::operator=(ASpell const &op)
{
	_name = op.getName();
	_effects = op.getEffects();
	return *this;
}

ASpell::ASpell(ASpell const &obj)
{
	*this = obj;
}

ASpell::~ASpell()
{}

std::string ASpell::getName() const
{
	return (_name);
}

std::string ASpell::getEffects() const
{
	return (_effects);
}

void	ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}
