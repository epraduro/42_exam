#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title) {
	std::cout << name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->getName() << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const {
	return (this->_name);
}

const std::string &Warlock::getTitle() const {
	return (this->_title);
}

void Warlock::setTitle(std::string const &title) {
	this->_title = title;
}

void Warlock::introduce() const {
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *aspellptr) {
	spellbook.learnSpell(aspellptr);
}

void Warlock::forgetSpell(std::string sort) {
	spellbook.forgetSpell(sort);
}

void Warlock::launchSpell(std::string sort, ATarget const &atarget_ref) {
	ASpell* temp = spellbook.createSpell(sort);
	if (temp)
		temp->lunch(atarget_ref);
}