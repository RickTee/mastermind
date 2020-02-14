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
    vbox = new QVBoxLayout;
    grid = new QGridLayout;
    topHline = new QFrame;
    topHline->setFrameStyle(QFrame::HLine|QFrame::Sunken);
    topHline->setLineWidth(3);
    bottomHline = new QFrame;
    bottomHline->setFrameStyle(QFrame::HLine|QFrame::Sunken);
    bottomHline->setLineWidth(3);
    vline = new QFrame;
    vline->setFrameStyle(QFrame::VLine|QFrame::Sunken);
    vline->setLineWidth(3);
    
    // The secret code
    QString idx;
    int i, j, k = 0;
    for(j = 0; j < CODE_LEN; j++) {
        codeButtons[j] = new RgButton(idx.setNum(j));
        grid->addWidget(codeButtons[j],0,j);
    }
    whitePegs = new QLabel("White");
    grid->addWidget(whitePegs,0,CODE_LEN);
    blackPegs = new QLabel("Black");
    grid->addWidget(vline, 1, CODE_LEN + 1, 11, 1);
    grid->addWidget(blackPegs,0,CODE_LEN + 2);
    grid->addWidget(topHline, 1, 0, 1, 7);
    
    // Create the try buttons for each guess
    for(i = 2; i < NUM_OF_TRYS + 2; i++) {
        for(j = 0; j < CODE_LEN; j++) {
            if(i == 11) {
               grid->addWidget(bottomHline, i, 0, 1, 8);
               continue;
            }
            guessButtons[k] = new RgButton(idx.setNum(k));
            grid->addWidget(guessButtons[k], i, j);
            k++;
        }
    }
    k = 0;
    for(i = 2; i < NUM_OF_TRYS + 1; i++) {
        whitePegNum[k] = new QLabel("0");
        whitePegNum[k]->setAlignment(Qt::AlignHCenter);
        blackPegNum[k] = new QLabel("0");
        blackPegNum[k]->setAlignment(Qt::AlignHCenter);
        grid->addWidget(whitePegNum[k], i, 4);
        grid->addWidget(blackPegNum[k], i, 6);
        k++;
    }
    
    
    //whitePegNum = new QLabel("0");
    //blackPegNum = new QLabel("0");
   
    vbox->addLayout(grid);

    setLayout(vbox);
    
}

RgMasterMind::RgMasterMind(const RgMasterMind& orig, QWidget * parent) : QWidget(parent) {
}

RgMasterMind::~RgMasterMind() {
}

