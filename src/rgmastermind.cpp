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
    hbox_0 = new QHBoxLayout;
    hbox_1 = new QHBoxLayout;
    vbox_0 = new QVBoxLayout;
    grid = new QGridLayout;
    hline = new QFrame;
    hline->setFrameStyle(QFrame::HLine|QFrame::Sunken);
    hline->setLineWidth(3);
    
    // The secret code
    QString idx;
    int i, j, k = 0;
    for(i = 0; i < CODE_LEN; i++) {
        code_buttons[i] = new RgButton(idx.setNum(i));
        hbox_1->addWidget(code_buttons[i]);
    }
    
    // Create the try buttons for each guess
    for(i = 0; i < NUM_OF_TRYS; i++) {
        for(j = 0; j < CODE_LEN; j++) {
            try_buttons[k] = new RgButton(idx.setNum(k));
            grid->addWidget(try_buttons[k], i, j);
            k++;
        }
    }
    // Create the score area with black and white peg count labels
    score_vbox = new QVBoxLayout;
    score_frame= new QFrame;
    score_frame->setFrameStyle(QFrame::Panel|QFrame::Raised);
    score_frame->setLineWidth(3);
    
    wht_pegs_hbox = new QHBoxLayout;
    white_pegs = new QLabel("White pegs");
    white_peg_num = new QLabel("0");
    wht_pegs_hbox->addWidget(white_pegs);
    wht_pegs_hbox->addWidget(white_peg_num);
    
    blk_pegs_hbox = new QHBoxLayout;
    black_pegs = new QLabel("Black pegs");
    black_peg_num = new QLabel("0");
    blk_pegs_hbox->addWidget(black_pegs);
    blk_pegs_hbox->addWidget(black_peg_num);
    
    score_vbox->addStretch(100);
    score_vbox->addLayout(wht_pegs_hbox);
    score_vbox->addLayout(blk_pegs_hbox);
    score_vbox->addStretch(100);
    score_frame->setLayout(score_vbox);
    
    vbox_0->addLayout(hbox_1);
    vbox_0->addWidget(hline);
    vbox_0->addLayout(grid);
    hbox_0->addLayout(vbox_0);
    hbox_0->addWidget(score_frame);
    setLayout(hbox_0);
    
}

RgMasterMind::RgMasterMind(const RgMasterMind& orig, QWidget * parent) : QWidget(parent) {
}

RgMasterMind::~RgMasterMind() {
}

