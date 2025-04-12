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

    sf::CircleShape circle(25.f);
    circle.setFillColor(sf::Color::White);
    circle.setPosition(sf::Vector2f(10, 100));

    sf::CircleShape triangle(25.f, 3);
    triangle.setFillColor(sf::Color::Cyan);
    triangle.setPosition(sf::Vector2f(100, 100));

    sf::CircleShape square(25.f, 4);
    square.setFillColor(sf::Color::Magenta);
    square.setPosition(sf::Vector2f(190, 100));


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
		window.draw(circle);
		window.draw(triangle);
		window.draw(square);
        window.display();
    }
}