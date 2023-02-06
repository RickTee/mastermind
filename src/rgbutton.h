/* MasterMind
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
    //RgButton(const char *name, QPushButton * parent = 0);
    RgButton(int sizeX, int sizeY, QPushButton * parent = 0);
    virtual ~RgButton();
    
    int getIndex();
    void setColor(int colorIndx);
private:
    int colorIndex;
};

#endif /* RGBUTTON_H */

