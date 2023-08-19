#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"

class Warlock
{
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void	setTitle(std::string const &str);
		void	introduce() const;
		
		void	learnSpell(ASpell *spell);//01
		void	forgetSpell(std::string sname);//01
		void	launchSpell(std::string sname, ATarget const &target);//01

	private:
		std::string _name;
		std::string _title;
		std::map<std::string, ASpell *> _map;//01

		// Warlock();
		// Warlock(Warlock const &copy);
		// Warlock &operator=(Warlock const &other);
};
