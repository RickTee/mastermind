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

RgButton::RgButton(const QString &idx, QPushButton * parent) :  QPushButton(idx, parent) {
    //setStyleSheet("QPushButton {background-color: yellow; font: 10px }");
    setFixedSize(30, 30);
}

RgButton::RgButton(const RgButton& orig, QPushButton * parent) : QPushButton(parent) {
    
}

RgButton::~RgButton() {
}

void RgButton::setIndex(int idx) {
    this->index = idx;
}

int RgButton::getIndex() {
    return this->index;
}

void RgButton::setColor(const QString color) {
    //setStyleSheet("QPushButton {background-color: yellow; font: 10px }");
    
    this->setStyleSheet(color);
}
