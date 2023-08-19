#pragma once

#include <map>
#include "ASpell.hpp"

class SpellBook
{
    public:
        SpellBook();
        ~SpellBook();

        void	learnSpell(ASpell *spell);//01
		void	forgetSpell(std::string const &sname);//01
		ASpell	*createSpell(std::string const &sname);

    private:
        std::map<std::string, ASpell *> _map;//01

    	// SpellBook(SpellBook const &copy);
		// SpellBook &operator=(SpellBook const &other);
};