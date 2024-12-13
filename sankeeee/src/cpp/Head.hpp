#pragma once

#include "Body.hpp"
#include "Direction.hpp"

class Head final : public Body
{
public:
    using Body::Body;

    void ChangeDirection(Direction direction);
    void MoveForward();

private:
    Vector2i m_direction{kUp};
};
