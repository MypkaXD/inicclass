/*
Напишите класс с именем RGBA, который содержит 4 переменные-члены типа std::uint8_t :

   m_red;

   m_green;

   m_blue;

   m_alpha.

Присвойте 0 в качестве значения по умолчанию для m_red, m_green и m_blue, и 255 для m_alpha. Создайте конструктор со списком инициализации членов,
который позволит пользователю передавать значения для m_red,m_green, m_blue и m_alpha. Напишите функцию print(), которая будет выводить значения переменных-членов.

Подсказка: Если функция print() работает некорректно, то убедитесь, что вы конвертировали std::uint8_t в int.

Должен выдавать следующий результат:

r=0 g=135 b=135 a=255
*/

#include <iostream>
#include <cstdint>

class RGBA {
	std::uint8_t m_red;
	std::uint8_t m_green;
	std::uint8_t m_blue;
	std::uint8_t m_alpha;
public:
	RGBA(std::uint8_t red = 0, std::uint8_t green = 0, std::uint8_t blue = 0, std::uint8_t alpha = 255)
		: m_alpha(alpha), m_blue(blue), m_green(green), m_red(red)
	{
	}

	void print() {
		std::cout << "r = " << static_cast<int>(m_red) << " g = " << static_cast<int>(m_green) << " b = " << static_cast<int>(m_blue) << " a = " << static_cast<int>(m_alpha) << std::endl;
	}
};

int main()
{
	RGBA color(0, 135, 135);
	color.print();

	return 0;
}
