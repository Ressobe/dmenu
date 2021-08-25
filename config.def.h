/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=13", "fontawesome:size=15"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

//#include "/home/relow/.cache/wal/colors-wal-dmenu.h"
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#a89984", "#282828" },
	[SchemeSel] = { "#a89984", "#cc241d" },
	[SchemeOut] = { "#a89984", "#689d6a" },
};
/*static const char *colors[SchemeLast][2] = {
	//     fg         bg       
  [SchemeNorm] = { "#c2a2bc", "#030415" },
	[SchemeSel] = { "#c2a2bc", "#99352B" },
	[SchemeOut] = { "#c2a2bc", "#365393" },	
	[SchemeHp] = { "#bbbbbb", "#333333" }
};*/
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
