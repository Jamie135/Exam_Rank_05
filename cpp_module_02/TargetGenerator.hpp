#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
private:
	TargetGenerator(TargetGenerator const &obj);
	TargetGenerator	&operator=(TargetGenerator const &op);
	std::map <std::string, ATarget *> _target;
public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget*);
	void forgetTargetType(std::string const &);
	ATarget* createTarget(std::string const &);
};
