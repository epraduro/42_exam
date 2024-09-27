#pragma once

#include <iostream>
#include <map>

class ASpell;

class SpellBook {


	private:
		
		SpellBook(const SpellBook &copy);
		SpellBook &operator=(const SpellBook &other);
		std::map<std::string, ASpell *> book;

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *aspellptr);
		void forgetSpell(std::string const &forget);
		ASpell *createSpell(std::string const &create);


};

#include "ASpell.hpp"