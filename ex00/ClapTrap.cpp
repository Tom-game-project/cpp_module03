#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap (std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0) {
}


ClapTrap::ClapTrap(const ClapTrap &other) {
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this == &other) {
	} else {
		this->name = other.name;
		this->hit_points = other.hit_points;
        this->energy_points = other.energy_points;
        this->attack_damage = other.attack_damage;
	}

	return *this;
}

ClapTrap::~ClapTrap () {
}

void ClapTrap::attack(const std::string& target) {
    if (0 < this->energy_points) {
        this->energy_points -= 1;
        std::cout << this->name << " attack!" << std::endl;
    } else {
        std::cout << this->name << " failed to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    this->attack_damage += amount;
    std::cout << this->name << " take damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (0 < this->energy_points) {
        this->energy_points -= 1;
        this->attack_damage -= amount;
        std::cout << this->name << " be repaired!" << std::endl;
    } else {
        std::cout << this->name << " failed to be repaired!" << std::endl;

    }
}
