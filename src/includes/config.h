#ifndef CONFIG_H_
#define CONFIG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colors.h"
#include "mainMenu.h"
#include "ansiEscapes.h"

#define MAXLEN 255

extern char accFilePath[MAXLEN];
extern char configFilePath[MAXLEN];

void configMenu();

#endif // CONFIG_H_