/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/*Enable blur*/
/* #define BLUR */
/*Set blur radius*/
static const int blurRadius=5;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=40;


/* text color */
static const char * text_color = "#4d6060";

/* text size (must be a valid size) */
/* static const char * font_name = "Courier Prime Code:pixelsize=22:antialias=true:autohint=true"; */
static const char * font_name = "Courier Prime Code:pixelsize=50";
