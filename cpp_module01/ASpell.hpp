#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell(std::string const &name, std::string const &effects);//00
        virtual ~ASpell();
        virtual ASpell *clone() const = 0;
        std::string const &getName() const;//00
        std::string const &getEffects() const;//00
        // ASpell();
        // ASpell(ASpell const &copy);
		// ASpell &operator=(ASpell const &other);

        void    launch(ATarget const &target) const;

    protected:
        std::string _name;//00
        std::string _effects;//00

};
