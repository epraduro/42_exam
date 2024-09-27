#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *aspellptr) {
	if (aspellptr)
		book.insert(std::pair<std::string, ASpell *>(aspellptr->getName(), aspellptr->clone()));
}

void SpellBook::forgetSpell(std::string const &forget) {
	std::map<std::string, ASpell *>::iterator it = book.find(forget);
	if (it != book.end())
		delete it->second;
	book.erase(forget);
}

ASpell *SpellBook::createSpell(std::string const &create){
	std::map<std::string, ASpell *>::iterator it = book.find(create);
	if (it != book.end())
		return book[create];
	return NULL;
}