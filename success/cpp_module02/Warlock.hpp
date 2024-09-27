#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {

	private:

		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);
		std::map<std::string, ASpell *> arr;

		SpellBook spellbook;

	public:

		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &title);

		void introduce() const;

		void learnSpell(ASpell *aspellptr);
		void forgetSpell(std::string sort);
		void launchSpell(std::string sort, ATarget const &atarget_ref);

};