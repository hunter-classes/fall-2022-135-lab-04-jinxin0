#include "shapes.h"

std::string box(std::size_t width, std::size_t height)
{
    std::string shape;
    for (std::size_t h = 0; h < height; h++)
    {
        for (std::size_t w = 0; w < width; w++)
        {
            shape.push_back('*');
        }
        shape.push_back('\n');
    }
    return shape;
}

std::string checkerboard(std::size_t width, std::size_t height)
{
    std::string shape;
    bool skip_space = false;
    for (std::size_t h = 0; h < height; h++)
    {
        for (std::size_t w = 0; w < width; w++)
        {
            if (skip_space)
                shape.push_back(' ');
            else 
                shape.push_back('*');
            skip_space = !skip_space;
        }
        shape.push_back('\n');
    }
    return shape;
}

std::string cross(std::size_t size)
{
    std::string shape;
    for (std::size_t i = 0; i < size * size; i++)
    {
        if (((i % (size + 1)) == 0) || ((i % (size - 1)) == 0)) 
            shape.push_back('*');
        else 
            shape.push_back(' ');

        if (((i + 1) % size) == 0)
            shape.push_back('\n');
    }
    return shape;
}

std::string lower_triangle(std::size_t side_length)
{
    std::string shape;
    for (std::size_t h = 0; h < side_length; h++)
    {
        for (std::size_t w = 0; w < side_length; w++)
        {
            if (w < (h + 1))
                shape.push_back('*');
            else
                shape.push_back(' ');
        }
        shape.push_back('\n');
    }
    return shape;
}

std::string upper_triangle(std::size_t side_length)
{
    std::string shape;
    for (std::size_t h = 0; h < side_length; h++)
    {
        for (std::size_t w = 0; w < side_length; w++)
        {
            if (w >= h)
                shape.push_back('*');
            else
                shape.push_back(' ');
        }
        shape.push_back('\n');
    }
    return shape;
}

std::string upside_down_trapezoid(std::size_t width, std::size_t height)
{
    if (width < height * 2)
        return "Impossibe shape!\n";
    
    std::string shape;
    for (std::size_t h = 0; h < height; h++)
    {
        for (std::size_t i = 0; i < h; i++)
            shape.push_back(' ');
        for (std::size_t w = h; w < (width - h); w++)
            shape.push_back('*');
        shape.push_back('\n');
    }
    return shape;
}

std::string checkerboard3x3(std::size_t width, std::size_t height)
{
    const std::size_t SIZE = 3;
    std::string shape;
    bool skip_space = false;
    char pixel = skip_space ? ' ' : '*';
    for (std::size_t h = 0; h < height; )
    {
        std::string buf;
        std::size_t i = 0;
        while (buf.size() < width)
        {
            buf.push_back(pixel);
            if (++i == SIZE)
            {
                i = 0;
                skip_space = !skip_space;
                pixel = skip_space ? ' ' : '*';
            }
        }
        buf.push_back('\n');
        for (std::size_t i = 0; i < SIZE && h < height; i++, h++)
            shape.append(buf);
    }
    return shape;
}
