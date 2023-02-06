/* MasterMind
 * File:   RgButton.cpp
 * Author: rick
 * 
 * Created on 13 February 2020, 07:45
 */

#include "rgbutton.h"

char colors[COLORS + 1][255] = {"QPushButton {background-color: red}",
    "QPushButton {background-color: orange}",
    "QPushButton {background-color: blue}",
    "QPushButton {background-color: green}",
    "QPushButton {background-color: magenta}",
    "QPushButton {background-color: yellow}",
    "QPushButton {background-color: }"};

RgButton::RgButton(int sizeX, int sizeY, QPushButton * parent) :  QPushButton(parent) {
    setFixedSize(sizeX, sizeY);
    colorIndex = 0;
}

RgButton::~RgButton() {
}

int RgButton::getIndex() {
    return colorIndex;
}

void RgButton::setColor(int colorIndx) {
    colorIndex = colorIndx;
    setStyleSheet(colors[colorIndex]);
}
