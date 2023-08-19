#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}

void	SpellBook::learnSpell(ASpell *spell){if (spell) _map[spell->getName()] = spell;}
void	SpellBook::forgetSpell(std::string const &sname){if (_map.find(sname) != _map.end()) _map.erase(_map.find(sname));}

ASpell	*SpellBook::createSpell(std::string const &sname)
{
    ASpell *tmp = NULL;
    if (_map.find(sname) != _map.end())
        tmp = _map[sname];
    return (tmp);
}

// SpellBook::SpellBook(SpellBook const &copy) {*this = copy;};
// SpellBook &SpellBook::operator=(SpellBook const &other)
// {
// 	_map = other._map;
// 	return *this;
// }