#include <iostream>

class Box {
public:
    Box() = default;
    
    double volume()
    {
        return m_length * m_width * m_height;
    }

private:
    double m_length {1.0};
    double m_width {1.0};
    double m_height {1.0};
};

class Cube {
public:
    explicit Cube(double side) : m_side {side} {
        std::cout << "Cube constructor called." << std::endl;
    }

    double volume()
    {
        m_side * m_side * m_side;
    }

    bool hasLargerVolumeThan(Cube cube)
    {
        return volume() > cube.volume();
    }

private:
    int m_side;
};

int main()
{
    Box myBox;
    Cube box1 {7.0};
    Cube box2 {3.0};

    if (box1.hasLargerVolumeThan(box2)) {
        std::cout << "box1 is larger than box2." << std::endl;
    } else std::cout << "Volume of box1 is " << box1.volume() << std::endl;

    std::cout << "Volume of myBox is " << myBox.volume() << std::endl;
}

