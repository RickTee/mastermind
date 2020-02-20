/* MasterMind
 * File:   main.cpp
 * Author: rick
 *
 * Created on 13 February 2020, 07:45
 */

#include <QApplication>
#include "rgmastermind.h"
#include "version.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    // create and show your widgets here
    RgMasterMind *game = new RgMasterMind("MasteringtonMindersville");
    
    game->show();

    return app.exec();
}

