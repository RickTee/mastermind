/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RgMasterMind.cpp
 * Author: rick
 * 
 * Created on 13 February 2020, 07:45
 */

#include "rgmastermind.h"

RgMasterMind::RgMasterMind(const QString &title, QWidget * parent) : QWidget(parent) {
    setWindowTitle(title);
    hbox = new QHBoxLayout;
    vbox = new QVBoxLayout;
    grid = new QGridLayout;
    
    QString idx;
    int i, j, k = 0;
    for(i = 0; i < NUM_OF_TRYS; i++) {
        for(j = 0; j < CODE_LEN; j++) {
            try_buttons[k] = new RgButton(idx.setNum(k));
            grid->addWidget(try_buttons[k], i, j);
            k++;
        }
    }
    vbox->addLayout(grid);
    hbox->addLayout(vbox);
    setLayout(hbox);
    
}

RgMasterMind::RgMasterMind(const RgMasterMind& orig, QWidget * parent) : QWidget(parent) {
}

RgMasterMind::~RgMasterMind() {
}

