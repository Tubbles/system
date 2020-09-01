#include "keyparse.h"

std::optional<char> parse(olc::PixelGameEngine *olc, RepeatData &data) {
    std::optional<char> out = std::nullopt;
    if (olc->GetKey(olc::Key::CTRL).bHeld) {
        // Do nothing
    } else if (olc->GetKey(olc::Key::A).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'A';
        } else {
            out = 'a';
        }
    } else if (olc->GetKey(olc::Key::B).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'B';
        } else {
            out = 'b';
        }
    } else if (olc->GetKey(olc::Key::C).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'C';
        } else {
            out = 'c';
        }
    } else if (olc->GetKey(olc::Key::D).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'D';
        } else {
            out = 'd';
        }
    } else if (olc->GetKey(olc::Key::E).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'E';
        } else {
            out = 'e';
        }
    } else if (olc->GetKey(olc::Key::F).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'F';
        } else {
            out = 'f';
        }
    } else if (olc->GetKey(olc::Key::G).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'G';
        } else {
            out = 'g';
        }
    } else if (olc->GetKey(olc::Key::H).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'H';
        } else {
            out = 'h';
        }
    } else if (olc->GetKey(olc::Key::I).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'I';
        } else {
            out = 'i';
        }
    } else if (olc->GetKey(olc::Key::J).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'J';
        } else {
            out = 'j';
        }
    } else if (olc->GetKey(olc::Key::K).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'K';
        } else {
            out = 'k';
        }
    } else if (olc->GetKey(olc::Key::L).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'L';
        } else {
            out = 'l';
        }
    } else if (olc->GetKey(olc::Key::M).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'M';
        } else {
            out = 'm';
        }
    } else if (olc->GetKey(olc::Key::N).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'N';
        } else {
            out = 'n';
        }
    } else if (olc->GetKey(olc::Key::O).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'O';
        } else {
            out = 'o';
        }
    } else if (olc->GetKey(olc::Key::P).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'P';
        } else {
            out = 'p';
        }
    } else if (olc->GetKey(olc::Key::Q).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'Q';
        } else {
            out = 'q';
        }
    } else if (olc->GetKey(olc::Key::R).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'R';
        } else {
            out = 'r';
        }
    } else if (olc->GetKey(olc::Key::S).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'S';
        } else {
            out = 's';
        }
    } else if (olc->GetKey(olc::Key::T).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'T';
        } else {
            out = 't';
        }
    } else if (olc->GetKey(olc::Key::U).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'U';
        } else {
            out = 'u';
        }
    } else if (olc->GetKey(olc::Key::V).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'V';
        } else {
            out = 'v';
        }
    } else if (olc->GetKey(olc::Key::W).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'W';
        } else {
            out = 'w';
        }
    } else if (olc->GetKey(olc::Key::X).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'X';
        } else {
            out = 'x';
        }
    } else if (olc->GetKey(olc::Key::Y).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'Y';
        } else {
            out = 'y';
        }
    } else if (olc->GetKey(olc::Key::Z).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = 'Z';
        } else {
            out = 'z';
        }
    } else if (olc->GetKey(olc::Key::K0).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = ')';
        } else {
            out = '0';
        }
    } else if (olc->GetKey(olc::Key::K1).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '!';
        } else {
            out = '1';
        }
    } else if (olc->GetKey(olc::Key::K2).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '@';
        } else {
            out = '2';
        }
    } else if (olc->GetKey(olc::Key::K3).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '#';
        } else {
            out = '3';
        }
    } else if (olc->GetKey(olc::Key::K4).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '$';
        } else {
            out = '4';
        }
    } else if (olc->GetKey(olc::Key::K5).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '%';
        } else {
            out = '5';
        }
    } else if (olc->GetKey(olc::Key::K6).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '^';
        } else {
            out = '6';
        }
    } else if (olc->GetKey(olc::Key::K7).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '&';
        } else {
            out = '7';
        }
    } else if (olc->GetKey(olc::Key::K8).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '*';
        } else {
            out = '8';
        }
    } else if (olc->GetKey(olc::Key::K9).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '(';
        } else {
            out = '9';
        }
    } else if (olc->GetKey(olc::Key::SPACE).bHeld) {
        out = ' ';
    } else if (olc->GetKey(olc::Key::BACK).bHeld) {
        out = '\b';
    } else if (olc->GetKey(olc::Key::ESCAPE).bHeld) {
        out = '\e';
    } else if (olc->GetKey(olc::Key::ENTER).bHeld) {
        out = '\n';
    } else if (olc->GetKey(olc::Key::OEM_1).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = ':';
        } else {
            out = ';';
        }
    } else if (olc->GetKey(olc::Key::OEM_2).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '?';
        } else {
            out = '/';
        }
    } else if (olc->GetKey(olc::Key::OEM_3).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '~';
        } else {
            out = '`';
        }
    } else if (olc->GetKey(olc::Key::OEM_4).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '{';
        } else {
            out = '[';
        }
    } else if (olc->GetKey(olc::Key::OEM_5).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '|';
        } else {
            out = '\\';
        }
    } else if (olc->GetKey(olc::Key::OEM_6).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '}';
        } else {
            out = ']';
        }
    } else if (olc->GetKey(olc::Key::OEM_7).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '"';
        } else {
            out = '\'';
        }
    } else if (olc->GetKey(olc::Key::OEM_8).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '?';
        } else {
            out = '?';
        }
    } else if (olc->GetKey(olc::Key::EQUALS).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '+';
        } else {
            out = '=';
        }
    } else if (olc->GetKey(olc::Key::COMMA).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '<';
        } else {
            out = ',';
        }
    } else if (olc->GetKey(olc::Key::MINUS).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '_';
        } else {
            out = '-';
        }
    } else if (olc->GetKey(olc::Key::PERIOD).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out = '>';
        } else {
            out = '.';
        }
    }

    if (out != std::nullopt) {
        switch (data.repeat_state) {
        case RepeatData::RepeatState::KEY_UP: {
            data.repeat_state = RepeatData::RepeatState::KEY_DOWN;
            data.key_down_stamp = std::chrono::steady_clock::now();
            break;
        }
        case RepeatData::RepeatState::KEY_DOWN: {
            auto now = std::chrono::steady_clock::now();
            if (now > data.key_down_stamp + data.key_delay) {
                data.repeat_state = RepeatData::RepeatState::KEY_REPEATING;
                data.key_down_stamp = now;
            } else {
                out = std::nullopt;
            }
            break;
        }
        case RepeatData::RepeatState::KEY_REPEATING: {
            auto now = std::chrono::steady_clock::now();
            if (now > data.key_down_stamp + data.key_repeat) {
                data.key_down_stamp = now;
            } else {
                out = std::nullopt;
            }
            break;
        }
        }
    } else {
        data.repeat_state = RepeatData::RepeatState::KEY_UP;
    }

    return out;
}
