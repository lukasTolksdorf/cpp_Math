#ifndef MATRIX_H_
#define MATRIX_H_

namespace Matr{

template <typename type>
class Slice
{
public:
	Slice();
	Slice(int size);
	//type& operator[] (int index);
	//Slice& operator= (const Slice rhs);
private:

	type Values_[];
	int Size_;
};



} /// namespace matr

#endif
