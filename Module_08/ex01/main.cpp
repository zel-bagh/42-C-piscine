#include "Span.hpp"

int	main( void )
{

	// Span	span1(5);

	// span1.addNumber(4);
	// span1.addNumber(4);
	// span1.addNumber(2);
	// span1.addNumber(6);
	// span1.addNumber(25);
	// span1.show_elements();

	// try
	// {
	// 	span1.addNumber(4);
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
    // std::cout << "shortest span = " << span1.shortestSpan() << std::endl;
    // std::cout << "longest span = " << span1.longestSpan() << std::endl;


    // {
    //     Span span3(50000);
    //     span3.randomFill();
    //     try
    //     {
    //         span3.addNumber(5);
    //     }
    //     catch(std::exception &e)
    //     {
    //         std::cout << e.what() << std::endl;
    //     }
    //    // span3.show_elements();
	//     std::cout << "shortest span = " << span3.shortestSpan() << std::endl;
    //     std::cout << "longest span = " << span3.longestSpan() << std::endl;
    // }

    Span span2(10);
	std::vector<int>	vect;
	vect.push_back(25);
	vect.push_back(5);
	vect.push_back(12);
	vect.push_back(90);
	vect.push_back(-2);
    try
    {
	    span2.addByIteratorRange(vect.begin(), vect.end());
		span2.show_elements();
	    std::cout << "shortest span = " << span2.shortestSpan() << std::endl;
        std::cout << "longest span = " << span2.longestSpan() << std::endl;
    }
    catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}