/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RgMasterMind.h
 * Author: rick
 *
 * Created on 13 February 2020, 07:45
 */

#ifndef RGMASTERMIND_H
#define RGMASTERMIND_H

#define NUM_OF_TRYS 10
#define CODE_LEN 4
#define COLORS 6
#define NUM_OF_TRY_BTNS (NUM_OF_TRYS * CODE_LEN)

#include <QWidget>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QSizePolicy>
#include <QFrame>
#include <QLabel>
#include "rgbutton.h"

class RgMasterMind : public QWidget {
    Q_OBJECT
public:
    RgMasterMind(const QString &title, QWidget * parent = 0);
    RgMasterMind(const RgMasterMind & orig, QWidget * parent = 0);
    virtual ~RgMasterMind();
private:
    QHBoxLayout *hbox_0;
    QHBoxLayout *hbox_1;
    QHBoxLayout *blk_pegs_hbox;
    QHBoxLayout *wht_pegs_hbox;
    QVBoxLayout *vbox_0;
    QVBoxLayout *score_vbox;
    QGridLayout *grid;
    QFrame      *hline;
    QFrame      *score_frame;
    QLabel      *white_pegs;
    QLabel      *black_pegs;
    QLabel      *black_peg_num;
    QLabel      *white_peg_num;
    RgButton    *code_buttons[CODE_LEN];
    RgButton    *try_buttons[NUM_OF_TRY_BTNS];
    
};

#endif /* RGMASTERMIND_H */

