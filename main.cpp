#include <SFML/Graphics.hpp>

void main() {
	sf::RenderWindow window(sf::VideoMode(444, 444), "Hello SFML");
	
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear(sf::Color::Green);
		window.display();
	}
}