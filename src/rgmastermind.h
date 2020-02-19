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

#define BTN_SIZE 30
#define NUM_OF_TRYS 10
#define CODE_LEN 4
#define NUM_OF_TRY_BTNS (NUM_OF_TRYS * CODE_LEN)

#include <cstdlib> 
#include <ctime> 
#include <iostream>
#include <QWidget>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QMenuBar>
#include <QFrame>
#include <QLabel>
#include <QDialog>
#include "version.h"
#include "rgbutton.h"

class RgMasterMind : public QWidget {
    Q_OBJECT
public:
    RgMasterMind(const QString &title, QWidget * parent = 0);
    RgMasterMind(const RgMasterMind & orig, QWidget * parent = 0);
    virtual ~RgMasterMind();
private:
    void makeMenu();
    int         rgRnd();
    void        compPegs();
    void        endGame();
    void        aboutDialog(int tabIdx);
    int         *rgrand;
    int         turnCount;
    int         code[COLORS];
    QDialog     *helpAbout;
    QMenuBar    *menuBar;
    QMenu       *fileMenu;
    QMenu       *aboutMenu;
    QAction     *newGameAction;
    QAction     *quitAction;
    QAction     *aboutAction;
    QAction     *instrctAction;
    QVBoxLayout *vbox;
    QVBoxLayout *scoreVbox;
    QGridLayout *grid;
    QFrame      *bottomHline;
    QFrame      *topHline;
    QFrame      *vline;
    QLabel      *codeMsg;
    QLabel      *whitePegs;
    QLabel      *blackPegs;
    QLabel      *blackPegNum[NUM_OF_TRYS];
    QLabel      *whitePegNum[NUM_OF_TRYS];
    RgButton    *codeButtons[CODE_LEN];
    RgButton    *tryButtons[NUM_OF_TRY_BTNS];
    RgButton    *guessButtons[CODE_LEN];
    QPushButton *goButton;
    
    public slots:
        void newGame();
        void about();
        void instructions();
        void cycleColor();
        void guess();
};

#endif /* RGMASTERMIND_H */

