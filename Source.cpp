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

    sf::RectangleShape line({ 75.f, 5.f });
    line.rotate(sf::degrees(45));
	line.setPosition(sf::Vector2f(280, 100));

    sf::ConvexShape convex;
	convex.setPointCount(4);
	convex.setFillColor(sf::Color::Green);
	convex.setPosition(sf::Vector2f(100, 200));
	convex.setPoint(0, { 25, 10 });
    convex.setPoint(1, { 280, 25 });
    convex.setPoint(2, { 225, 150 });
	convex.setPoint(3, { 10, 100 });


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
		window.draw(line);
		window.draw(convex);
        window.display();
    }
}