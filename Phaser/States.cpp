//
// Created by Julia on 4/11/23.
//

#include "States.h"

States::States()
{
    for (int i = 0; i < LAST_STATE; ++i)
    {
        states[(state_enum)i] = false;
    }
}

void States::enable_state(state_enum state)
{
    states[state] = true;
}

void States::disable_state(state_enum state)
{
    states[state] = false;
}

bool States::check_state(state_enum state)
{
    return states[state];
}

void States::toggle_state(state_enum state)
{
    states[state] = !states[state];
}
