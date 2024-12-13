#pragma once

#include "Body.hpp"

class Tail final : public Body
{
public:
    Tail(Vector2i spawn_position, Body& parent);

    void FollowToParent();

private:
    Body&    m_parent;
    Vector2i m_previous_parent_position;
};
