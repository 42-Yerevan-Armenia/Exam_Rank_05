#pragma once
#include "ATarget.hpp"

class BrickWall : public ATarget //Dummy
{
    public:
        BrickWall();
        ~BrickWall();
        virtual ATarget *clone() const;
};