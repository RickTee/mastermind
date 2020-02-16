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

void randomize(void);
char colors[COLORS][255] = {"QPushButton {background-color: red}",
    "QPushButton {background-color: orange}",
    "QPushButton {background-color: blue}",
    "QPushButton {background-color: green}",
    "QPushButton {background-color: magenta}",
    "QPushButton {background-color: yellow}"};

RgMasterMind::RgMasterMind(const QString &title, QWidget * parent) : QWidget(parent) {
    setWindowTitle(title);
    vbox = new QVBoxLayout;
    grid = new QGridLayout;
    topHline = new QFrame;
    topHline->setFrameStyle(QFrame::HLine | QFrame::Sunken);
    topHline->setLineWidth(3);
    bottomHline = new QFrame;
    bottomHline->setFrameStyle(QFrame::HLine | QFrame::Sunken);
    bottomHline->setLineWidth(3);
    vline = new QFrame;
    vline->setFrameStyle(QFrame::VLine | QFrame::Sunken);
    vline->setLineWidth(3);

    randomize();

    makeMenu();
    vbox->setMenuBar(menuBar);
    // The secret code + labels for white and black pegs
    QString idx;
    int i, j, k = 0;
    for (j = 0; j < CODE_LEN; j++) {
        codeButtons[j] = new RgButton("");
        grid->addWidget(codeButtons[j], 0, j);
        code[j] = rgRnd();
        codeButtons[j]->setColor(colors[code[j]]);
        codeButtons[j]->setIndex(code[j]);
    }
    whitePegs = new QLabel("White");
    grid->addWidget(whitePegs, 0, CODE_LEN);
    blackPegs = new QLabel("Black");
    grid->addWidget(vline, 1, CODE_LEN + 1, 11, 1);
    grid->addWidget(blackPegs, 0, CODE_LEN + 2);
    grid->addWidget(topHline, 1, 0, 1, 7);

    // Create the buttons for each guess
    for (i = 2; i < NUM_OF_TRYS + 2; i++) {
        for (j = 0; j < CODE_LEN; j++) {
            tryButtons[k] = new RgButton(idx.setNum(k));
            grid->addWidget(tryButtons[k], i, j);
            k++;
        }
    }
    grid->addWidget(bottomHline, 12, 0, 1, 8);
    // Add the score labels to hold number of black and white pegs for each
    // guess.
    k = 0;
    for (i = 2; i < NUM_OF_TRYS + 2; i++) {
        whitePegNum[k] = new QLabel("0");
        whitePegNum[k]->setAlignment(Qt::AlignCenter);
        blackPegNum[k] = new QLabel("0");
        blackPegNum[k]->setAlignment(Qt::AlignCenter);
        grid->addWidget(whitePegNum[k], i, 4);
        grid->addWidget(blackPegNum[k], i, 6);
        k++;
    }
    // Add the user input bit
    for (i = 0; i < CODE_LEN; i++) {
        guessButtons[i] = new RgButton("");
        guessButtons[i]->setIndex(0);
        grid->addWidget(guessButtons[i], 13, i);
        connect(guessButtons[i], SIGNAL(clicked()), SLOT(cycleColor()));
    }
    // Add the Go button which will set the try buttons and calculate
    // the white and black pegs.
    goButton = new RgButton("Go");
    grid->addWidget(guessButtons[i], 13, 4);
    connect(goButton, SIGNAL(clicked()), SLOT(guess()));

    playerMsg = new QLabel("");
    codeMsg = new QLabel("Secret code");
    vbox->addWidget(playerMsg);
    vbox->addWidget(codeMsg);
    vbox->addLayout(grid);
    setLayout(vbox);
    // Turn count decremented with each guess, if zero game is over
    turnCount = 0;
}

RgMasterMind::RgMasterMind(const RgMasterMind& orig, QWidget * parent) : QWidget(parent) {
}

RgMasterMind::~RgMasterMind() {
}

// Create a menu bar and add a File menu with entries for 'New game' and 'Quit'

void RgMasterMind::makeMenu() {
    menuBar = new QMenuBar;

    fileMenu = new QMenu(tr("&File"), this);
    newGameAction = new QAction(QIcon("icons/new-game.png"), "New game");
    connect(newGameAction, SIGNAL(triggered()), this, SLOT(newGame()));
    fileMenu->addAction(newGameAction);

    fileMenu->addSeparator();

    quitAction = new QAction(QIcon("icons/exit.png"), "Quit");
    connect(quitAction, SIGNAL(triggered()), this, SLOT(close()));
    fileMenu->addAction(quitAction);

    aboutMenu = new QMenu(tr("&Help"), this);
    aboutAction = new QAction(QIcon("icons/help-about.png"), "About");
    connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));
    aboutMenu->addAction(aboutAction);

    menuBar->addMenu(fileMenu);
    menuBar->addMenu(aboutMenu);
}

void RgMasterMind::newGame() {

}

void RgMasterMind::about() {
    this->helpAbout = new QDialog(this);
    this->helpAbout->setModal(true);
    this->helpAbout->setWindowTitle("About");
    QVBoxLayout *vbox = new QVBoxLayout;

    QLabel *progName = new QLabel(APPLICATION);
    progName->setAlignment(Qt::AlignHCenter);
    vbox->addWidget(progName);

    QLabel *description = new QLabel(DESCRIPTION);
    description->setAlignment(Qt::AlignHCenter);
    vbox->addWidget(description);

    QLabel *author = new QLabel("Author: " AUTHOR);
    author->setAlignment(Qt::AlignHCenter);
    vbox->addWidget(author);

    QLabel *email = new QLabel(EMAIL);
    email->setAlignment(Qt::AlignHCenter);
    vbox->addWidget(email);

    QPushButton *btn = new QPushButton("Close");
    connect(btn, SIGNAL(clicked()), helpAbout, SLOT(close()));
    vbox->addWidget(btn);

    this->helpAbout->setLayout(vbox);
    this->helpAbout->show();
}

void RgMasterMind::cycleColor() {
    int idx;
    RgButton *btn;
    btn = (RgButton *) QObject::sender();
    idx = btn->getIndex();
    idx++;
    if (idx >= COLORS) {
        idx = 0;
    }
    btn->setIndex(idx);
    btn->setColor(colors[idx]);
}

void RgMasterMind::guess() {
    int i, idx;
    for (i = 0; i < CODE_LEN; i++) {
        idx = this->guessButtons[i]->getIndex();
        this->tryButtons[i + turnCount]->setColor(colors[idx]);
        this->tryButtons[i + turnCount]->setIndex(idx);
    }
    compPegs();
}

void RgMasterMind::compPegs() {
    // Check secret code for matches set score labels with
    // black and white peg numbers;
    int i, j, blackPegs, whitePegs = 0;
    for (i = 0; i < CODE_LEN; i++) {
        if (this->tryButtons[i + turnCount]->getIndex() == code[i]) {
            blackPegs++;
        }
    }
    for (i = 0; i < CODE_LEN; i++) {
        for (j = 0; j < CODE_LEN; j++) {
            if (this->tryButtons[i + turnCount]->getIndex() == code[j]) {
                whitePegs++;
                break;
            }
        }
    }
    QString pegs;
    whitePegs = whitePegs - blackPegs;
    this->whitePegNum[turnCount]->setText(pegs.setNum(whitePegs));
    this->blackPegNum[turnCount]->setText(pegs.setNum(blackPegs));
    
    turnCount += 4;
    if (turnCount >= NUM_OF_TRYS) {
        endGame();
    }
}

void RgMasterMind::endGame() {
    // Game over stop everything
}

int RgMasterMind::rgRnd() {
    int divisor = RAND_MAX / (COLORS + 1);
    int retval;

    do {
        retval = rand() / divisor;
    } while (retval > COLORS);

    return retval;
}

void randomize(void) {
    time_t ltime;
    unsigned int stime;

    ltime = time(NULL);

    ltime = ltime << 21;
    stime = (unsigned) ltime / 2;
    srand(stime);
}