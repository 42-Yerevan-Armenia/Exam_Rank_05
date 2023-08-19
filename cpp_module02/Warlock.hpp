#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void	setTitle(std::string const &str);
		void	introduce() const;
		
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string sname);
		void	launchSpell(std::string sname, ATarget const &target);

	private:
		std::string _name;
		std::string _title;
		
		SpellBook _map;//02
		
		// Warlock();
		// Warlock(Warlock const &copy);
		// Warlock &operator=(Warlock const &other);
};
