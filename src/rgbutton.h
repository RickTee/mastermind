/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RgButton.h
 * Author: rick
 *
 * Created on 13 February 2020, 07:45
 */
#ifndef RGBUTTON_H
#define RGBUTTON_H

#define COLORS 6

#include <QPushButton>

class RgButton : public QPushButton {
    Q_OBJECT
public:
    RgButton(const QString &name = "", QPushButton * parent = 0);
    RgButton(int sizeX, int sizeY, QPushButton * parent = 0);
    virtual ~RgButton();
    
    int getIndex();
    void setColor(int colorIndex);
private:
    int colorIndex;
};

#endif /* RGBUTTON_H */

