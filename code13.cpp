// state_machine.cpp
#include <bits/stdc++.h>
using namespace std;

enum class State { Idle, Loading, Success, Error };

int main() {
    State current = State::Idle;

    unordered_map<State, function<State()>> transition = {
        { State::Idle, [] {
            cout << "[Idle] → Loading\n";
            return State::Loading;
        }},
        { State::Loading, [] {
            cout << "[Loading] → ";
            if (rand() % 2)
                return (cout << "Success\n", State::Success);
            else
                return (cout << "Error\n", State::Error);
        }},
        { State::Success, [] {
            cout << "[Success] (terminal)\n";
            return State::Success;
        }},
        { State::Error, [] {
            cout << "[Error] retry → Loading\n";
            return State::Loading;
        }}
    };

    // run the state machine
    for (int step = 0; step < 6; step++) {
        current = transition[current]();
        if (current == State::Success) break;
    }

    cout << "Final state: "
         << (current == State::Success ? "Success" :
             current == State::Error ? "Error" :
             current == State::Loading ? "Loading" : "Idle")
         << "\n";
}
