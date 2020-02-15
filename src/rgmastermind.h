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
    QDialog     *helpAbout;
    QMenuBar    *menuBar;
    QMenu       *fileMenu;
    QMenu       *aboutMenu;
    QAction     *newGameAction;
    QAction     *quitAction;
    QAction     *aboutAction;
    QVBoxLayout *vbox;
    QVBoxLayout *scoreVbox;
    QGridLayout *grid;
    QFrame      *bottomHline;
    QFrame      *topHline;
    QFrame      *vline;
    QLabel      *codeMsg;
    QLabel      *playerMsg;
    QLabel      *whitePegs;
    QLabel      *blackPegs;
    QLabel      *blackPegNum[NUM_OF_TRYS];
    QLabel      *whitePegNum[NUM_OF_TRYS];
    RgButton    *codeButtons[CODE_LEN];
    RgButton    *tryButtons[NUM_OF_TRY_BTNS];
    RgButton    *guessButtons[CODE_LEN];
    RgButton    *goButton;
    int         turnCount;
    
    public slots:
        void newGame();
        void about();
};

#endif /* RGMASTERMIND_H */

