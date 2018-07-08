#ifndef MATRIX_H_
#define MATRIX_H_


namespace Matr{

template <typename Type>
class Slice
{
public:
	Slice();

private:

	int Size_;
	Type Values_[];
};



} /// namespace matr

#endif
