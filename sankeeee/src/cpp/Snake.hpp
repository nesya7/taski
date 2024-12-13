#pragma once

#define ETL_NO_STL 1
#include <etl/vector.h>
#undef ETL_NO_STL

#include "Tail.hpp"
#include "Head.hpp"
#include "Direction.hpp"

template<uint8_t MaxTails>
class Snake
{
public:
    Snake();

    void Update();

    void Reset();
    void ChangeDirection(Direction direction);
    void Eat();

    inline const Head& GetHead() const;
    inline const etl::vector<Tail, MaxTails>& GetTails() const;

private:
    Head                        m_head;
    etl::vector<Tail, MaxTails> m_tails;
};

#include "Snake.inl"