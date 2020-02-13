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
#include "rgbutton.h"

class RgMasterMind : public QWidget {
    Q_OBJECT
public:
    RgMasterMind(const QString &title, QWidget * parent = 0);
    RgMasterMind(const RgMasterMind & orig, QWidget * parent = 0);
    virtual ~RgMasterMind();
private:
    QHBoxLayout *hbox;
    QVBoxLayout *vbox;
    QGridLayout *grid;
    RgButton    *try_buttons[NUM_OF_TRY_BTNS];
};

#endif /* RGMASTERMIND_H */

