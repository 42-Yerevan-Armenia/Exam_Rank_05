#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Target", "fwooshed") {}
Fwoosh::~Fwoosh(){}
ASpell *Fwoosh::clone() const {return (new Fwoosh());}