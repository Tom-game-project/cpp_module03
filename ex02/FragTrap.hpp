#pragma once
#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__
#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
public:
	// Orthodox Canonical Form
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &rhs);

    void attack(const std::string &target);

    void highFivesGuys(void);
};

#endif


