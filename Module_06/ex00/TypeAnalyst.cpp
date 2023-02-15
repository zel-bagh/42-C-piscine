#include <string>
#include "utils.hpp"
#include "TypeAnalyst.hpp"


TypeAnalyst::TypeAnalyst( void )
{
	resetValues();
	std::cout << "Default constructor for TypeAnalyst called" << std::endl;
}

TypeAnalyst::TypeAnalyst( char *input )
{
    //std::cout << "Char* constructor for TypeAnalyst called" << std::endl;
	analyseNewInput(input);

}

TypeAnalyst::TypeAnalyst( TypeAnalyst const& src )
{
	std::cout << "Copy constructor for TypeAnalyst called" << std::endl;
	*this = src;
}

TypeAnalyst::~TypeAnalyst( void )
{
	//std::cout << "Destructor for TypeAnalyst called" << std::endl;
	return;
}

TypeAnalyst &	TypeAnalyst::operator=( TypeAnalyst const& src )
{
	std::cout << "Assignement operator for TypeAnalyst called" << std::endl;
	_selectedType = src._selectedType;
	_charScalar = src._charScalar;
	_intScalar = src._intScalar;
	_floatScalar = src._floatScalar;
	_doubleScalar = src._doubleScalar;
	return *this;
}

void	TypeAnalyst::analyseNewInput( char *input )
{
	resetValues();
	if (!input || input[0] == 0)
		throw EmptyInput();
	if (!getType(input))
		throw CannotAnalyse();
	setVariable(input);
}

void	TypeAnalyst::printTypes( void )
{
	if (_selectedType == noType)
		std::cout << "No type set" << std::endl;
	printChar();
	printInt();
	printFloat();
	printDouble();
}
void	TypeAnalyst::resetValues( void )
{
	_selectedType = noType;
	_charScalar = 0;
	_intScalar = 0;
	_floatScalar = 0;
	_doubleScalar = 0;
}
bool	TypeAnalyst::getType( char* input )
{
	_selectedType = handle_special_cases(input);
	if (_selectedType != noType)
		return true;
	_selectedType = handle_numeric_values(input);
	if (_selectedType != noType)
			return true;
	return false;
}
void	TypeAnalyst::setVariable( char *input )
{
	if (_selectedType == charType)
	{

		std::cout << "Selected char type" << std::endl;
		_charScalar = input[0];
	}
	else if (_selectedType == intType)
	{

		std::cout << "Selected int type" << std::endl;
		_intScalar = atoi(input);
	}
	else if (_selectedType == floatType)
	{

		std::cout << "Selected float type" << std::endl;
		_floatScalar = atof(input);
	}
	else if (_selectedType == doubleType)
	{

		std::cout << "Selected double type" << std::endl;
		_doubleScalar = atof(input);
	}
}
int		TypeAnalyst::handle_special_cases( char *input ) const
{
	const std::string	special_doubles[] =
	{
		"inf", "+inf", "-inf", "nan"
	};
	const std::string	special_floats[] =
	{
		"inff", "+inff", "-inff", "nanf"
	};
	for (int i = 0; i < 4; i++)
	{
		if (special_doubles[i] == input)
			return doubleType;
		else if (special_floats[i] == input)
			return floatType;
	}
	return noType;
}
int		TypeAnalyst::handle_numeric_values( char *input ) const
{
	int	i = -1;
	int	dotCount = 0;

	if ((input[0] == '-' && input[1] >= '0' && input[1] <= '9') ||
		(input[0] >= '0' && input[0] <= '9'))
	{
		while (input[++i])
		{
			if ((input[i] < '0' || input[i] > '9') && input[i] != '.' && input[i] != 'f')
				return (noType);
			if (input[i] == '.')
			{
				if (dotCount == 1 || input[i-1] == 'f' || input[i+1] == 'f' || !input[i+1])
					return (noType);
				dotCount++;
			}
			if (input[i] == 'f' && input[i+1])
				return (noType); 
		}
		if (dotCount && input[i-1] == 'f')
			return (floatType);
		if (dotCount)
			return (doubleType);
		if (input[i-1] != 'f')
			return (intType);
		return (noType);
	}
	if (!input[1])
		return (charType);
	else
		return (noType);
}
void	TypeAnalyst::printChar( void )
{
	if (_selectedType == intType)
	{
		if (canConvertToChar(_intScalar))
			std::cout << "char: " << static_cast<char>(_intScalar)
				<< std::endl;
	}
	else if (_selectedType == floatType)
	{
		if (canConvertToChar(_floatScalar))
			std::cout << "char: " << static_cast<char>(_floatScalar)
				<< std::endl;
	}
	else if (_selectedType == doubleType)
	{
		if (canConvertToChar(_doubleScalar))
			std::cout << "char: " << static_cast<char>(_doubleScalar)
				<< std::endl;
	}
	else
		std::cout << "char: " << _charScalar << std::endl;
}

void	TypeAnalyst::printInt( void )
{
	if (_selectedType == charType)
		std::cout << "int: " << static_cast<int>(_charScalar)
			<< std::endl;
	else if (_selectedType == intType)
		std::cout << "int: " << _intScalar << std::endl;
	else if (_selectedType == floatType)
	{
		if (canConvertToInt(_floatScalar))
			std::cout << "int: " << static_cast<int>(_floatScalar)
				<< std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	else if (_selectedType == doubleType)
	{
		if (canConvertToInt(_doubleScalar))
			std::cout << "int: " << static_cast<int>(_doubleScalar)
				<< std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
}
void	TypeAnalyst::printFloat( void )
{
	if (_selectedType == charType)
		std::cout << "float: " << static_cast<float>(_charScalar) << ".0f"
			<< std::endl;
	else if (_selectedType == intType)
		std::cout << "float: " << static_cast<float>(_intScalar) << ".0f"
			<< std::endl;
	else if (_selectedType == floatType)
		std::cout << "float: " << _floatScalar
			<< printDotZero(static_cast<float>(_floatScalar)) << "f"
			<< std::endl;
	else if (_selectedType == doubleType)
	{
		if (canConvertToFloat(_doubleScalar))
			std::cout << "float: " << static_cast<float>(_doubleScalar)
				<< printDotZero((_doubleScalar)) << "f"
				<< std::endl;
		else
			std::cout << "float: impossible" << std::endl;
	}
}
void	TypeAnalyst::printDouble( void )
{
	if (_selectedType == charType)
		std::cout << "double: " << static_cast<double>(_charScalar)
			 << ".0" << std::endl;
	else if (_selectedType == intType)
		std::cout << "double: " << static_cast<double>(_intScalar)
			<< ".0" << std::endl;
	else if (_selectedType == floatType)
		std::cout << "double: " << static_cast<double>(_floatScalar)
			<< printDotZero(static_cast<double>(_floatScalar))
			<< std::endl;
	else if (_selectedType == doubleType)
		std::cout << "double: " << _doubleScalar
			<< printDotZero((_doubleScalar))
			<< std::endl;
}

const char* TypeAnalyst::EmptyInput::what() const _NOEXCEPT
{
	return "Please enter an input to be analysed by the converter";
}
const char* TypeAnalyst::CannotAnalyse::what() const _NOEXCEPT
{
	return "The input is not a valid char, int, float or double";
}