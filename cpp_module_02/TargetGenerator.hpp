#pragma once

#include <map>
#include "ATarget.hpp"

class TargetGenerator //SpellBook
{
    public:
        TargetGenerator();
        ~TargetGenerator();

        void	learnTargetType(ATarget *spell);
		void	forgetTargetType(std::string const &sname);
		ATarget	*createTarget(std::string const &sname);

    private:
    	TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator=(TargetGenerator const &other);
        std::map<std::string, ATarget *> _map;
};