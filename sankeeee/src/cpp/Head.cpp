#include "Head.hpp"

void Head::ChangeDirection(Direction direction)
{
    switch (direction)
    {
        case Direction::Left:
        {
            if (m_direction == kUp)
                m_direction = kLeft;
            else if (m_direction == kLeft)
                m_direction = kDown;
            else if (m_direction == kDown)
                m_direction = kRight;
            else
                m_direction = kUp;

            break;
        }
        case Direction::Right:
        {
            if (m_direction == kUp)
                m_direction = kRight;
            else if (m_direction == kRight)
                m_direction = kDown;
            else if (m_direction == kDown)
                m_direction = kLeft;
            else
                m_direction = kUp;

            break;
        }
        default:
        {
            // "You DUMB!"
            // std::abort();
        }
    }
}

void Head::MoveForward()
{
    m_position += m_direction;
}
