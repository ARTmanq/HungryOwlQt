#include "facade.h"

Facade::Facade()
{
    game = nullptr;
    gameMedium = nullptr;
    gameHard = nullptr;
}

Facade::~Facade()
{
    delete game;
    delete gameMedium;
    delete gameHard;
}

void Facade::showDialog()
{
    w.show();
}

void Facade::showHowToPlay()
{
    how.show();
    difficulty = w.getDifficulty();
}

void Facade::showGame()
{
    if(game != nullptr)
    {
        game->show();
    }
    else if(gameMedium != nullptr)
    {
        gameMedium->show();
    }
    else if(gameHard != nullptr)
    {
        gameHard->show();
    }
}

void Facade::showResult()
{
    if(isGameAccepted())
    {
        win.show();
    }
    else
    {
        loss.show();
    }
}

bool Facade::isDialogAccepted() const
{
    return w.isAccepted();
}

bool Facade::isHowToPlayAccepted() const
{
    return how.isAccepted();
}

bool Facade::isGameAccepted() const
{
    if(game != nullptr)
    {
        return game->isAccepted();
    }
    else if(gameMedium != nullptr)
    {
        gameMedium->isAccepted();
    }
    else if(gameHard != nullptr)
    {
        gameHard->isAccepted();
    }
    return false;
}

void Facade::gameSetField()
{
    switch(difficulty)
    {
    case Difficulty::Easy:
        {
            game = new Game;
            game->setField();
            break;
        }
    case Difficulty::Medium:
        {
            gameMedium = new GameMedium;
            gameMedium->setField();
            break;
        }
    case Difficulty::Hard:
        {
            gameHard = new GameHard;
            gameHard->setField();
            break;
        }
    default:
        {
            game = new Game;
            game->setField();
        }
    }
}
