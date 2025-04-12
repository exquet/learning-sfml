#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({ 400, 400 }), "SFML works!", sf::Style::Default, sf::State::Windowed);
    sf::Font font;
	if (!font.openFromFile("C:/Users/dimat/source/SFML repos/project 1/textFont.ttf"))
		return -1;

    sf::Text text(font);
	text.setString(L"тест ало привет");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::White);
	text.setStyle(sf::Text::Bold | sf::Text::Style::Italic);
	sf::Text text2(font);
	text2.setString(L"тест ало привет");
	text2.setCharacterSize(16);
    text2.setFillColor(sf::Color::Yellow);
	text2.setPosition(sf::Vector2f(0, 50));

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(text);
        window.draw(text2);
        window.display();
    }
}