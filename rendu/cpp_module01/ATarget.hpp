#pragma once

#include <iostream>
class ASpell;

class ATarget {


	private:
		std::string _type;
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(const ATarget &copy);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		std::string getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const &aspell_ref) const;

};

#include "ASpell.hpp"
