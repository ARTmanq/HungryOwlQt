#include "Field.h"

Animal::Animal(): HP(0)
{}

Animal::Animal(unsigned int hp): HP(hp)
{}

Animal::~Animal()
{}

unsigned int Animal::getHP() const
{
    return HP;
}

Owl::Owl(): Animal(3)
{}

Owl::~Owl()
{}

Mouse::Mouse(): Animal(1)
{}

Mouse::~Mouse()
{}

Cat::Cat(): Animal(1)
{}

Cat::~Cat()
{}

Cell::Cell(): detectedAnimals(0), color(Colors::grey), animal(nullptr)
{}

Cell::~Cell()
{
	delete animal;
}

bool Cell::isFree() const
{
	if(animal == nullptr)
		return true;
	else
		return false;
}

void Cell::setAnimal(Animal* creature)
{
	animal = creature;
	creature = nullptr;
}

void Cell::incAnimal()
{
    detectedAnimals++;
}

QString Cell::show() const
{
	if(animal == nullptr)
	{
        if(detectedAnimals != 0)
        {
            QString ret(detectedAnimals + 48);
            return ret;
        }
        else
        {
            return ".";
        }
	}
	else
    {
        return &typeid(*animal).name()[1];
	}
}

Animal* Cell::getAnimal() const
{
    return animal;
}

void Cell::setColor(Animal* anim)
{
    if(anim != nullptr)
    {
        if(typeid(*anim).name()[1] == 'M')
        {
            if(color == Colors::grey)
            {
                color = Colors::green;
            }
            if(color == Colors::red)
            {
                color = Colors::yellow;
            }
        }
        if(typeid(*anim).name()[1] == 'C')
        {
            if(color == Colors::grey)
            {
                color = Colors::red;
            }
            if(color == Colors::green)
            {
                color = Colors::yellow;
            }
        }
    }
}

Colors Cell::getColor() const
{
    return color;
}

Field::Field()
{
	size = 0;
	amountOfMices = 0;
	amountOfCats = 0;
}

void Field::set(unsigned int s, unsigned int AoM, unsigned int AoC)
{
	size = s;
	amountOfMices = AoM;
	amountOfCats = AoC;
	unsigned int i, j, x, y;
    std::random_device gen;
	for(i = 0; i < size; ++i)
	{
		std::vector<Cell> currentLine;
		for(j = 0; j < size; ++j)
		{
			Cell cell;
			try
			{
				currentLine.push_back(cell);
			}
			catch(std::bad_alloc &ba)
			{
                throw(&ba);
			}
		}
		try
		{
			field.push_back(currentLine);
		}
		catch(std::bad_alloc &ba)
		{
            throw(&ba);
		}
	}
	for(i = 0; i < amountOfMices; ++i)
	{
		x = gen() % size;
		y = gen() % size;
		if(checkCell(x, y))
		{
			try
			{
				Mouse* mouse = new Mouse;
				addAnimal(x, y, mouse);
			}
			catch(std::bad_alloc &ba)
			{
                throw(&ba);
			}
		}
	}
	for(j = 0; j < amountOfCats; ++j)
	{
		x = gen() % size;
		y = gen() % size;
		if(checkCell(x, y))
		{
			try
			{
				Cat* cat = new Cat;
				addAnimal(x, y, cat);
			}
			catch(std::bad_alloc &ba)
			{
                throw(&ba);
			}
		}
	}
}

Field::~Field()
{}

bool Field::checkCell(unsigned int x, unsigned int y)
{
	try
	{
		if(field[x][y].isFree())
			return true;
		else
			return false;
	}
	catch(std::out_of_range &oor)
	{
        throw(&oor);
	}
}

void Field::addAnimal(unsigned int x, unsigned int y, Animal* animal)
{
	try
	{
		field[x][y].setAnimal(animal);
	}
	catch(std::out_of_range &oor)
	{
        throw(&oor);
	}
	animal = nullptr;
}

QString Field::status(unsigned int i, unsigned int j) const
{
    QString ret(field[i][j].show()[0]);
    return ret;
}

void Field::refresh()
{
    unsigned int i, j, k, l;
    for(i = 0; i < size; ++i)
    {
        for(j = 0; j < size; ++j)
        {
            for(l = 0; l < size; ++l)
            {
                if(!checkCell(i, l))
                {
                    field[i][j].incAnimal();
                    field[i][j].setColor(field[i][l].getAnimal());
                }
            }
            for(k = 0; k < size; ++k)
            {
                if(!checkCell(k, j))
                {
                    field[i][j].incAnimal();
                    field[i][j].setColor(field[k][j].getAnimal());
                }
            }
        }
    }
}

QString Field::styleSheet(unsigned int i, unsigned int j) const
{
    try{
        if(field[i][j].getColor() == Colors::green)
        {
            return "color: rgb(0, 255, 0)";
        }
        if(field[i][j].getColor() == Colors::red)
        {
            return "color: rgb(255, 0, 0)";
        }
        if(field[i][j].getColor() == Colors::yellow)
        {
            return "color: rgb(223, 228, 85)";
        }
        return "color: rgb(207, 210, 175)";
    }
    catch(std::out_of_range &oor)
    {
        throw(&oor);
    }
}

unsigned int Field::getAmountOfMice() const
{
    return amountOfMices;
}

unsigned int Field::getOwlHP() const
{
    return owl.getHP();
}
