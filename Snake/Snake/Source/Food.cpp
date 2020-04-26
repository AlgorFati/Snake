#include "Food.h"
#include "Snake.h"

Food::Food(Pos pos)
{
	_pos = pos;

	int r = rand();
	if (r % 3 == 0)
	{
		_shape = "��";
	}
	else if (r % 3 == 1)
	{
		_shape = "��";
	}
	else
	{
		_shape = "��";
	}
}

void Food::printBody()
{
	Utility::printStringOnPos(_shape, _pos);
}