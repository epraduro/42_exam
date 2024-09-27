#pragma once

#include <iostream>
#include <map>

#include "ATarget.hpp"

class TargetGenerator {


	private:
		
		TargetGenerator(const TargetGenerator &copy);
		TargetGenerator &operator=(const TargetGenerator &other);
		std::map<std::string, ATarget *> generator;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *atargetptr);
		void forgetTargetType(std::string const &forget);
		ATarget *createTarget(std::string const &create);


};
