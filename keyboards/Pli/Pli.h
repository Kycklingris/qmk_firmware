
#pragma once

#define _x_ KC_NO

#include "quantum.h"

#define LAYOUT_ansi_iso_combo( \
K000, K001, K002, K003, K004, K005, K006,                                                 \
K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, \
K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, \
K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311,       K313, K314, \
K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, \
K500, K501, K502,       K504,       K506,       K508, K509, K510, K511, K512, K513, K514  \
) { \
{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_ }, \
{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114 }, \
{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214 }, \
{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  _x_, K313,  K314 }, \
{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414 }, \
{ K500,  K501,  K502,  _x_, K504,  _x_, K506,  _x_, K508,  K509,  K510,  K511,  K512,  K513,  K514}  \
}
