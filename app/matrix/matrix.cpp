#include "matrix.h"


template<typename type>
inline Matr::Slice<type>::Slice() :
	Values_(type[1] = {}),
	Size_(1)
{
	// intentionally left empty
}

template<typename type>
inline Matr::Slice<type>::Slice(int size) :
	Values_(type[size] = {}),
	Size_(size)
{
	// intentionally left empty
}