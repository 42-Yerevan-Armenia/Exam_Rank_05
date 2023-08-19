#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}

void	TargetGenerator::learnTargetType(ATarget *spell){if (spell) _map[spell->getType()] = spell;}
void	TargetGenerator::forgetTargetType(std::string const &sname){if (_map.find(sname) != _map.end()) _map.erase(_map.find(sname));}

ATarget	*TargetGenerator::createTarget(std::string const &sname)
{
    ATarget *tmp = NULL;
    if (_map.find(sname) != _map.end())
        tmp = _map[sname];
    return (tmp);
}

// TargetGenerator::TargetGenerator(TargetGenerator const &copy) {*this = copy;};
// TargetGenerator &TargetGenerator::operator=(TargetGenerator const &other)
// {
// 	_map = other._map;
// 	return *this;
// }
