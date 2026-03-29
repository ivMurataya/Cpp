#include "square.h"

Square::Square(double side_param)
     : m_side{side_param}
{
}

double Square::surface() const {
    return m_side*m_side;
}

Square::~Square()
{
}

