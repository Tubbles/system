#include "keyparse.h"

std::optional<msg::msg> parse(olc::PixelGameEngine *olc, RepeatData &data) {
    msg::msg out_val = 0;
    if (olc->GetKey(olc::Key::A).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'A';
        } else {
            out_val = 'a';
        }
    } else if (olc->GetKey(olc::Key::B).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'B';
        } else {
            out_val = 'b';
        }
    } else if (olc->GetKey(olc::Key::C).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'C';
        } else {
            out_val = 'c';
        }
    } else if (olc->GetKey(olc::Key::D).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'D';
        } else {
            out_val = 'd';
        }
    } else if (olc->GetKey(olc::Key::E).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'E';
        } else {
            out_val = 'e';
        }
    } else if (olc->GetKey(olc::Key::F).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'F';
        } else {
            out_val = 'f';
        }
    } else if (olc->GetKey(olc::Key::G).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'G';
        } else {
            out_val = 'g';
        }
    } else if (olc->GetKey(olc::Key::H).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'H';
        } else {
            out_val = 'h';
        }
    } else if (olc->GetKey(olc::Key::I).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'I';
        } else {
            out_val = 'i';
        }
    } else if (olc->GetKey(olc::Key::J).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'J';
        } else {
            out_val = 'j';
        }
    } else if (olc->GetKey(olc::Key::K).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'K';
        } else {
            out_val = 'k';
        }
    } else if (olc->GetKey(olc::Key::L).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'L';
        } else {
            out_val = 'l';
        }
    } else if (olc->GetKey(olc::Key::M).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'M';
        } else {
            out_val = 'm';
        }
    } else if (olc->GetKey(olc::Key::N).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'N';
        } else {
            out_val = 'n';
        }
    } else if (olc->GetKey(olc::Key::O).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'O';
        } else {
            out_val = 'o';
        }
    } else if (olc->GetKey(olc::Key::P).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'P';
        } else {
            out_val = 'p';
        }
    } else if (olc->GetKey(olc::Key::Q).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'Q';
        } else {
            out_val = 'q';
        }
    } else if (olc->GetKey(olc::Key::R).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'R';
        } else {
            out_val = 'r';
        }
    } else if (olc->GetKey(olc::Key::S).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'S';
        } else {
            out_val = 's';
        }
    } else if (olc->GetKey(olc::Key::T).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'T';
        } else {
            out_val = 't';
        }
    } else if (olc->GetKey(olc::Key::U).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'U';
        } else {
            out_val = 'u';
        }
    } else if (olc->GetKey(olc::Key::V).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'V';
        } else {
            out_val = 'v';
        }
    } else if (olc->GetKey(olc::Key::W).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'W';
        } else {
            out_val = 'w';
        }
    } else if (olc->GetKey(olc::Key::X).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'X';
        } else {
            out_val = 'x';
        }
    } else if (olc->GetKey(olc::Key::Y).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'Y';
        } else {
            out_val = 'y';
        }
    } else if (olc->GetKey(olc::Key::Z).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = 'Z';
        } else {
            out_val = 'z';
        }
    } else if (olc->GetKey(olc::Key::K0).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = ')';
        } else {
            out_val = '0';
        }
    } else if (olc->GetKey(olc::Key::K1).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '!';
        } else {
            out_val = '1';
        }
    } else if (olc->GetKey(olc::Key::K2).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '@';
        } else {
            out_val = '2';
        }
    } else if (olc->GetKey(olc::Key::K3).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '#';
        } else {
            out_val = '3';
        }
    } else if (olc->GetKey(olc::Key::K4).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '$';
        } else {
            out_val = '4';
        }
    } else if (olc->GetKey(olc::Key::K5).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '%';
        } else {
            out_val = '5';
        }
    } else if (olc->GetKey(olc::Key::K6).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '^';
        } else {
            out_val = '6';
        }
    } else if (olc->GetKey(olc::Key::K7).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '&';
        } else {
            out_val = '7';
        }
    } else if (olc->GetKey(olc::Key::K8).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '*';
        } else {
            out_val = '8';
        }
    } else if (olc->GetKey(olc::Key::K9).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '(';
        } else {
            out_val = '9';
        }
    } else if (olc->GetKey(olc::Key::SPACE).bHeld) {
        out_val = ' ';
    } else if (olc->GetKey(olc::Key::BACK).bHeld) {
        out_val = '\b';
    } else if (olc->GetKey(olc::Key::ESCAPE).bHeld) {
        out_val = '\e';
    } else if (olc->GetKey(olc::Key::ENTER).bHeld) {
        out_val = '\n';
    } else if (olc->GetKey(olc::Key::OEM_1).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = ':';
        } else {
            out_val = ';';
        }
    } else if (olc->GetKey(olc::Key::OEM_2).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '?';
        } else {
            out_val = '/';
        }
    } else if (olc->GetKey(olc::Key::OEM_3).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '~';
        } else {
            out_val = '`';
        }
    } else if (olc->GetKey(olc::Key::OEM_4).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '{';
        } else {
            out_val = '[';
        }
    } else if (olc->GetKey(olc::Key::OEM_5).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '|';
        } else {
            out_val = '\\';
        }
    } else if (olc->GetKey(olc::Key::OEM_6).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '}';
        } else {
            out_val = ']';
        }
    } else if (olc->GetKey(olc::Key::OEM_7).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '"';
        } else {
            out_val = '\'';
        }
    } else if (olc->GetKey(olc::Key::OEM_8).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '?';
        } else {
            out_val = '?';
        }
    } else if (olc->GetKey(olc::Key::EQUALS).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '+';
        } else {
            out_val = '=';
        }
    } else if (olc->GetKey(olc::Key::COMMA).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '<';
        } else {
            out_val = ',';
        }
    } else if (olc->GetKey(olc::Key::MINUS).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '_';
        } else {
            out_val = '-';
        }
    } else if (olc->GetKey(olc::Key::PERIOD).bHeld) {
        if (olc->GetKey(olc::Key::SHIFT).bHeld) {
            out_val = '>';
        } else {
            out_val = '.';
        }
    } else if (olc->GetKey(olc::Key::LEFT).bHeld) {
        out_val = msg::LEFT;
    } else if (olc->GetKey(olc::Key::DOWN).bHeld) {
        out_val = msg::DOWN;
    } else if (olc->GetKey(olc::Key::UP).bHeld) {
        out_val = msg::UP;
    } else if (olc->GetKey(olc::Key::RIGHT).bHeld) {
        out_val = msg::RIGHT;
    }

    // Check modifiers
    if (olc->GetKey(olc::Key::SHIFT).bHeld) {
        out_val += msg::SHIFT_MODIFIER;
    }
    if (olc->GetKey(olc::Key::CTRL).bHeld) {
        out_val += msg::CTRL_MODIFIER;
    }

    std::optional<msg::msg> out = std::nullopt;
    if (out_val) {
        out = out_val;
    }

    if (out != std::nullopt) {
        // Check if we quickly swapped the key since last time
        if (data.prev_key != out) {
            data.repeat_state = RepeatData::RepeatState::KEY_DOWN;
            data.key_down_stamp = std::chrono::steady_clock::now();
            data.prev_key = out;
        } else {
            switch (data.repeat_state) {
            case RepeatData::RepeatState::KEY_UP: {
                data.repeat_state = RepeatData::RepeatState::KEY_DOWN;
                data.key_down_stamp = std::chrono::steady_clock::now();
                data.prev_key = out;
                break;
            }
            case RepeatData::RepeatState::KEY_DOWN: {
                auto now = std::chrono::steady_clock::now();
                if (now > data.key_down_stamp + data.key_delay) {
                    data.repeat_state = RepeatData::RepeatState::KEY_REPEATING;
                    data.key_down_stamp = now;
                } else {
                    data.prev_key = out;
                    out = std::nullopt;
                }
                break;
            }
            case RepeatData::RepeatState::KEY_REPEATING: {
                auto now = std::chrono::steady_clock::now();
                if (now > data.key_down_stamp + data.key_repeat) {
                    data.key_down_stamp = now;
                } else {
                    data.prev_key = out;
                    out = std::nullopt;
                }
                break;
            }
            }
        }
    } else {
        data.repeat_state = RepeatData::RepeatState::KEY_UP;
    }

    return out;
}
