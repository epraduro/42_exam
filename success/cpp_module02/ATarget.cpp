#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string type): _type(type) {}

ATarget::ATarget(const ATarget &copy) {*this = copy;}

ATarget &ATarget::operator=(const ATarget &other) {
	this->_type = other._type;
	return (*this);
}

ATarget::~ATarget() {}

std::string ATarget::getType() const {
	return (this->_type);
}

void ATarget::getHitBySpell(ASpell const &aspell_ref) const {
	std::cout << this->getType() << " has been " << aspell_ref.getEffects() << "!" << std::endl;
}