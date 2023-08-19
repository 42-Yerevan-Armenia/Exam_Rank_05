#pragma once
#include "ASpell.hpp"

class Polymorph : public ASpell//Fwoosh
{
    public:
        Polymorph();
        ~Polymorph();
        virtual ASpell *clone() const;
};