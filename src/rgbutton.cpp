/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
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

RgButton::RgButton(const QString &name, QPushButton * parent) :  QPushButton(name, parent) {

    this->colorIndex = 0;
}

RgButton::RgButton(int sizeX, int sizeY, QPushButton * parent) :  QPushButton(parent) {
    //setStyleSheet("QPushButton {background-color: yellow; font: 10px }");
    setFixedSize(sizeX, sizeY);
    this->colorIndex = 0;
}

RgButton::~RgButton() {
}

int RgButton::getIndex() {
    return this->colorIndex;
}

void RgButton::setColor(int colorIndex) {
    //setStyleSheet("QPushButton {background-color: yellow; font: 10px }");
    this->colorIndex = colorIndex;
    this->setStyleSheet(colors[colorIndex]);
}
