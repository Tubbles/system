#include "keyparse.h"

std::optional<char> parse(olc::PixelGameEngine *olc) {
    if (olc->GetKey(olc::Key::CTRL).bHeld) {
        return std::nullopt;
    } else if (olc->GetKey(olc::Key::A).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'A';
        } else {
            return 'a';
        }
    } else if (olc->GetKey(olc::Key::B).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'B';
        } else {
            return 'b';
        }
    } else if (olc->GetKey(olc::Key::C).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'C';
        } else {
            return 'c';
        }
    } else if (olc->GetKey(olc::Key::D).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'D';
        } else {
            return 'd';
        }
    } else if (olc->GetKey(olc::Key::E).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'E';
        } else {
            return 'e';
        }
    } else if (olc->GetKey(olc::Key::F).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'F';
        } else {
            return 'f';
        }
    } else if (olc->GetKey(olc::Key::G).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'G';
        } else {
            return 'g';
        }
    } else if (olc->GetKey(olc::Key::H).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'H';
        } else {
            return 'h';
        }
    } else if (olc->GetKey(olc::Key::I).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'I';
        } else {
            return 'i';
        }
    } else if (olc->GetKey(olc::Key::J).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'J';
        } else {
            return 'j';
        }
    } else if (olc->GetKey(olc::Key::K).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'K';
        } else {
            return 'k';
        }
    } else if (olc->GetKey(olc::Key::L).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'L';
        } else {
            return 'l';
        }
    } else if (olc->GetKey(olc::Key::M).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'M';
        } else {
            return 'm';
        }
    } else if (olc->GetKey(olc::Key::N).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'N';
        } else {
            return 'n';
        }
    } else if (olc->GetKey(olc::Key::O).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'O';
        } else {
            return 'o';
        }
    } else if (olc->GetKey(olc::Key::P).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'P';
        } else {
            return 'p';
        }
    } else if (olc->GetKey(olc::Key::Q).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'Q';
        } else {
            return 'q';
        }
    } else if (olc->GetKey(olc::Key::R).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'R';
        } else {
            return 'r';
        }
    } else if (olc->GetKey(olc::Key::S).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'S';
        } else {
            return 's';
        }
    } else if (olc->GetKey(olc::Key::T).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'T';
        } else {
            return 't';
        }
    } else if (olc->GetKey(olc::Key::U).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'U';
        } else {
            return 'u';
        }
    } else if (olc->GetKey(olc::Key::V).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'V';
        } else {
            return 'v';
        }
    } else if (olc->GetKey(olc::Key::W).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'W';
        } else {
            return 'w';
        }
    } else if (olc->GetKey(olc::Key::X).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'X';
        } else {
            return 'x';
        }
    } else if (olc->GetKey(olc::Key::Y).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'Y';
        } else {
            return 'y';
        }
    } else if (olc->GetKey(olc::Key::Z).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return 'Z';
        } else {
            return 'z';
        }
    } else if (olc->GetKey(olc::Key::K0).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return ')';
        } else {
            return '0';
        }
    } else if (olc->GetKey(olc::Key::K1).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '!';
        } else {
            return '1';
        }
    } else if (olc->GetKey(olc::Key::K2).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '@';
        } else {
            return '2';
        }
    } else if (olc->GetKey(olc::Key::K3).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '#';
        } else {
            return '3';
        }
    } else if (olc->GetKey(olc::Key::K4).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '$';
        } else {
            return '4';
        }
    } else if (olc->GetKey(olc::Key::K5).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '%';
        } else {
            return '5';
        }
    } else if (olc->GetKey(olc::Key::K6).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '^';
        } else {
            return '6';
        }
    } else if (olc->GetKey(olc::Key::K7).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '&';
        } else {
            return '7';
        }
    } else if (olc->GetKey(olc::Key::K8).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '*';
        } else {
            return '8';
        }
    } else if (olc->GetKey(olc::Key::K9).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '(';
        } else {
            return '9';
        }
    } else if (olc->GetKey(olc::Key::SPACE).bPressed) {
        return ' ';
    } else if (olc->GetKey(olc::Key::BACK).bPressed) {
        return '\b';
    } else if (olc->GetKey(olc::Key::ESCAPE).bPressed) {
        return '\e';
    } else if (olc->GetKey(olc::Key::ENTER).bPressed) {
        return '\n';
    } else if (olc->GetKey(olc::Key::OEM_1).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return ':';
        } else {
            return ';';
        }
    } else if (olc->GetKey(olc::Key::OEM_2).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '?';
        } else {
            return '/';
        }
    } else if (olc->GetKey(olc::Key::OEM_3).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '~';
        } else {
            return '`';
        }
    } else if (olc->GetKey(olc::Key::OEM_4).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '{';
        } else {
            return '[';
        }
    } else if (olc->GetKey(olc::Key::OEM_5).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '|';
        } else {
            return '\\';
        }
    } else if (olc->GetKey(olc::Key::OEM_6).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '}';
        } else {
            return ']';
        }
    } else if (olc->GetKey(olc::Key::OEM_7).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '"';
        } else {
            return '\'';
        }
    } else if (olc->GetKey(olc::Key::OEM_8).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '?';
        } else {
            return '?';
        }
    } else if (olc->GetKey(olc::Key::EQUALS).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '+';
        } else {
            return '=';
        }
    } else if (olc->GetKey(olc::Key::COMMA).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '<';
        } else {
            return ',';
        }
    } else if (olc->GetKey(olc::Key::MINUS).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '_';
        } else {
            return '-';
        }
    } else if (olc->GetKey(olc::Key::PERIOD).bPressed) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            return '>';
        } else {
            return '.';
        }
    }

    return std::nullopt;
}
