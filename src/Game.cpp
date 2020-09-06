#include "Game.hpp"

Game::Game()
{
    m_window = new sf::RenderWindow(sf::VideoMode(200, 200), "Platform_Game");
}
Game::~Game()
{
    delete m_window;
}
void Game::run()
{
    while (m_window->isOpen())
	{
		updateDt();
        readInput();
		update();
		render();
	}
}

void Game::readInput()
{
    sf::Event event;
    while (m_window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            m_window->close();
    }
}

void Game::updateDt()
{

}

void Game::update()
{

}

void Game::render()
{
    m_window->clear();
    //Draw
    m_window->display();
}
