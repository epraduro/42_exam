#pragma once

#include <iostream>


class Warlock {

	private:

		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);

	public:

		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;

		void setTitle(const std::string &title);

		void introduce() const;

};