template <uint8_t MaxTails>
Snake<MaxTails>::Snake() : m_head{{0, 6}}
{
    m_tails.emplace_back(Vector2i{0, 7}, m_head);
}

template <uint8_t MaxTails>
void Snake<MaxTails>::Reset()
{
    m_head = Head{{0, 6}};
    m_tails.clear();
    m_tails.emplace_back(Vector2i{0, 7}, m_head);
}

template <uint8_t MaxTails>
void Snake<MaxTails>::ChangeDirection(Direction direction)
{
    m_head.ChangeDirection(direction);
}

template <uint8_t MaxTails>
void Snake<MaxTails>::Update()
{
    m_head.MoveForward();
    for (auto& tail : m_tails)
        tail.FollowToParent();
}

template <uint8_t MaxTails>
void Snake<MaxTails>::Eat()
{
    auto& last_tail{m_tails.back()};
    auto  last_tail_pos{last_tail.GetPosition()};
    m_tails.emplace_back(Vector2i{last_tail_pos.x - 1, last_tail_pos.y}, last_tail);
}

template <uint8_t MaxTails>
inline const Head& Snake<MaxTails>::GetHead() const
{
    return m_head;
}

template <uint8_t MaxTails>
inline const etl::vector<Tail, MaxTails>& Snake<MaxTails>::GetTails() const
{
    return m_tails;
}
