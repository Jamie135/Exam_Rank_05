#pragma once

# include <iostream>

class Warlock
{
	private:
		Warlock();
		Warlock(Warlock const & obj);
		Warlock &operator=(Warlock const &op);
		std::string	_name;
		std::string	_title;
	
	public:
		Warlock(std::string name, std::string title);
		~Warlock();
		std::string	const &getName() const;
		std::string const &getTitle() const;
		void	setTitle(std::string const &str);
		void	introduce() const;
};
