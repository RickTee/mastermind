/* MasterMind
 * File:   RgMasterMind.cpp
 * Author: rick
 * 
 * Created on 13 February 2020, 07:45
 */

#include "rgmastermind.h"

// Constructor
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
    int i, j, k = 0;
    for (i = 0; i < CODE_LEN; i++) {
        codeButtons[i] = new RgButton(BTN_SIZE, BTN_SIZE);
        grid->addWidget(codeButtons[i], 0, i);
        // Generate the random color code
        code[i] = rgRnd();
        //codeButtons[j]->setColor(code[j]);
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
            tryButtons[k] = new RgButton(BTN_SIZE, BTN_SIZE);
            grid->addWidget(tryButtons[k], i, j);
            k++;
        }
    }
    grid->addWidget(bottomHline, 12, 0, 1, 8);
    // Add the score labels to hold number of black and white pegs for each
    // guess.
    k = 0;
    for (i = 0; i < NUM_OF_TRYS; i++) {
        whitePegNum[k] = new QLabel();
        whitePegNum[k]->setNum(0);
        whitePegNum[k]->setAlignment(Qt::AlignCenter);
        blackPegNum[k] = new QLabel();
        blackPegNum[k]->setNum(0);
        blackPegNum[k]->setAlignment(Qt::AlignCenter);
        grid->addWidget(whitePegNum[k], i + 2, 4);
        grid->addWidget(blackPegNum[k], i + 2, 6);
        k++;
    }
    // Add the user input buttons
    for (i = 0; i < CODE_LEN; i++) {
        guessButtons[i] = new RgButton(BTN_SIZE, BTN_SIZE);
        guessButtons[i]->setColor(rgRnd());
        grid->addWidget(guessButtons[i], 13, i);
        connect(guessButtons[i], SIGNAL(clicked()), SLOT(cycleColor()));
    }
    // Add the Guess button which will set the try buttons and calculate
    // the white and black pegs.
    goButton = new QPushButton("Guess");
    grid->addWidget(goButton, 13, 4, 1, 3);
    connect(goButton, SIGNAL(clicked()), SLOT(guess()));

    codeMsg = new QLabel("Secret code");
    vbox->addWidget(codeMsg);
    vbox->addLayout(grid);
    setLayout(vbox);
    // Turn count incremented with each guess, if 10 game is over
    turnCount = 0;
}

// Destructor
RgMasterMind::~RgMasterMind() {
}

void RgMasterMind::closeEvent(QCloseEvent *event){
    emit exit(0);
    event->accept();
}

// Create a menu bar and add a File menu and Help menu'
void RgMasterMind::makeMenu() {
    menuBar = new QMenuBar();
    fileMenu = new QMenu("File");
    newGameAction = new QAction(QIcon("icons/new-game.png"), "New game");
    fileMenu->addAction(newGameAction);
    fileMenu->addSeparator();
    quitAction = new QAction(QIcon("icons/exit.png"), "Quit");
    fileMenu->addAction(quitAction);
    menuBar->addMenu(fileMenu);

    helpMenu = new QMenu("Help");
    aboutAction = new QAction(QIcon("icons/help-about.png"), "About");
    helpMenu->addAction(aboutAction);
    instructAction = new QAction(QIcon("icons/help-contents.png"), "Instructions");
    helpMenu->addAction(instructAction);
    menuBar->addMenu(helpMenu);
    
    connect(newGameAction, SIGNAL(triggered()),  SLOT(newGame()));
    connect(quitAction, SIGNAL(triggered()), SLOT(close()));
    connect(aboutAction, SIGNAL(triggered()), SLOT(about()));
    connect(instructAction, SIGNAL(triggered()), SLOT(instructions()));
}

// Reset all buttons, black and white peg labels and guess count, generate a new secret code, 
// enable the Guess button
void RgMasterMind::newGame() {
    int i;
    for(i = 0; i < CODE_LEN; i++) {
        codeButtons[i]->setColor(6);
        guessButtons[i]->setColor(rgRnd());
        // Generate a new code
        code[i] = rgRnd();
    }
    for(i = 0; i < NUM_OF_TRY_BTNS; i++) {
        tryButtons[i]->setColor(6);
    }
    
    for(i = 0; i < NUM_OF_TRYS; i++) {
        blackPegNum[i]->setNum(0);
        whitePegNum[i]->setNum(0);
    }
    turnCount = 0;
    // Enable the Guess button
    goButton->setEnabled(true);
}

void RgMasterMind::cycleColor() {
    int colorIndx;
    RgButton *btn;
    btn = (RgButton *) sender();
    colorIndx = btn->getIndex();
    colorIndx++;
    if (colorIndx >= COLORS) {
        colorIndx = 0;
    }
    btn->setColor(colorIndx);
}

void RgMasterMind::guess() {
    int i, colorIndx;
    for (i = 0; i < CODE_LEN; i++) {
        colorIndx = guessButtons[i]->getIndex();
        tryButtons[i + turnCount]->setColor(colorIndx);
    }
    compPegs();
}

void RgMasterMind::compPegs() {
    // Check secret code for matches set score labels with
    // black and white peg numbers;
    int i, j, idx, blackPegs=0, whitePegs = 0;
    for (i = 0; i < CODE_LEN; i++) {
        if (guessButtons[i]->getIndex() == code[i]) {
            blackPegs++;
        }
    }
    if(blackPegs == CODE_LEN) {
        endGame();
    }
    for (i = 0; i < CODE_LEN; i++) {
        for (j = 0; j < CODE_LEN; j++) {
            idx = guessButtons[i]->getIndex();
            if (idx == code[j]) {
                whitePegs++;
                break;
            }
        }
    }
    whitePegs = whitePegs - blackPegs;
    whitePegNum[turnCount/4]->setNum(whitePegs);
    blackPegNum[turnCount/4]->setNum(blackPegs);
    
    turnCount += 4;
    if (turnCount >= NUM_OF_TRYS * 4) {
        endGame();
    }
}

void RgMasterMind::endGame() {
    // Game over stop everything
    int i;
    for (i = 0; i < CODE_LEN; i++) {
        codeButtons[i]->setColor(code[i]);
    }
    goButton->setDisabled(true);
}

void RgMasterMind::about() {
    RgMasterMind::aboutDialog(0);
}

void RgMasterMind::instructions() {
    RgMasterMind::aboutDialog(1);
}

void RgMasterMind::aboutDialog(int tabIdx) {
    helpAbout = new QDialog(this);
    helpAbout->setModal(true);
    helpAbout->setWindowTitle("About");
    QVBoxLayout *vbox = new QVBoxLayout;
    
    const QString *aboutString = new QString(APPLICATION"\n" DESCRIPTION"\n" "Author: " AUTHOR"\n" EMAIL);
    QLabel *progName = new QLabel(*aboutString);
    progName->setAlignment(Qt::AlignCenter);
    
    QTabWidget *aboutTabWidget = new QTabWidget();
    aboutTabWidget->addTab(progName, "About");
    
    QLabel *instructions = new QLabel("\nThe buttons at the bottom of the\ninterface cycle through "
            "the available\ncolors. Once you have selected four colors\npress the Guess button to test "
            "them against\nthe secret code. The colors are then copied\nto the guess buttons and "
            "your score for\nthis guess is calculated and displayed.\n");
    instructions->setAlignment(Qt::AlignCenter);
    aboutTabWidget->addTab(instructions, "Instructions");
    vbox->addWidget(aboutTabWidget);
    
    aboutTabWidget->setCurrentIndex(tabIdx);

    QPushButton *btn = new QPushButton("Close");
    connect(btn, SIGNAL(clicked()), helpAbout, SLOT(close()));
    vbox->addWidget(btn);

    helpAbout->setLayout(vbox);
    helpAbout->show();
}

int RgMasterMind::rgRnd() {
    int divisor = RAND_MAX / (COLORS + 1);
    int retval;

    do {
        retval = rand() / divisor;
    } while (retval > (COLORS - 1));

    return retval;
}

void RgMasterMind::randomize(void) {
    time_t ltime;
    unsigned int stime;

    ltime = time(NULL);

    ltime = ltime << 21;
    stime = (unsigned) ltime / 2;
    srand(stime);
}