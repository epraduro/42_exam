#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget *aspellptr) {
	if (aspellptr)
		generator.insert(std::pair<std::string, ATarget *>(aspellptr->getType(), aspellptr->clone()));
}

void TargetGenerator::forgetTargetType(std::string const &forget) {
	std::map<std::string, ATarget *>::iterator it = generator.find(forget);
	if (it != generator.end())
		delete it->second;
	generator.erase(forget);
}

ATarget *TargetGenerator::createTarget(std::string const &create){
	std::map<std::string, ATarget *>::iterator it = generator.find(create);
    if (it != generator.end())
        return generator[create];
    return NULL;
}