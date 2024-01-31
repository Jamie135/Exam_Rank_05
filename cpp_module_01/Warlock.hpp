#pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"

class Warlock
{
	private:
		Warlock();
		Warlock(Warlock const & obj);
		Warlock &operator=(Warlock const &op);
		std::string	_name;
		std::string	_title;
		std::map <std::string, ASpell *> _SpellBook;
	
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		std::string	const &getName() const;
		std::string const &getTitle() const;
		void	setTitle(std::string const &str);
		void	introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string SpellName);
		void	launchSpell(std::string SpellName, ATarget const &target);
};
