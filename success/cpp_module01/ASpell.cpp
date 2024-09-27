#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(std::string name, std::string effects): _name(name), _effects(effects) {}

ASpell::ASpell(const ASpell &copy) {*this = copy;}
ASpell &ASpell::operator=(const ASpell &other) {
	this->_effects = other._effects;
	this->_name = other._name;
	return (*this);
}
ASpell::~ASpell() {}

std::string ASpell::getName() const {
	return (this->_name);
}

std::string ASpell::getEffects() const {
	return (this->_effects);
}

void ASpell::lunch(ATarget const &atarget_ref) const {
	atarget_ref.getHitBySpell((*this));
}
