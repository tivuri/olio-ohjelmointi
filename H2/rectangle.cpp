#include "rectangle.h"

double Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea()
{
    return width * height;
}

double Rectangle::getCircum()
{
    return 2 * (width + height);
}



Rectangle::Rectangle() {}
