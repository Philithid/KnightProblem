#pragma once
#include "Piece.h"
class King : public Piece
{
public:
	King() : Piece() {}

	std::stringstream draw();
};
