//
// Created by Nero Sparda on 04/02/24.
//

/*
Write a code for the Tower of Hanoi Algorithm using two
temporary pegs I.e. There is a source pole/peg named T1, two temporary pegs
named T2 and T3; a destination pole/peg named T4. Take the number of disks as
input from the user.
*/

#include <iostream>

void make_move(int source, int destination) {
    std::string line = "T" + std::to_string(source) + " -> " +
    "T" + std::to_string(destination) + "\n";

    std::cout << line;
}


void solve_hanoi(int disks, int begin, int aux, int end) {
    if (disks == 1) {
        make_move(begin, end);
    } else {
        solve_hanoi(disks - 1, begin, end, aux);
        solve_hanoi(1, begin, aux, end);
        solve_hanoi(disks - 1, aux, begin, end);
    }
}

void solve_hanoi_2aux(int disks, int begin, int aux1, int aux2, int end) {
    if (disks == 1) {
        make_move(begin, end);
    } else if (disks == 2) {
        make_move(begin, aux1);
        make_move(begin, end);
        make_move(aux1, end);
    }
    else if (disks == 3) {
        make_move(begin, aux1);
        make_move(begin, aux2);
        make_move(begin, end);
        make_move(aux2, end);
        make_move(aux1, end);
    }
    else {
        solve_hanoi_2aux(disks - 2, begin, aux2, end, aux1);
        make_move(begin, aux2);
        make_move(begin, end);
        make_move(aux2, end);
        solve_hanoi_2aux(disks - 2, aux1, begin, aux2, end);
    }
}


int main() {
    int disks;
    std::cout << "Enter the number of disks: ";
    std::cin >> disks;

    std::cout << "The sequence of steps are:-\n";
    solve_hanoi_2aux(disks, 1, 2, 3, 4);

    return 0;
}
