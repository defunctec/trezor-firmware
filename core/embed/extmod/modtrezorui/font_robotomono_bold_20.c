#include "font_robotomono_bold_20.h"

// first two bytes are width and height of the glyph
// third, fourth and fifth bytes are advance
// bearingX and bearingY of the horizontal metrics of the glyph
// rest is packed 4-bit glyph data

// clang-format off

/*   */ static const uint8_t Font_RobotoMono_Bold_20_glyph_32[] = { 0, 0, 12, 0, 0 };
/* ! */ static const uint8_t Font_RobotoMono_Bold_20_glyph_33[] = { 4, 15, 12, 4, 15, 127, 245, 111, 244, 111, 244, 111, 244, 111, 243, 95, 243, 95, 243, 95, 243, 79, 242, 0, 0, 0, 0, 0, 0, 62, 210, 159, 247, 78, 210 };
/* " */ static const uint8_t Font_RobotoMono_Bold_20_glyph_34[] = { 7, 5, 12, 2, 15, 79, 192, 63, 196, 251, 3, 251, 79, 160, 63, 164, 249, 3, 249, 79, 128, 63, 128 };
/* # */ static const uint8_t Font_RobotoMono_Bold_20_glyph_35[] = { 12, 15, 12, 0, 15, 0, 0, 175, 16, 237, 0, 0, 0, 222, 1, 250, 0, 0, 0, 251, 4, 247, 0, 0, 3, 248, 7, 244, 0, 13, 255, 255, 255, 255, 244, 13, 255, 255, 255, 255, 244, 3, 59, 244, 63, 211, 49, 0, 12, 240, 31, 160, 0, 0, 15, 192, 79, 112, 0, 159, 255, 255, 255, 255, 144, 159, 255, 255, 255, 255, 144, 35, 159, 115, 207, 67, 32, 0, 159, 32, 237, 0, 0, 0, 206, 1, 250, 0, 0, 0, 252, 4, 247, 0, 0 };
/* $ */ static const uint8_t Font_RobotoMono_Bold_20_glyph_36[] = { 11, 19, 12, 1, 17, 0, 0, 79, 80, 0, 0, 0, 4, 245, 0, 0, 0, 42, 255, 233, 16, 0, 79, 255, 255, 254, 32, 13, 254, 48, 111, 250, 2, 255, 128, 0, 207, 240, 47, 250, 0, 6, 153, 0, 255, 247, 0, 0, 0, 7, 255, 254, 113, 0, 0, 7, 255, 255, 229, 0, 0, 1, 142, 255, 245, 0, 0, 0, 8, 255, 224, 122, 144, 0, 11, 255, 26, 255, 32, 0, 175, 241, 95, 252, 32, 79, 253, 0, 207, 255, 255, 255, 64, 0, 142, 255, 252, 64, 0, 0, 7, 242, 0, 0, 0, 0, 127, 16, 0, 0 };
/* % */ static const uint8_t Font_RobotoMono_Bold_20_glyph_37[] = { 12, 15, 12, 0, 15, 7, 222, 144, 0, 0, 0, 79, 255, 248, 0, 0, 0, 159, 134, 253, 0, 80, 0, 175, 32, 238, 6, 244, 0, 143, 82, 252, 14, 176, 0, 63, 255, 247, 143, 32, 0, 5, 188, 114, 248, 0, 0, 0, 0, 11, 225, 33, 0, 0, 0, 79, 125, 255, 160, 0, 0, 220, 175, 255, 245, 0, 7, 243, 223, 38, 249, 0, 31, 160, 238, 3, 250, 0, 4, 16, 223, 20, 248, 0, 0, 0, 143, 239, 244, 0, 0, 0, 9, 238, 112 };
/* & */ static const uint8_t Font_RobotoMono_Bold_20_glyph_38[] = { 13, 15, 12, 0, 15, 0, 3, 207, 231, 0, 0, 0, 3, 255, 255, 247, 0, 0, 0, 191, 229, 175, 224, 0, 0, 14, 249, 3, 255, 16, 0, 0, 239, 160, 111, 224, 0, 0, 10, 255, 127, 246, 0, 0, 0, 63, 255, 247, 0, 0, 0, 1, 239, 249, 0, 0, 0, 2, 239, 255, 242, 10, 250, 0, 207, 229, 255, 208, 223, 128, 47, 248, 5, 255, 207, 244, 3, 255, 128, 8, 255, 253, 0, 31, 255, 100, 143, 255, 96, 0, 127, 255, 255, 255, 254, 16, 0, 76, 254, 199, 111, 251, 0 };
/* ' */ static const uint8_t Font_RobotoMono_Bold_20_glyph_39[] = { 3, 5, 12, 4, 15, 143, 136, 248, 143, 120, 246, 143, 80 };
/* ( */ static const uint8_t Font_RobotoMono_Bold_20_glyph_40[] = { 6, 21, 12, 3, 16, 0, 0, 84, 0, 7, 249, 0, 95, 209, 0, 239, 48, 7, 251, 0, 13, 245, 0, 47, 241, 0, 111, 224, 0, 127, 192, 0, 159, 176, 0, 159, 176, 0, 143, 176, 0, 127, 208, 0, 79, 240, 0, 15, 242, 0, 11, 247, 0, 4, 253, 0, 0, 207, 96, 0, 46, 244, 0, 3, 233, 0, 0, 18 };
/* ) */ static const uint8_t Font_RobotoMono_Bold_20_glyph_41[] = { 6, 21, 12, 3, 16, 99, 0, 0, 207, 80, 0, 46, 243, 0, 6, 253, 0, 0, 239, 80, 0, 143, 192, 0, 79, 241, 0, 31, 245, 0, 15, 247, 0, 14, 248, 0, 13, 249, 0, 14, 248, 0, 15, 246, 0, 31, 243, 0, 95, 240, 0, 175, 160, 1, 255, 48, 9, 250, 0, 111, 209, 0, 189, 16, 0, 32, 0, 0 };
/* * */ static const uint8_t Font_RobotoMono_Bold_20_glyph_42[] = { 11, 11, 12, 1, 12, 0, 0, 143, 128, 0, 0, 0, 6, 247, 0, 0, 2, 0, 95, 96, 1, 1, 251, 68, 244, 58, 241, 79, 255, 239, 223, 255, 80, 3, 126, 254, 132, 16, 0, 6, 254, 243, 0, 0, 3, 253, 31, 225, 0, 1, 239, 64, 127, 192, 0, 8, 176, 0, 231, 0, 0, 0, 0, 0, 0, 0 };
/* + */ static const uint8_t Font_RobotoMono_Bold_20_glyph_43[] = { 11, 11, 12, 0, 12, 0, 0, 127, 242, 0, 0, 0, 7, 255, 32, 0, 0, 0, 127, 242, 0, 0, 0, 7, 255, 32, 0, 3, 51, 159, 245, 51, 32, 255, 255, 255, 255, 251, 15, 255, 255, 255, 255, 176, 0, 7, 255, 32, 0, 0, 0, 127, 242, 0, 0, 0, 7, 255, 32, 0, 0, 0, 127, 242, 0, 0 };
/* , */ static const uint8_t Font_RobotoMono_Bold_20_glyph_44[] = { 4, 7, 12, 3, 2, 9, 255, 9, 255, 9, 254, 11, 251, 15, 245, 79, 192, 3, 16 };
/* - */ static const uint8_t Font_RobotoMono_Bold_20_glyph_45[] = { 9, 3, 12, 2, 8, 3, 51, 51, 51, 52, 255, 255, 255, 254, 79, 255, 255, 255, 224 };
/* . */ static const uint8_t Font_RobotoMono_Bold_20_glyph_46[] = { 4, 4, 12, 4, 4, 78, 228, 207, 252, 207, 252, 78, 228 };
/* / */ static const uint8_t Font_RobotoMono_Bold_20_glyph_47[] = { 8, 16, 12, 2, 15, 0, 0, 11, 253, 0, 0, 31, 247, 0, 0, 111, 242, 0, 0, 191, 192, 0, 1, 255, 112, 0, 6, 255, 16, 0, 12, 252, 0, 0, 31, 246, 0, 0, 127, 241, 0, 0, 207, 176, 0, 2, 255, 96, 0, 7, 255, 16, 0, 13, 251, 0, 0, 47, 245, 0, 0, 143, 240, 0, 0, 87, 80, 0, 0 };
/* 0 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_48[] = { 10, 15, 12, 1, 15, 0, 76, 255, 196, 0, 5, 255, 255, 255, 80, 15, 254, 85, 239, 240, 95, 246, 0, 111, 245, 143, 242, 0, 47, 248, 159, 241, 0, 143, 249, 175, 241, 27, 255, 250, 175, 245, 239, 127, 250, 175, 255, 210, 31, 250, 159, 250, 0, 31, 249, 143, 242, 0, 47, 248, 95, 246, 0, 111, 245, 15, 254, 85, 239, 240, 5, 255, 255, 255, 96, 0, 76, 255, 197, 0 };
/* 1 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_49[] = { 8, 15, 12, 1, 15, 0, 0, 0, 80, 0, 4, 175, 240, 24, 239, 255, 240, 95, 255, 255, 240, 93, 130, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240, 0, 0, 191, 240 };
/* 2 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_50[] = { 11, 15, 12, 0, 15, 0, 24, 223, 235, 48, 0, 29, 255, 255, 255, 64, 11, 255, 132, 127, 253, 2, 255, 160, 0, 175, 241, 60, 197, 0, 8, 255, 32, 0, 0, 0, 207, 240, 0, 0, 0, 95, 249, 0, 0, 0, 47, 254, 16, 0, 0, 29, 255, 64, 0, 0, 12, 255, 96, 0, 0, 11, 255, 112, 0, 0, 9, 255, 144, 0, 0, 7, 255, 211, 51, 51, 32, 255, 255, 255, 255, 250, 15, 255, 255, 255, 255, 160 };
/* 3 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_51[] = { 11, 15, 12, 0, 15, 0, 7, 223, 252, 80, 0, 29, 255, 255, 255, 144, 9, 255, 164, 94, 255, 48, 189, 192, 0, 95, 246, 0, 0, 0, 4, 255, 96, 0, 0, 2, 207, 241, 0, 0, 239, 255, 228, 0, 0, 14, 255, 253, 48, 0, 0, 51, 110, 255, 32, 0, 0, 0, 63, 248, 4, 66, 0, 0, 255, 160, 255, 208, 0, 63, 249, 10, 255, 164, 93, 255, 64, 30, 255, 255, 255, 144, 0, 24, 223, 251, 80, 0 };
/* 4 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_52[] = { 11, 15, 12, 0, 15, 0, 0, 0, 191, 245, 0, 0, 0, 95, 255, 80, 0, 0, 13, 255, 245, 0, 0, 7, 255, 255, 80, 0, 1, 255, 207, 245, 0, 0, 175, 198, 255, 80, 0, 63, 243, 111, 245, 0, 12, 249, 6, 255, 80, 6, 254, 16, 111, 245, 0, 239, 147, 56, 255, 115, 111, 255, 255, 255, 255, 245, 255, 255, 255, 255, 255, 0, 0, 0, 111, 245, 0, 0, 0, 6, 255, 80, 0, 0, 0, 111, 245, 0 };
/* 5 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_53[] = { 10, 15, 12, 1, 15, 11, 255, 255, 255, 243, 13, 255, 255, 255, 243, 15, 250, 51, 51, 48, 15, 246, 0, 0, 0, 47, 245, 0, 0, 0, 79, 251, 223, 215, 0, 111, 255, 255, 255, 160, 76, 247, 71, 239, 243, 0, 0, 0, 95, 248, 0, 0, 0, 31, 250, 52, 48, 0, 31, 250, 207, 241, 0, 95, 248, 111, 252, 85, 239, 242, 10, 255, 255, 255, 112, 0, 108, 255, 197, 0 };
/* 6 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_54[] = { 10, 15, 12, 1, 15, 0, 1, 140, 233, 0, 0, 95, 255, 249, 0, 4, 255, 249, 82, 0, 14, 254, 32, 0, 0, 95, 245, 0, 0, 0, 175, 244, 207, 232, 0, 223, 255, 255, 255, 160, 239, 252, 70, 239, 244, 255, 208, 0, 95, 248, 255, 192, 0, 15, 250, 223, 208, 0, 15, 250, 159, 242, 0, 95, 248, 63, 253, 86, 239, 242, 7, 255, 255, 255, 96, 0, 76, 255, 196, 0 };
/* 7 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_55[] = { 11, 15, 12, 0, 15, 95, 255, 255, 255, 255, 165, 255, 255, 255, 255, 250, 19, 51, 51, 56, 255, 64, 0, 0, 0, 191, 208, 0, 0, 0, 47, 247, 0, 0, 0, 9, 255, 16, 0, 0, 1, 255, 144, 0, 0, 0, 127, 243, 0, 0, 0, 14, 252, 0, 0, 0, 5, 255, 96, 0, 0, 0, 207, 224, 0, 0, 0, 63, 249, 0, 0, 0, 10, 255, 32, 0, 0, 1, 255, 176, 0, 0, 0, 143, 245, 0, 0, 0 };
/* 8 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_56[] = { 10, 15, 12, 1, 15, 0, 141, 255, 180, 0, 11, 255, 255, 255, 96, 95, 252, 70, 255, 240, 159, 243, 0, 143, 244, 143, 242, 0, 127, 243, 63, 250, 18, 223, 224, 7, 255, 255, 254, 48, 5, 255, 255, 252, 32, 79, 251, 70, 239, 224, 191, 240, 0, 95, 246, 239, 208, 0, 47, 249, 223, 240, 0, 95, 248, 159, 251, 70, 239, 243, 29, 255, 255, 255, 144, 0, 125, 255, 196, 0 };
/* 9 */ static const uint8_t Font_RobotoMono_Bold_20_glyph_57[] = { 11, 15, 12, 0, 15, 0, 7, 223, 233, 16, 0, 11, 255, 255, 254, 16, 6, 255, 197, 143, 250, 0, 207, 241, 0, 175, 241, 15, 251, 0, 5, 255, 80, 255, 176, 0, 79, 246, 14, 254, 0, 4, 255, 112, 175, 248, 18, 223, 246, 2, 255, 255, 255, 255, 80, 4, 239, 254, 191, 242, 0, 0, 35, 10, 254, 0, 0, 0, 4, 255, 112, 0, 3, 89, 255, 208, 0, 0, 255, 255, 193, 0, 0, 14, 235, 80, 0, 0 };
/* : */ static const uint8_t Font_RobotoMono_Bold_20_glyph_58[] = { 4, 12, 12, 4, 12, 78, 228, 207, 252, 207, 252, 78, 228, 0, 0, 0, 0, 0, 0, 0, 0, 78, 228, 207, 252, 207, 252, 78, 228 };
/* ; */ static const uint8_t Font_RobotoMono_Bold_20_glyph_59[] = { 5, 17, 12, 4, 12, 4, 238, 64, 207, 252, 12, 255, 192, 78, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 255, 0, 159, 240, 9, 254, 0, 191, 176, 15, 245, 4, 252, 0, 3, 16, 0 };
/* < */ static const uint8_t Font_RobotoMono_Bold_20_glyph_60[] = { 10, 10, 12, 1, 11, 0, 0, 0, 1, 114, 0, 0, 3, 175, 242, 0, 6, 223, 255, 242, 41, 255, 255, 198, 16, 127, 253, 113, 0, 0, 127, 254, 148, 0, 0, 6, 223, 255, 233, 64, 0, 3, 175, 255, 242, 0, 0, 1, 126, 242, 0, 0, 0, 0, 81 };
/* = */ static const uint8_t Font_RobotoMono_Bold_20_glyph_61[] = { 10, 7, 12, 1, 10, 19, 51, 51, 51, 50, 127, 255, 255, 255, 252, 127, 255, 255, 255, 252, 0, 0, 0, 0, 0, 19, 51, 51, 51, 50, 127, 255, 255, 255, 252, 127, 255, 255, 255, 252 };
/* > */ static const uint8_t Font_RobotoMono_Bold_20_glyph_62[] = { 10, 10, 12, 1, 11, 70, 0, 0, 0, 0, 111, 249, 32, 0, 0, 111, 255, 252, 80, 0, 2, 125, 255, 254, 129, 0, 0, 39, 223, 245, 0, 0, 90, 255, 245, 5, 175, 255, 252, 80, 111, 255, 249, 32, 0, 111, 214, 0, 0, 0, 51, 0, 0, 0, 0 };
/* ? */ static const uint8_t Font_RobotoMono_Bold_20_glyph_63[] = { 10, 15, 12, 1, 15, 0, 92, 239, 217, 16, 8, 255, 255, 255, 225, 47, 254, 100, 191, 248, 111, 246, 0, 31, 251, 0, 0, 0, 31, 250, 0, 0, 0, 143, 246, 0, 0, 6, 255, 192, 0, 0, 95, 253, 16, 0, 0, 239, 209, 0, 0, 1, 255, 96, 0, 0, 0, 136, 32, 0, 0, 0, 0, 0, 0, 0, 2, 222, 48, 0, 0, 7, 255, 144, 0, 0, 2, 222, 64, 0 };
/* @ */ static const uint8_t Font_RobotoMono_Bold_20_glyph_64[] = { 12, 15, 12, 0, 15, 0, 1, 141, 253, 128, 0, 0, 46, 255, 223, 253, 0, 0, 223, 96, 0, 143, 144, 8, 245, 0, 0, 10, 240, 14, 192, 27, 253, 68, 243, 63, 96, 223, 239, 162, 246, 127, 37, 250, 14, 145, 246, 143, 25, 242, 15, 129, 245, 159, 12, 240, 31, 98, 243, 143, 28, 224, 47, 84, 240, 111, 89, 243, 111, 90, 160, 31, 178, 239, 205, 253, 16, 10, 249, 17, 0, 32, 0, 1, 223, 254, 223, 80, 0, 0, 8, 223, 234, 32, 0 };
/* A */ static const uint8_t Font_RobotoMono_Bold_20_glyph_65[] = { 12, 15, 12, 0, 15, 0, 0, 63, 249, 0, 0, 0, 0, 143, 254, 0, 0, 0, 0, 223, 255, 32, 0, 0, 2, 255, 255, 112, 0, 0, 7, 255, 207, 192, 0, 0, 12, 252, 127, 241, 0, 0, 31, 248, 63, 246, 0, 0, 111, 243, 14, 251, 0, 0, 191, 240, 10, 255, 0, 0, 255, 214, 106, 255, 80, 5, 255, 255, 255, 255, 160, 10, 255, 255, 255, 255, 224, 14, 253, 0, 0, 159, 243, 79, 249, 0, 0, 95, 248, 159, 244, 0, 0, 15, 253 };
/* B */ static const uint8_t Font_RobotoMono_Bold_20_glyph_66[] = { 11, 15, 12, 1, 15, 191, 255, 255, 217, 32, 11, 255, 255, 255, 255, 48, 191, 243, 52, 159, 252, 11, 255, 0, 0, 207, 241, 191, 240, 0, 9, 255, 43, 255, 0, 0, 207, 240, 191, 243, 52, 175, 248, 11, 255, 255, 255, 249, 0, 191, 255, 255, 255, 246, 11, 255, 0, 2, 207, 242, 191, 240, 0, 4, 255, 123, 255, 0, 0, 111, 247, 191, 243, 52, 110, 255, 43, 255, 255, 255, 255, 144, 191, 255, 255, 235, 80, 0 };
/* C */ static const uint8_t Font_RobotoMono_Bold_20_glyph_67[] = { 12, 15, 12, 0, 15, 0, 4, 191, 253, 112, 0, 0, 127, 255, 255, 252, 0, 3, 255, 213, 75, 255, 128, 11, 255, 32, 0, 239, 224, 15, 252, 0, 0, 158, 225, 47, 250, 0, 0, 0, 0, 63, 249, 0, 0, 0, 0, 63, 249, 0, 0, 0, 0, 63, 249, 0, 0, 0, 0, 47, 249, 0, 0, 0, 0, 15, 251, 0, 0, 124, 193, 12, 255, 16, 0, 223, 224, 4, 255, 196, 75, 255, 128, 0, 159, 255, 255, 252, 0, 0, 5, 207, 252, 112, 0 };
/* D */ static const uint8_t Font_RobotoMono_Bold_20_glyph_68[] = { 11, 15, 12, 1, 15, 207, 255, 252, 96, 0, 12, 255, 255, 255, 209, 0, 207, 243, 74, 255, 192, 12, 255, 0, 9, 255, 96, 207, 240, 0, 31, 252, 12, 255, 0, 0, 223, 240, 207, 240, 0, 11, 255, 28, 255, 0, 0, 175, 242, 207, 240, 0, 11, 255, 28, 255, 0, 0, 223, 240, 207, 240, 0, 31, 252, 12, 255, 0, 9, 255, 96, 207, 243, 74, 255, 208, 12, 255, 255, 255, 210, 0, 207, 255, 252, 112, 0, 0 };
/* E */ static const uint8_t Font_RobotoMono_Bold_20_glyph_69[] = { 11, 15, 12, 1, 15, 159, 255, 255, 255, 255, 9, 255, 255, 255, 255, 240, 159, 246, 51, 51, 51, 9, 255, 48, 0, 0, 0, 159, 243, 0, 0, 0, 9, 255, 48, 0, 0, 0, 159, 246, 51, 51, 48, 9, 255, 255, 255, 255, 0, 159, 255, 255, 255, 240, 9, 255, 48, 0, 0, 0, 159, 243, 0, 0, 0, 9, 255, 48, 0, 0, 0, 159, 246, 51, 51, 51, 9, 255, 255, 255, 255, 240, 159, 255, 255, 255, 255, 0 };
/* F */ static const uint8_t Font_RobotoMono_Bold_20_glyph_70[] = { 11, 15, 12, 1, 15, 143, 255, 255, 255, 255, 24, 255, 255, 255, 255, 241, 143, 246, 51, 51, 51, 8, 255, 48, 0, 0, 0, 143, 243, 0, 0, 0, 8, 255, 48, 0, 0, 0, 143, 246, 51, 51, 49, 8, 255, 255, 255, 255, 64, 143, 255, 255, 255, 244, 8, 255, 48, 0, 0, 0, 143, 243, 0, 0, 0, 8, 255, 48, 0, 0, 0, 143, 243, 0, 0, 0, 8, 255, 48, 0, 0, 0, 143, 243, 0, 0, 0, 0 };
/* G */ static const uint8_t Font_RobotoMono_Bold_20_glyph_71[] = { 12, 15, 12, 0, 15, 0, 4, 191, 253, 128, 0, 0, 111, 255, 255, 253, 16, 3, 255, 229, 74, 255, 128, 10, 255, 64, 0, 223, 208, 14, 253, 0, 0, 53, 80, 31, 251, 0, 0, 0, 0, 47, 249, 0, 0, 0, 0, 47, 249, 0, 255, 255, 240, 47, 249, 0, 255, 255, 240, 31, 251, 0, 51, 207, 240, 15, 253, 0, 0, 191, 240, 10, 255, 48, 0, 191, 240, 3, 255, 230, 71, 255, 240, 0, 127, 255, 255, 255, 144, 0, 4, 191, 253, 164, 0 };
/* H */ static const uint8_t Font_RobotoMono_Bold_20_glyph_72[] = { 10, 15, 12, 1, 15, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 243, 51, 79, 250, 207, 255, 255, 255, 250, 207, 255, 255, 255, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250, 207, 224, 0, 15, 250 };
/* I */ static const uint8_t Font_RobotoMono_Bold_20_glyph_73[] = { 10, 15, 12, 1, 15, 31, 255, 255, 255, 241, 31, 255, 255, 255, 241, 3, 56, 255, 115, 48, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 0, 6, 255, 80, 0, 3, 56, 255, 115, 48, 31, 255, 255, 255, 241, 31, 255, 255, 255, 241 };
/* J */ static const uint8_t Font_RobotoMono_Bold_20_glyph_74[] = { 10, 15, 12, 1, 15, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 0, 0, 0, 15, 251, 120, 96, 0, 15, 251, 223, 240, 0, 79, 249, 143, 251, 70, 239, 243, 29, 255, 255, 255, 112, 0, 141, 255, 180, 0 };
/* K */ static const uint8_t Font_RobotoMono_Bold_20_glyph_75[] = { 12, 15, 12, 1, 15, 191, 240, 0, 9, 255, 192, 191, 240, 0, 79, 254, 16, 191, 240, 1, 239, 245, 0, 191, 240, 10, 255, 144, 0, 191, 240, 95, 253, 0, 0, 191, 241, 239, 242, 0, 0, 191, 251, 255, 128, 0, 0, 191, 255, 255, 208, 0, 0, 191, 255, 255, 246, 0, 0, 191, 254, 79, 255, 16, 0, 191, 242, 9, 255, 144, 0, 191, 240, 1, 239, 243, 0, 191, 240, 0, 111, 252, 0, 191, 240, 0, 13, 255, 96, 191, 240, 0, 4, 255, 225 };
/* L */ static const uint8_t Font_RobotoMono_Bold_20_glyph_76[] = { 10, 15, 12, 1, 15, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 243, 0, 0, 0, 143, 246, 68, 68, 67, 143, 255, 255, 255, 254, 143, 255, 255, 255, 254 };
/* M */ static const uint8_t Font_RobotoMono_Bold_20_glyph_77[] = { 10, 15, 12, 1, 15, 207, 252, 0, 159, 255, 207, 255, 0, 239, 255, 207, 255, 50, 255, 255, 207, 255, 118, 255, 255, 207, 223, 187, 251, 255, 207, 174, 255, 248, 255, 207, 186, 255, 168, 255, 207, 182, 255, 104, 255, 207, 177, 255, 24, 255, 207, 176, 221, 9, 255, 207, 192, 0, 9, 255, 207, 192, 0, 9, 255, 207, 192, 0, 9, 255, 207, 192, 0, 9, 255, 207, 192, 0, 9, 255 };
/* N */ static const uint8_t Font_RobotoMono_Bold_20_glyph_78[] = { 10, 15, 12, 1, 15, 207, 242, 0, 31, 250, 207, 249, 0, 31, 250, 207, 255, 0, 31, 250, 207, 255, 96, 31, 250, 207, 255, 192, 31, 250, 207, 254, 243, 31, 250, 207, 248, 249, 31, 250, 207, 242, 255, 47, 250, 207, 240, 191, 143, 250, 207, 240, 95, 239, 250, 207, 240, 14, 255, 250, 207, 240, 8, 255, 250, 207, 240, 1, 255, 250, 207, 240, 0, 191, 250, 207, 240, 0, 79, 250 };
/* O */ static const uint8_t Font_RobotoMono_Bold_20_glyph_79[] = { 12, 15, 12, 0, 15, 0, 5, 207, 251, 64, 0, 0, 143, 255, 255, 247, 0, 4, 255, 196, 94, 255, 48, 11, 255, 16, 3, 255, 176, 15, 251, 0, 0, 207, 240, 47, 249, 0, 0, 175, 242, 63, 249, 0, 0, 159, 243, 63, 249, 0, 0, 159, 243, 63, 249, 0, 0, 159, 243, 47, 249, 0, 0, 175, 242, 15, 252, 0, 0, 223, 240, 11, 255, 16, 3, 255, 176, 4, 255, 196, 94, 255, 48, 0, 159, 255, 255, 247, 0, 0, 5, 207, 251, 64, 0 };
/* P */ static const uint8_t Font_RobotoMono_Bold_20_glyph_80[] = { 11, 15, 12, 1, 15, 143, 255, 255, 217, 16, 8, 255, 255, 255, 254, 32, 143, 246, 52, 175, 252, 8, 255, 48, 0, 207, 242, 143, 243, 0, 7, 255, 88, 255, 48, 0, 111, 245, 143, 243, 0, 11, 255, 56, 255, 99, 73, 255, 192, 143, 255, 255, 255, 226, 8, 255, 255, 253, 145, 0, 143, 243, 0, 0, 0, 8, 255, 48, 0, 0, 0, 143, 243, 0, 0, 0, 8, 255, 48, 0, 0, 0, 143, 243, 0, 0, 0, 0 };
/* Q */ static const uint8_t Font_RobotoMono_Bold_20_glyph_81[] = { 12, 18, 12, 0, 15, 0, 5, 207, 251, 64, 0, 0, 127, 255, 255, 248, 0, 3, 255, 213, 93, 255, 64, 10, 255, 32, 1, 255, 192, 15, 252, 0, 0, 191, 240, 31, 250, 0, 0, 159, 243, 47, 249, 0, 0, 143, 244, 47, 249, 0, 0, 143, 244, 47, 249, 0, 0, 143, 244, 47, 250, 0, 0, 143, 244, 15, 252, 0, 0, 191, 242, 11, 255, 32, 1, 255, 208, 4, 255, 213, 93, 255, 96, 0, 143, 255, 255, 252, 0, 0, 5, 207, 254, 255, 112, 0, 0, 0, 1, 207, 248, 0, 0, 0, 0, 12, 226, 0, 0, 0, 0, 0, 16 };
/* R */ static const uint8_t Font_RobotoMono_Bold_20_glyph_82[] = { 11, 15, 12, 1, 15, 191, 255, 255, 217, 16, 11, 255, 255, 255, 255, 48, 191, 244, 52, 175, 252, 11, 255, 0, 0, 207, 242, 191, 240, 0, 8, 255, 59, 255, 0, 0, 191, 241, 191, 240, 1, 111, 252, 11, 255, 255, 255, 254, 32, 191, 255, 255, 253, 16, 11, 255, 67, 207, 241, 0, 191, 240, 4, 255, 144, 11, 255, 0, 13, 255, 16, 191, 240, 0, 111, 248, 11, 255, 0, 0, 239, 240, 191, 240, 0, 7, 255, 112 };
/* S */ static const uint8_t Font_RobotoMono_Bold_20_glyph_83[] = { 12, 15, 12, 0, 15, 0, 4, 190, 253, 145, 0, 0, 175, 255, 255, 254, 48, 5, 255, 213, 72, 255, 208, 10, 255, 32, 0, 159, 243, 10, 255, 16, 0, 56, 130, 6, 255, 195, 0, 0, 0, 0, 191, 255, 215, 16, 0, 0, 8, 255, 255, 246, 0, 0, 0, 23, 223, 255, 128, 0, 0, 0, 4, 239, 241, 11, 183, 0, 0, 127, 245, 14, 253, 0, 0, 127, 245, 8, 255, 197, 71, 255, 241, 0, 191, 255, 255, 255, 96, 0, 5, 190, 254, 163, 0 };
/* T */ static const uint8_t Font_RobotoMono_Bold_20_glyph_84[] = { 12, 15, 12, 0, 15, 191, 255, 255, 255, 255, 251, 191, 255, 255, 255, 255, 251, 35, 51, 143, 247, 51, 50, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0, 0, 0, 111, 245, 0, 0 };
/* U */ static const uint8_t Font_RobotoMono_Bold_20_glyph_85[] = { 10, 15, 12, 1, 15, 207, 240, 0, 15, 251, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 207, 240, 0, 15, 252, 191, 240, 0, 15, 251, 143, 244, 0, 79, 248, 63, 253, 85, 239, 243, 9, 255, 255, 255, 144, 0, 108, 255, 198, 0 };
/* V */ static const uint8_t Font_RobotoMono_Bold_20_glyph_86[] = { 12, 15, 12, 0, 15, 159, 247, 0, 0, 127, 248, 79, 251, 0, 0, 191, 244, 15, 255, 0, 0, 255, 240, 11, 255, 48, 3, 255, 176, 6, 255, 112, 8, 255, 96, 2, 255, 192, 12, 255, 16, 0, 223, 240, 15, 253, 0, 0, 143, 244, 79, 248, 0, 0, 79, 248, 143, 244, 0, 0, 15, 252, 223, 240, 0, 0, 11, 255, 255, 160, 0, 0, 6, 255, 255, 96, 0, 0, 2, 255, 255, 16, 0, 0, 0, 223, 253, 0, 0, 0, 0, 143, 248, 0, 0 };
/* W */ static const uint8_t Font_RobotoMono_Bold_20_glyph_87[] = { 12, 15, 12, 0, 15, 191, 208, 31, 240, 12, 251, 143, 224, 63, 242, 14, 249, 111, 240, 95, 245, 15, 247, 79, 242, 127, 247, 47, 245, 47, 244, 159, 250, 79, 243, 15, 246, 207, 252, 111, 240, 14, 247, 238, 254, 143, 224, 12, 250, 252, 223, 191, 192, 10, 254, 250, 175, 255, 160, 8, 255, 247, 143, 255, 128, 6, 255, 245, 95, 255, 96, 4, 255, 243, 63, 255, 64, 2, 255, 240, 15, 255, 32, 0, 255, 224, 14, 255, 0, 0, 223, 192, 11, 254, 0 };
/* X */ static const uint8_t Font_RobotoMono_Bold_20_glyph_88[] = { 12, 15, 12, 0, 15, 95, 253, 0, 0, 175, 249, 12, 255, 80, 2, 255, 241, 4, 255, 208, 9, 255, 128, 0, 191, 245, 47, 254, 0, 0, 63, 252, 159, 246, 0, 0, 10, 255, 255, 208, 0, 0, 2, 255, 255, 80, 0, 0, 0, 191, 255, 0, 0, 0, 2, 255, 255, 96, 0, 0, 11, 255, 239, 224, 0, 0, 79, 250, 111, 247, 0, 0, 207, 243, 14, 255, 16, 5, 255, 176, 7, 255, 144, 13, 255, 48, 0, 239, 242, 111, 252, 0, 0, 143, 250 };
/* Y */ static const uint8_t Font_RobotoMono_Bold_20_glyph_89[] = { 12, 15, 12, 0, 15, 127, 248, 0, 0, 79, 251, 15, 254, 0, 0, 191, 244, 8, 255, 96, 2, 255, 208, 1, 255, 208, 8, 255, 80, 0, 175, 244, 15, 254, 0, 0, 47, 251, 111, 247, 0, 0, 11, 255, 239, 240, 0, 0, 4, 255, 255, 128, 0, 0, 0, 207, 255, 16, 0, 0, 0, 95, 250, 0, 0, 0, 0, 79, 247, 0, 0, 0, 0, 79, 247, 0, 0, 0, 0, 79, 247, 0, 0, 0, 0, 79, 247, 0, 0, 0, 0, 79, 247, 0, 0 };
/* Z */ static const uint8_t Font_RobotoMono_Bold_20_glyph_90[] = { 12, 15, 12, 0, 15, 31, 255, 255, 255, 255, 241, 31, 255, 255, 255, 255, 241, 3, 51, 51, 57, 255, 128, 0, 0, 0, 30, 254, 0, 0, 0, 0, 175, 245, 0, 0, 0, 4, 255, 176, 0, 0, 0, 13, 255, 16, 0, 0, 0, 143, 247, 0, 0, 0, 2, 255, 208, 0, 0, 0, 12, 255, 48, 0, 0, 0, 111, 249, 0, 0, 0, 1, 239, 225, 0, 0, 0, 9, 255, 147, 51, 51, 48, 31, 255, 255, 255, 255, 244, 47, 255, 255, 255, 255, 244 };
/* [ */ static const uint8_t Font_RobotoMono_Bold_20_glyph_91[] = { 6, 21, 12, 3, 18, 3, 51, 48, 31, 255, 244, 31, 255, 244, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 249, 0, 31, 251, 48, 31, 255, 244, 31, 255, 244 };
/* \ */ static const uint8_t Font_RobotoMono_Bold_20_glyph_92[] = { 9, 16, 12, 2, 15, 127, 241, 0, 0, 2, 255, 96, 0, 0, 12, 251, 0, 0, 0, 127, 241, 0, 0, 1, 255, 96, 0, 0, 12, 252, 0, 0, 0, 111, 241, 0, 0, 1, 255, 112, 0, 0, 11, 252, 0, 0, 0, 111, 242, 0, 0, 1, 255, 112, 0, 0, 11, 253, 0, 0, 0, 95, 242, 0, 0, 0, 255, 128, 0, 0, 10, 253, 0, 0, 0, 55, 112 };
/* ] */ static const uint8_t Font_RobotoMono_Bold_20_glyph_93[] = { 6, 21, 12, 3, 18, 3, 51, 49, 31, 255, 244, 31, 255, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 0, 111, 244, 3, 143, 244, 31, 255, 244, 31, 255, 244 };
/* ^ */ static const uint8_t Font_RobotoMono_Bold_20_glyph_94[] = { 9, 8, 12, 2, 15, 0, 15, 245, 0, 0, 6, 255, 192, 0, 0, 223, 223, 48, 0, 79, 199, 249, 0, 10, 246, 31, 241, 1, 255, 16, 175, 112, 143, 160, 4, 253, 6, 114, 0, 7, 113 };
/* _ */ static const uint8_t Font_RobotoMono_Bold_20_glyph_95[] = { 10, 3, 12, 1, 1, 35, 51, 51, 51, 49, 143, 255, 255, 255, 245, 143, 255, 255, 255, 245 };
/* ` */ static const uint8_t Font_RobotoMono_Bold_20_glyph_96[] = { 5, 3, 12, 4, 15, 111, 246, 0, 79, 243, 0, 35, 32 };
/* a */ static const uint8_t Font_RobotoMono_Bold_20_glyph_97[] = { 10, 11, 12, 1, 11, 1, 141, 254, 180, 0, 30, 255, 255, 255, 128, 143, 249, 69, 239, 241, 35, 48, 0, 127, 244, 2, 157, 255, 255, 245, 47, 255, 255, 255, 245, 175, 250, 67, 143, 245, 223, 224, 0, 111, 245, 207, 247, 71, 239, 245, 79, 255, 255, 255, 245, 4, 207, 234, 79, 249 };
/* b */ static const uint8_t Font_RobotoMono_Bold_20_glyph_98[] = { 10, 15, 12, 1, 15, 159, 242, 0, 0, 0, 159, 242, 0, 0, 0, 159, 242, 0, 0, 0, 159, 242, 0, 0, 0, 159, 245, 207, 233, 16, 159, 255, 255, 255, 192, 159, 253, 85, 223, 245, 159, 243, 0, 47, 250, 159, 242, 0, 14, 253, 159, 242, 0, 13, 254, 159, 242, 0, 14, 253, 159, 243, 0, 47, 251, 159, 253, 85, 207, 246, 159, 255, 255, 255, 192, 159, 227, 207, 233, 16 };
/* c */ static const uint8_t Font_RobotoMono_Bold_20_glyph_99[] = { 10, 11, 12, 1, 11, 0, 92, 255, 197, 0, 7, 255, 255, 255, 160, 63, 253, 85, 207, 244, 159, 243, 0, 31, 248, 207, 224, 0, 1, 16, 223, 208, 0, 0, 0, 207, 224, 0, 0, 0, 159, 243, 0, 29, 231, 63, 253, 84, 207, 244, 8, 255, 255, 255, 160, 0, 92, 255, 197, 0 };
/* d */ static const uint8_t Font_RobotoMono_Bold_20_glyph_100[] = { 10, 15, 12, 1, 15, 0, 0, 0, 47, 248, 0, 0, 0, 47, 248, 0, 0, 0, 47, 248, 0, 0, 0, 47, 248, 0, 158, 251, 95, 248, 12, 255, 255, 255, 248, 95, 253, 85, 223, 248, 175, 242, 0, 63, 248, 223, 224, 0, 47, 248, 239, 208, 0, 47, 248, 223, 224, 0, 47, 248, 175, 242, 0, 63, 248, 95, 253, 85, 223, 248, 11, 255, 255, 255, 248, 0, 158, 252, 47, 248 };
/* e */ static const uint8_t Font_RobotoMono_Bold_20_glyph_101[] = { 11, 11, 12, 1, 11, 0, 59, 239, 215, 0, 0, 111, 255, 255, 252, 0, 47, 253, 84, 159, 247, 9, 255, 32, 0, 207, 192, 223, 255, 255, 255, 255, 14, 255, 255, 255, 255, 240, 223, 243, 51, 51, 51, 10, 255, 80, 0, 3, 0, 63, 255, 132, 91, 245, 0, 111, 255, 255, 255, 96, 0, 58, 239, 234, 48, 0 };
/* f */ static const uint8_t Font_RobotoMono_Bold_20_glyph_102[] = { 11, 16, 12, 1, 16, 0, 0, 25, 223, 253, 32, 0, 30, 255, 255, 242, 0, 10, 255, 181, 69, 0, 0, 239, 224, 0, 0, 0, 15, 251, 0, 0, 12, 255, 255, 255, 255, 128, 207, 255, 255, 255, 248, 2, 51, 255, 195, 51, 16, 0, 15, 251, 0, 0, 0, 0, 255, 176, 0, 0, 0, 15, 251, 0, 0, 0, 0, 255, 176, 0, 0, 0, 15, 251, 0, 0, 0, 0, 255, 176, 0, 0, 0, 15, 251, 0, 0, 0, 0, 255, 176, 0, 0 };
/* g */ static const uint8_t Font_RobotoMono_Bold_20_glyph_103[] = { 10, 15, 12, 1, 11, 0, 142, 253, 93, 251, 11, 255, 255, 255, 251, 79, 254, 100, 207, 251, 175, 244, 0, 31, 251, 223, 224, 0, 15, 251, 239, 208, 0, 15, 251, 223, 224, 0, 15, 251, 175, 243, 0, 31, 251, 79, 254, 84, 207, 251, 10, 255, 255, 255, 251, 0, 142, 252, 79, 250, 1, 16, 0, 79, 249, 10, 230, 70, 239, 243, 30, 255, 255, 255, 144, 1, 141, 255, 181, 0 };
/* h */ static const uint8_t Font_RobotoMono_Bold_20_glyph_104[] = { 10, 15, 12, 1, 15, 175, 241, 0, 0, 0, 175, 241, 0, 0, 0, 175, 241, 0, 0, 0, 175, 241, 0, 0, 0, 175, 242, 158, 251, 48, 175, 252, 255, 255, 242, 175, 253, 84, 191, 248, 175, 241, 0, 15, 252, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253 };
/* i */ static const uint8_t Font_RobotoMono_Bold_20_glyph_105[] = { 9, 15, 12, 2, 15, 0, 9, 249, 0, 0, 0, 255, 240, 0, 0, 9, 232, 0, 0, 0, 0, 0, 0, 239, 255, 253, 0, 14, 255, 255, 208, 0, 51, 62, 253, 0, 0, 0, 239, 208, 0, 0, 14, 253, 0, 0, 0, 239, 208, 0, 0, 14, 253, 0, 0, 0, 239, 208, 0, 51, 62, 254, 51, 46, 255, 255, 255, 251, 239, 255, 255, 255, 176 };
/* j */ static const uint8_t Font_RobotoMono_Bold_20_glyph_106[] = { 7, 19, 12, 2, 15, 0, 2, 222, 48, 0, 127, 248, 0, 2, 221, 48, 0, 0, 0, 15, 255, 255, 96, 255, 255, 246, 3, 55, 255, 96, 0, 95, 246, 0, 5, 255, 96, 0, 95, 246, 0, 5, 255, 96, 0, 95, 246, 0, 5, 255, 96, 0, 95, 246, 0, 5, 255, 96, 0, 111, 245, 51, 94, 255, 43, 255, 255, 160, 191, 236, 112, 0 };
/* k */ static const uint8_t Font_RobotoMono_Bold_20_glyph_107[] = { 11, 15, 12, 1, 15, 159, 242, 0, 0, 0, 9, 255, 32, 0, 0, 0, 159, 242, 0, 0, 0, 9, 255, 32, 0, 0, 0, 159, 242, 0, 159, 250, 9, 255, 32, 127, 252, 0, 159, 242, 95, 254, 16, 9, 255, 95, 255, 32, 0, 159, 255, 255, 80, 0, 9, 255, 255, 252, 0, 0, 159, 255, 223, 247, 0, 9, 255, 81, 239, 243, 0, 159, 242, 5, 255, 208, 9, 255, 32, 10, 255, 144, 159, 242, 0, 30, 255, 80 };
/* l */ static const uint8_t Font_RobotoMono_Bold_20_glyph_108[] = { 10, 15, 12, 1, 15, 31, 255, 255, 208, 0, 31, 255, 255, 208, 0, 3, 51, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 0, 0, 239, 208, 0, 3, 51, 239, 227, 51, 31, 255, 255, 255, 254, 31, 255, 255, 255, 254 };
/* m */ static const uint8_t Font_RobotoMono_Bold_20_glyph_109[] = { 12, 11, 12, 0, 11, 79, 244, 223, 118, 237, 48, 79, 254, 255, 255, 255, 208, 79, 249, 159, 248, 175, 241, 79, 243, 79, 242, 79, 242, 79, 243, 79, 242, 79, 242, 79, 243, 79, 242, 79, 242, 79, 243, 79, 242, 79, 242, 79, 243, 79, 242, 79, 242, 79, 243, 79, 242, 79, 242, 79, 243, 79, 242, 79, 242, 79, 243, 79, 242, 79, 242 };
/* n */ static const uint8_t Font_RobotoMono_Bold_20_glyph_110[] = { 10, 11, 12, 1, 11, 175, 224, 158, 252, 48, 175, 252, 255, 255, 242, 175, 253, 84, 191, 249, 175, 242, 0, 15, 252, 175, 241, 0, 14, 252, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253, 175, 241, 0, 14, 253 };
/* o */ static const uint8_t Font_RobotoMono_Bold_20_glyph_111[] = { 10, 11, 12, 1, 11, 0, 92, 255, 197, 0, 9, 255, 255, 255, 144, 95, 253, 85, 223, 244, 191, 242, 0, 47, 251, 239, 208, 0, 13, 254, 255, 176, 0, 12, 255, 239, 208, 0, 13, 254, 191, 241, 0, 47, 251, 95, 253, 85, 223, 244, 9, 255, 255, 255, 144, 0, 108, 255, 197, 0 };
/* p */ static const uint8_t Font_RobotoMono_Bold_20_glyph_112[] = { 10, 15, 12, 1, 11, 159, 243, 207, 233, 0, 159, 255, 255, 255, 176, 159, 253, 69, 239, 245, 159, 242, 0, 63, 250, 159, 242, 0, 14, 253, 159, 242, 0, 13, 253, 159, 242, 0, 15, 252, 159, 242, 0, 63, 250, 159, 253, 85, 223, 244, 159, 255, 255, 255, 176, 159, 244, 207, 232, 0, 159, 242, 0, 0, 0, 159, 242, 0, 0, 0, 159, 242, 0, 0, 0, 159, 242, 0, 0, 0 };
/* q */ static const uint8_t Font_RobotoMono_Bold_20_glyph_113[] = { 10, 15, 12, 1, 11, 0, 158, 252, 62, 249, 12, 255, 255, 255, 249, 95, 253, 85, 223, 249, 175, 243, 0, 63, 249, 223, 224, 0, 47, 249, 239, 208, 0, 47, 249, 223, 224, 0, 47, 249, 175, 242, 0, 63, 249, 95, 253, 85, 223, 249, 11, 255, 255, 255, 249, 0, 158, 252, 95, 249, 0, 0, 0, 47, 249, 0, 0, 0, 47, 249, 0, 0, 0, 47, 249, 0, 0, 0, 47, 249 };
/* r */ static const uint8_t Font_RobotoMono_Bold_20_glyph_114[] = { 9, 11, 12, 2, 11, 63, 245, 75, 255, 195, 255, 207, 255, 251, 63, 255, 197, 69, 67, 255, 208, 0, 0, 63, 248, 0, 0, 3, 255, 128, 0, 0, 63, 248, 0, 0, 3, 255, 128, 0, 0, 63, 248, 0, 0, 3, 255, 128, 0, 0, 63, 248, 0, 0, 0 };
/* s */ static const uint8_t Font_RobotoMono_Bold_20_glyph_115[] = { 10, 11, 12, 1, 11, 0, 108, 255, 216, 16, 12, 255, 255, 255, 225, 95, 251, 68, 175, 249, 111, 243, 0, 8, 150, 30, 254, 132, 16, 0, 1, 175, 255, 252, 80, 0, 0, 72, 223, 246, 139, 160, 0, 14, 252, 143, 250, 68, 143, 251, 12, 255, 255, 255, 243, 0, 124, 255, 217, 32 };
/* t */ static const uint8_t Font_RobotoMono_Bold_20_glyph_116[] = { 10, 14, 12, 1, 14, 0, 40, 130, 0, 0, 0, 95, 245, 0, 0, 0, 95, 245, 0, 0, 207, 255, 255, 255, 244, 207, 255, 255, 255, 244, 35, 143, 248, 51, 49, 0, 95, 245, 0, 0, 0, 95, 245, 0, 0, 0, 95, 245, 0, 0, 0, 95, 245, 0, 0, 0, 95, 247, 0, 0, 0, 47, 254, 84, 84, 0, 11, 255, 255, 250, 0, 0, 141, 254, 198 };
/* u */ static const uint8_t Font_RobotoMono_Bold_20_glyph_117[] = { 10, 11, 12, 1, 11, 143, 243, 0, 15, 251, 143, 243, 0, 15, 251, 143, 243, 0, 15, 251, 143, 243, 0, 15, 251, 143, 243, 0, 15, 251, 143, 243, 0, 15, 251, 143, 243, 0, 15, 251, 127, 244, 0, 31, 251, 63, 252, 69, 207, 251, 12, 255, 255, 255, 251, 1, 174, 252, 60, 251 };
/* v */ static const uint8_t Font_RobotoMono_Bold_20_glyph_118[] = { 12, 11, 12, 0, 11, 31, 250, 0, 0, 175, 241, 12, 255, 0, 0, 255, 176, 6, 255, 64, 4, 255, 96, 0, 255, 144, 9, 255, 0, 0, 175, 224, 14, 250, 0, 0, 79, 243, 47, 244, 0, 0, 14, 247, 127, 224, 0, 0, 8, 252, 207, 128, 0, 0, 2, 255, 255, 48, 0, 0, 0, 223, 253, 0, 0, 0, 0, 127, 247, 0, 0 };
/* w */ static const uint8_t Font_RobotoMono_Bold_20_glyph_119[] = { 12, 11, 12, 0, 11, 175, 192, 31, 224, 15, 247, 127, 224, 79, 241, 47, 244, 79, 240, 127, 244, 79, 241, 47, 242, 175, 247, 111, 240, 15, 244, 205, 250, 143, 192, 12, 246, 249, 221, 175, 144, 9, 250, 246, 175, 207, 96, 7, 255, 243, 111, 255, 64, 4, 255, 240, 63, 255, 16, 1, 255, 208, 15, 254, 0, 0, 239, 160, 13, 251, 0 };
/* x */ static const uint8_t Font_RobotoMono_Bold_20_glyph_120[] = { 12, 11, 12, 0, 11, 10, 255, 64, 0, 207, 242, 1, 239, 225, 8, 255, 112, 0, 95, 250, 63, 252, 0, 0, 11, 255, 255, 243, 0, 0, 1, 255, 255, 128, 0, 0, 0, 159, 255, 16, 0, 0, 2, 255, 255, 144, 0, 0, 12, 255, 207, 244, 0, 0, 127, 247, 30, 254, 0, 2, 255, 192, 5, 255, 144, 12, 255, 32, 0, 175, 244 };
/* y */ static const uint8_t Font_RobotoMono_Bold_20_glyph_121[] = { 12, 15, 12, 0, 11, 79, 250, 0, 0, 63, 252, 13, 255, 16, 0, 159, 245, 6, 255, 112, 0, 239, 224, 0, 239, 208, 5, 255, 112, 0, 143, 243, 11, 255, 16, 0, 31, 249, 31, 249, 0, 0, 10, 254, 127, 242, 0, 0, 3, 255, 255, 176, 0, 0, 0, 207, 255, 64, 0, 0, 0, 95, 253, 0, 0, 0, 0, 47, 246, 0, 0, 0, 0, 191, 224, 0, 0, 0, 73, 255, 128, 0, 0, 1, 255, 253, 0, 0, 0, 2, 255, 161, 0, 0, 0 };
/* z */ static const uint8_t Font_RobotoMono_Bold_20_glyph_122[] = { 11, 11, 12, 1, 11, 191, 255, 255, 255, 253, 11, 255, 255, 255, 255, 192, 35, 51, 54, 255, 242, 0, 0, 1, 239, 244, 0, 0, 0, 207, 247, 0, 0, 0, 175, 249, 0, 0, 0, 143, 251, 0, 0, 0, 95, 253, 16, 0, 0, 63, 255, 99, 51, 51, 12, 255, 255, 255, 255, 241, 223, 255, 255, 255, 255, 16 };
/* { */ static const uint8_t Font_RobotoMono_Bold_20_glyph_123[] = { 7, 20, 12, 3, 16, 0, 0, 107, 48, 0, 143, 246, 0, 31, 247, 0, 6, 255, 0, 0, 143, 240, 0, 8, 255, 0, 0, 143, 224, 0, 11, 253, 0, 22, 255, 112, 15, 255, 144, 0, 255, 229, 0, 4, 159, 245, 0, 0, 207, 192, 0, 9, 254, 0, 0, 143, 240, 0, 8, 255, 0, 0, 111, 241, 0, 1, 255, 112, 0, 9, 255, 96, 0, 8, 228 };
/* | */ static const uint8_t Font_RobotoMono_Bold_20_glyph_124[] = { 2, 19, 12, 5, 15, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206, 206 };
/* } */ static const uint8_t Font_RobotoMono_Bold_20_glyph_125[] = { 7, 20, 12, 3, 16, 106, 48, 0, 10, 255, 64, 0, 11, 253, 0, 0, 79, 242, 0, 3, 255, 64, 0, 47, 244, 0, 2, 255, 64, 0, 31, 247, 0, 0, 191, 228, 0, 1, 207, 251, 0, 8, 255, 176, 9, 255, 115, 0, 255, 128, 0, 47, 245, 0, 2, 255, 64, 0, 63, 244, 0, 5, 255, 32, 0, 191, 208, 0, 175, 245, 0, 7, 213, 0, 0 };
/* ~ */ static const uint8_t Font_RobotoMono_Bold_20_glyph_126[] = { 12, 5, 12, 0, 9, 0, 19, 0, 0, 0, 0, 9, 255, 248, 0, 8, 145, 95, 255, 255, 213, 111, 240, 175, 113, 94, 255, 255, 144, 54, 0, 1, 158, 249, 0 };

const uint8_t * const Font_RobotoMono_Bold_20[126 + 1 - 32] = {
    Font_RobotoMono_Bold_20_glyph_32,
    Font_RobotoMono_Bold_20_glyph_33,
    Font_RobotoMono_Bold_20_glyph_34,
    Font_RobotoMono_Bold_20_glyph_35,
    Font_RobotoMono_Bold_20_glyph_36,
    Font_RobotoMono_Bold_20_glyph_37,
    Font_RobotoMono_Bold_20_glyph_38,
    Font_RobotoMono_Bold_20_glyph_39,
    Font_RobotoMono_Bold_20_glyph_40,
    Font_RobotoMono_Bold_20_glyph_41,
    Font_RobotoMono_Bold_20_glyph_42,
    Font_RobotoMono_Bold_20_glyph_43,
    Font_RobotoMono_Bold_20_glyph_44,
    Font_RobotoMono_Bold_20_glyph_45,
    Font_RobotoMono_Bold_20_glyph_46,
    Font_RobotoMono_Bold_20_glyph_47,
    Font_RobotoMono_Bold_20_glyph_48,
    Font_RobotoMono_Bold_20_glyph_49,
    Font_RobotoMono_Bold_20_glyph_50,
    Font_RobotoMono_Bold_20_glyph_51,
    Font_RobotoMono_Bold_20_glyph_52,
    Font_RobotoMono_Bold_20_glyph_53,
    Font_RobotoMono_Bold_20_glyph_54,
    Font_RobotoMono_Bold_20_glyph_55,
    Font_RobotoMono_Bold_20_glyph_56,
    Font_RobotoMono_Bold_20_glyph_57,
    Font_RobotoMono_Bold_20_glyph_58,
    Font_RobotoMono_Bold_20_glyph_59,
    Font_RobotoMono_Bold_20_glyph_60,
    Font_RobotoMono_Bold_20_glyph_61,
    Font_RobotoMono_Bold_20_glyph_62,
    Font_RobotoMono_Bold_20_glyph_63,
    Font_RobotoMono_Bold_20_glyph_64,
    Font_RobotoMono_Bold_20_glyph_65,
    Font_RobotoMono_Bold_20_glyph_66,
    Font_RobotoMono_Bold_20_glyph_67,
    Font_RobotoMono_Bold_20_glyph_68,
    Font_RobotoMono_Bold_20_glyph_69,
    Font_RobotoMono_Bold_20_glyph_70,
    Font_RobotoMono_Bold_20_glyph_71,
    Font_RobotoMono_Bold_20_glyph_72,
    Font_RobotoMono_Bold_20_glyph_73,
    Font_RobotoMono_Bold_20_glyph_74,
    Font_RobotoMono_Bold_20_glyph_75,
    Font_RobotoMono_Bold_20_glyph_76,
    Font_RobotoMono_Bold_20_glyph_77,
    Font_RobotoMono_Bold_20_glyph_78,
    Font_RobotoMono_Bold_20_glyph_79,
    Font_RobotoMono_Bold_20_glyph_80,
    Font_RobotoMono_Bold_20_glyph_81,
    Font_RobotoMono_Bold_20_glyph_82,
    Font_RobotoMono_Bold_20_glyph_83,
    Font_RobotoMono_Bold_20_glyph_84,
    Font_RobotoMono_Bold_20_glyph_85,
    Font_RobotoMono_Bold_20_glyph_86,
    Font_RobotoMono_Bold_20_glyph_87,
    Font_RobotoMono_Bold_20_glyph_88,
    Font_RobotoMono_Bold_20_glyph_89,
    Font_RobotoMono_Bold_20_glyph_90,
    Font_RobotoMono_Bold_20_glyph_91,
    Font_RobotoMono_Bold_20_glyph_92,
    Font_RobotoMono_Bold_20_glyph_93,
    Font_RobotoMono_Bold_20_glyph_94,
    Font_RobotoMono_Bold_20_glyph_95,
    Font_RobotoMono_Bold_20_glyph_96,
    Font_RobotoMono_Bold_20_glyph_97,
    Font_RobotoMono_Bold_20_glyph_98,
    Font_RobotoMono_Bold_20_glyph_99,
    Font_RobotoMono_Bold_20_glyph_100,
    Font_RobotoMono_Bold_20_glyph_101,
    Font_RobotoMono_Bold_20_glyph_102,
    Font_RobotoMono_Bold_20_glyph_103,
    Font_RobotoMono_Bold_20_glyph_104,
    Font_RobotoMono_Bold_20_glyph_105,
    Font_RobotoMono_Bold_20_glyph_106,
    Font_RobotoMono_Bold_20_glyph_107,
    Font_RobotoMono_Bold_20_glyph_108,
    Font_RobotoMono_Bold_20_glyph_109,
    Font_RobotoMono_Bold_20_glyph_110,
    Font_RobotoMono_Bold_20_glyph_111,
    Font_RobotoMono_Bold_20_glyph_112,
    Font_RobotoMono_Bold_20_glyph_113,
    Font_RobotoMono_Bold_20_glyph_114,
    Font_RobotoMono_Bold_20_glyph_115,
    Font_RobotoMono_Bold_20_glyph_116,
    Font_RobotoMono_Bold_20_glyph_117,
    Font_RobotoMono_Bold_20_glyph_118,
    Font_RobotoMono_Bold_20_glyph_119,
    Font_RobotoMono_Bold_20_glyph_120,
    Font_RobotoMono_Bold_20_glyph_121,
    Font_RobotoMono_Bold_20_glyph_122,
    Font_RobotoMono_Bold_20_glyph_123,
    Font_RobotoMono_Bold_20_glyph_124,
    Font_RobotoMono_Bold_20_glyph_125,
    Font_RobotoMono_Bold_20_glyph_126,
};
