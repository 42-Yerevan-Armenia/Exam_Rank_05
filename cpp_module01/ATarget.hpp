#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    public:
        ATarget(std::string const &type);//00
        virtual ~ATarget();
        virtual ATarget *clone() const = 0;
        std::string const &getType() const;//00
        void    getHitBySpell(ASpell const &spell) const;
        
        // ATarget();
        // ATarget(ATarget const &copy);
		// ATarget &operator=(ATarget const &other);

    protected:
        std::string _type;
};
