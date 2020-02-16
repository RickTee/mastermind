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

char colors[COLORS][255] = {"QPushButton {background-color: red}",
    "QPushButton {background-color: orange}",
    "QPushButton {background-color: blue}",
    "QPushButton {background-color: green}",
    "QPushButton {background-color: magenta}",
    "QPushButton {background-color: yellow}"};

RgButton::RgButton(const QString &idx, QPushButton * parent) :  QPushButton(idx, parent) {
    //setStyleSheet("QPushButton {background-color: yellow; font: 10px }");
    setFixedSize(30, 30);
}

RgButton::RgButton(const RgButton& orig, QPushButton * parent) : QPushButton(parent) {
    
}

RgButton::~RgButton() {
}

int RgButton::getIndex() {
    return this->index;
}

void RgButton::setColor(int idx) {
    //setStyleSheet("QPushButton {background-color: yellow; font: 10px }");
    this->index = idx;
    this->setStyleSheet(colors[idx]);
}
