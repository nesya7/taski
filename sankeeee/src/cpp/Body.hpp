#pragma once

#include "Vector2.hpp"

class Body
{
public:
    explicit Body(Vector2i spawn_position);
    virtual ~Body() = default;

    inline Vector2i GetPosition() const;

protected:
    Vector2i m_position;
};

#include "Body.inl"