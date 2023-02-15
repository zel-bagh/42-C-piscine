#ifndef TYPEANALYST_HPP
# define TYPEANALYST_HPP
# include <iostream>
# include <stdexcept>
class TypeAnalyst
{
public:
	TypeAnalyst( void );
	TypeAnalyst( char *input );
	TypeAnalyst( const TypeAnalyst &src );
	~TypeAnalyst( void );
	TypeAnalyst	&operator=( const TypeAnalyst &src );
	void	analyseNewInput( char *input );
	void	printTypes( void );
private:
	int		_selectedType;
	char	_charScalar;
	int		_intScalar;
	float	_floatScalar;
	double	_doubleScalar;
	void	resetValues( void );
	bool	getType( char *input );
	void	setVariable( char *input );
	int		handle_special_cases( char *input ) const;
	int		handle_numeric_values( char *input ) const;
	void	printChar( void );
	void	printInt( void );
	void	printFloat( void );
	void	printDouble( void );
	static const int noType = -1;
	static const int charType = 0;
	static const int intType = 1;
	static const int floatType = 2;
	static const int doubleType = 3;
public:
	class EmptyInput : public std::exception{
		virtual const char* what() const _NOEXCEPT;
	};
	class CannotAnalyse : public std::exception{
		virtual const char* what() const _NOEXCEPT;
	};
};
#endif