#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void	iter(T *array, int arraySize, void (*fctToExecute)(T const &))
{
	for (int i = 0; i < arraySize; i++)
		fctToExecute(array[i]);
}

#endif