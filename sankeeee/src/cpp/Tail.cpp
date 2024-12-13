#include "Tail.hpp"

Tail::Tail(Vector2i spawn_position, Body& parent) :
Body{spawn_position},
m_parent{parent},
m_previous_parent_position{m_parent.GetPosition()}
{
}

void Tail::FollowToParent()
{
    m_position                 = m_previous_parent_position;
    m_previous_parent_position = m_parent.GetPosition();
};
