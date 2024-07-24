//
// Created by Julia on 4/11/23.
//

#ifndef SFMLTUTORIAL_STATES_H
#define SFMLTUTORIAL_STATES_H
#include <map>

enum state_enum {
    MOVING,
    LAST_STATE
};

class States
{
private:
    std::map<state_enum, bool> states;
public:
    States();
    void enable_state(state_enum state);
    void disable_state(state_enum state);
    bool check_state(state_enum state);
    void toggle_state(state_enum state);
};


#endif //SFMLTUTORIAL_STATES_H
