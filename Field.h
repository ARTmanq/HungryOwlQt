#pragma once
#ifndef _FIELD_H_
#define _FIELD_H_
#include <iostream>
#include <vector>
#include <random>
#include <typeinfo>
#include <QString>

enum class Colors 
{
	green,
	yellow,
	red,
    grey
};

class Animal
{
	public:
		Animal();
		Animal(unsigned int);
		virtual ~Animal();
        unsigned int getHP() const;
	private:
		unsigned int HP;
};

class Owl : public Animal
{
	public:
		Owl();
        virtual ~Owl();
};

class Mouse : public Animal
{
	public:
		Mouse();
		virtual ~Mouse();
};

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
};

class Cell
{
	public:
		Cell();
		~Cell();
		bool isFree() const;
		void setAnimal(Animal*);
        QString show() const;
        void incAnimal();
        void setColor(Animal*);
        Animal* getAnimal() const;
        Colors getColor() const;
	private:
		unsigned int detectedAnimals;
        Colors color;
		Animal *animal;
};

class Field
{
	public:
		Field();
		~Field();
		void set(unsigned int, unsigned int, unsigned int); 
		bool checkCell(unsigned int, unsigned int);
		void addAnimal(unsigned int, unsigned int, Animal*);
        QString status(unsigned int, unsigned int) const;
        void refresh();
        QString styleSheet(unsigned int, unsigned int) const;
        unsigned int getAmountOfMice() const;
        unsigned int getOwlHP() const;
	private:
		std::vector<std::vector<Cell> > field;
		unsigned int size;
		unsigned int amountOfMices;
		unsigned int amountOfCats;
        Owl owl;
};

#endif
