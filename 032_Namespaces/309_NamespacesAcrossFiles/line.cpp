#include "line.h"

namespace Geom{
    
    Line::Line(const Point& start, const Point& end)
        : m_start{start}, m_end{end}
    {
    }


    void Line::print_info()const {
        std::cout << "Line from " << std::endl;
        m_start.print_info();
        std::cout << "to : " << std::endl;
        m_end.print_info();
    }
}



