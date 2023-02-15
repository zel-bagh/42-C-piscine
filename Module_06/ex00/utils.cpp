#include <iostream>
#include <cmath>

void	print_help( void )
{
	std::cout << "format = ./convert {char, int, float or double}" << std::endl;
}

bool	canConvertToChar( double number )
{
	if (number > 127 || number < -128 || number == std::numeric_limits<double>::infinity() ||
		number == -std::numeric_limits<double>::infinity() || std::isnan(number))
		std::cout << "char: impossible" << std::endl;
	else if (number <= 31 || number == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		return true;
	return false;
}

bool    canConvertToInt( double number )
{
	return (number <= std::numeric_limits<int>::max()
			&& number >= std::numeric_limits<int>::min()
			&& number != std::numeric_limits<double>::infinity()
			&& number != -std::numeric_limits<double>::infinity()
			&& !std::isnan(number));
}

bool	canConvertToFloat( double number )
{
	return ((number <= std::numeric_limits<float>::max()
			&& number >= std::numeric_limits<float>::min())
			|| number == std::numeric_limits<double>::infinity()
			|| number == -std::numeric_limits<double>::infinity()
			|| std::isnan(number));
}

const char	*printDotZero( double number )
{
	if (number - static_cast<int>(number) == 0.0)
		return (".0");
	return ("");
}
