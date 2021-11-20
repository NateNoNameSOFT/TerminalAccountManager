#ifndef CONFIG_H_
#define CONFIG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colors.h"
#include "mainMenu.h"

#define MAXLEN 255

extern char accFilePath[MAXLEN];

void configMenu();

#endif // CONFIG_H_