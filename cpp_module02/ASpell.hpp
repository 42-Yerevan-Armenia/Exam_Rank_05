#pragma once
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    public:
        ASpell(std::string const &name, std::string const &effects);
        virtual ~ASpell();
        virtual ASpell *clone() const = 0;
        std::string const &getName() const;
        std::string const &getEffects() const;

        void    launch(ATarget const &target) const;

        // ASpell();
        // ASpell(ASpell const &copy);
		// ASpell &operator=(ASpell const &other);

    protected:
        std::string _name;
        std::string _effects;

};
