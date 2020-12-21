/*
 * Rog-O-Matic
 * Automatically exploring the dungeons of doom.
 *
 * Copyright (C) 2008 by Anthony Molinaro
 * Copyright (C) 1985 by Appel, Jacobson, Hamey, and Mauldin.
 *
 * This file is part of Rog-O-Matic.
 *
 * Rog-O-Matic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Rog-O-Matic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Rog-O-Matic.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * globals.h:
 *
 * Global variables
 */

/* global files */
extern FILE *trogue;	/* From Rogue, To Rogue */
extern FILE *logfile;		/* Rogomatic score file */
extern FILE *realstdout;	/* Real stdout when in terse or emacs mode */
extern FILE *snapshot;		/* File for snapshot command */
FILE *wopen();			/* Open a file for world access */

/* global characters and strings */
extern char afterid;		/* Index of object after identify */
extern char *genocide;		/* List of monsters to genocide */
extern char genocided[];	/* List of monsters genocided */
extern char lastcmd[];		/* Copy of last command sent to Rogue */
extern char lastname[];		/* Name of last potion/scroll/wand */
extern char nextid;		/* Next object to identify */
extern char ourkiller[];	/* What was listed on the tombstone */
extern char *parmstr;		/* Pointer to argument space */
extern char pending_call_letter;	/* Pack object we know a name for */
extern char pending_call_name[];	/* Pack object name for letter */
extern char queue[];		/* stuff to be sent to Rogue */
extern char roguename[];		/* Name we are playing under */
extern char screen[24][80];	/* characters drawn by Rogue */
extern char sumline[];		/* Summation line */
extern char *termination;	/* Latin verb for how we died */
extern char versionstr[];	/* Version of Rogue we are playing */

/* character and string functions */
extern int getlogtoken();
extern char *getname(), *itemstr();
extern char logchar();
extern char* monname(char c);
extern char* findentry_getfakename();
extern char* findentry_getrealname();
extern int stlmatch(char* big, char* small);

/* double precision floating point functions */
double prob(), mean(), stdev();	/* For stats.c */

/* global integers */
extern int aggravated;		/* True if we aggravated this level */
extern int agoalr,agoalc;	/* where we killed a monster */
extern int ammo;		/* Number of missiles in pack */
extern int arglen;		/* Length of argument space */
extern int arrowshot;		/* True if trap fired at us this round */
extern int atrow,atcol;		/* where is the '@'? (us) */
extern int atrow0,atcol0;	/* where was the '@' last time */
extern int attempt;		/* # times have we explored this level */
extern int badarrow;		/* True if we missed with this arrow */
extern int beingheld;		/* True if being held by a fungus */
extern int beingstalked;	/* True if an Invisible Stalker is around */
extern int blinded;		/* True if blinded */
extern int blindir;		/* Last direction we moved when blind */
extern int cancelled;		/* Turns till use cancellation again */
extern int cheat;		/* True ==> cheat to win */
extern int checkrange;		/* True ==> check range */
extern int chicken;		/* True ==> test run away code */
extern int compression;		/* True ==> move multiple squares */
extern int confused;		/* True if confused */
extern int cosmic;		/* True if hallucinating */
extern int currentarmor;	/* Index of our armor */
extern int currentweapon;	/* Index of our weapon */
extern int cursedarmor;		/* True if armor is cursed */
extern int cursedweapon;	/* True if weapon if cursed */
extern int darkdir;		/* Direction of arrow in dark room */
extern int darkturns;		/* # arrows left to fire in dark room */
extern int debugging;		/* Debugging options in effect */
extern int didreadmap;		/* Last magically mapped level */
extern int doorlist[], *newdoors; /* Holds r,c of new doors found */
extern int doublehasted;	/* True if double hasted (3.6 only) */
extern int droppedscare;	/* Number of scare mon. on this level */
extern int diddrop;	/* If we've dropped anything on this spot */
extern int emacs;		/* True if in emacs mode */
extern int exploredlevel;	/* We completely explored this level */
extern int floating;		/* True if we are levitating */
extern int foughtmonster;	/* True if we recently fought a monster */
extern int foundarrowtrap;	/* Well, did we? */
extern int foundtrapdoor;	/* Well, did we? */
extern int goalr,goalc;		/* where are we trying to go */
extern int goodarrow;		/* Number of times we killed in one blow */
extern int goodweapon;		/* Used for two-handed sword */
extern int gplusdam;		/* Global damage bonus */
extern int gplushit;		/* Global hit bonus */
extern int hasted;		/* True if hasted */
extern int head,tail;		/* endpoints of circular queue */
extern int hitstokill;		/* Number of hits to kill last monster */
extern int interrupted;		/* True if at commandtop from onintr() */
extern int knowident;		/* Found an identify scroll? */
extern int larder;		/* Number of foods left */
extern int lastate;		/* Time we last ate */
extern int lastdamage;		/* Amount of last hit by a monster */
extern int lastdrop;		/* What did we last try to drop */
extern int lastfoodlevel;	/* Last food found */
extern int lastmonster;		/* Last monster we tried to hit */
extern int lastobj;		/* What did we last try to use */
extern int lastwand;		/* Index of last wand */
extern int leftring;		/* Index of our left ring */
extern int logdigested;		/* True if game log has been read by replay */
extern int logging;		/* True if logging game */
extern int lyinginwait;		/* Did we lie in wait last turn? */
extern int maxobj;		/* How much can we carry */
extern int missedstairs;	/* True if we missed the stairs */
extern int morecount;		/* Number of messages since last command */
extern int msgonscreen;		/* There is a rogomatic msg on the screen */
extern int newarmor;		/* True if our armor status has changed */
extern int newring;		/* True if our ring status has changed */
extern int newweapon;		/* True if our weapon status has changed */
extern int nohalf;		/* True if no halftime show */
extern int noterm;		/* True if no human watching */
extern int objcount;		/* Number of objects */
extern int ourscore;		/* Our score when we died/quit */
extern int playing;		/* True if still playing the game */
extern int poorarrow;		/* # Times we failed to kill in one blow */
extern int protected;		/* True if we protected our armor */
extern int putonseeinv;		/* Time when last put on see invisible ring */
extern int quitat;		/* Score we are trying to beat */
extern int redhands;		/* True if our hands are red */
extern int replaying;		/* True if replaying old game */
extern int revvideo;		/* True if in rev. video mode */
extern int rightring;		/* Index of our right ring */
extern int rogpid;		/* Process id of Rogue process */
extern int room[];		/* Flags for each room */
extern int row,col;		/* where is the cursor? */
extern int scrmap[24][80];	/* attribute flags for squares */
extern int slowed;		/* True if we recently slowed a monster */
extern int stairrow,staircol;	/* Where is the staircase */
extern int teleported;		/* times teleported on this level */
extern int terse;		/* True if in terse mode */
extern int transparent;		/* True ==> user mode */
extern int trapc;		/* Col of last trap */
extern int trapr;		/* Row of last trap */
extern int urocnt;		/* Un-identified Rogue Object count */
extern int usesynch;		/* Have we finished using something? */
extern int usingarrow;		/* True if wielding an arrow from a trap */
extern int version;		/* From types.h, set by getrougeversion */
extern int wplusdam;		/* Weapon damage bonus */
extern int wplushit;		/* Weapon hit bonus */
extern int zone;		/* Current zone (0 to 8) */
extern int zonemap[9][9];	/* Connectivity map */

/* Status line variables */
extern int Level,MaxLevel,Gold,Hp,Hpmax,Str,Strmax,Ac,Exp,Explev;
extern char Ms[];		/* Msg 'X', 'Hungry', 'Weak', 'Fainting' */
extern int turns;		/* Est time in Rogue turns since start */

/* Geometry data */
extern int deltc[], deltr[];	/* Displacements for directions */
extern int deltrc[];		/* ditto */
extern char keydir[];		/* Directions for motion keys */
extern int movedir;		/* Which direction did we last move */
extern stuff translate[];	/* what Rogue characters represent */

/* Time history */
extern timerec timespent[];

/* Objects in pack */
extern invrec inven[];	extern int invcount;

/* Stuff on this level */
extern stuffrec slist[]; extern int slistlen;

/* Monster on this level */
extern monrec mlist[];	extern int mlistlen;

extern char	killedmonster, targetmonster;

/* Door search variables */
extern int	new_mark, new_findroom, new_search, new_stairs, new_arch;
extern char	timessearched[24][80], timestosearch;
extern int	searchstartr, searchstartc;
extern int	reusepsd;

/* Results of last makemove */
extern int	ontarget, targetrow, targetcol;

/* Monster attribute and Long term memory arrays */
extern attrec monatt[];		/* Monster attributes */
extern lrnrec ltm;		/* Long term memory -- general */
extern ltmrec monhist[]; 	/* Long term memory -- creatures */
extern ltmrec delhist[]; 	/* Long term memory -- changes this game */
extern int nextmon;		/* Length of LTM */
extern int monindex[];		/* Index into monhist array */

/* Genetic learning arrays */
extern int knob[];		/* Knobs */
extern int k_srch;		/* Propensity for searching squares */
extern int k_door;		/* Propensity for searching doors */
extern int k_rest;		/* Propensity for resting */
extern int k_arch;		/* Propensity for firing arrows */
extern int k_exper;		/* Level on which to experiment with items */
extern int k_run;		/* Propensity for retreating */
extern int k_wake;		/* Propensity for waking things up */
extern int k_food;		/* Propensity for hoarding food (rings) */

/* arms functions */
extern int weaponclass(int i);
extern void setbonuses();
extern int havearmor(int k, int print, int rustproof);
extern int havering(int k, int print);
extern int haveweapon(int k, int print);
extern int havebow(int k, int print);
extern int havemissile ();
extern int havearrow ();
extern int armorclass (int i);
extern int bowclass (int i);
extern int ringclass (int i);

/* things functions */
extern int havenamed(stuff otype, char* name);
extern int havemult(stuff otype, char* name, int count);
extern int haveuseless ();
extern int wearing(char* name);
extern int havefood(int n);
extern int wielding(stuff otype);
extern int havemult (stuff otype, char* name, int count);
extern void dumpstuff();
extern void deletestuff(int row, int col);
extern void initstufflist();
extern int have (stuff otype);
extern int unknown (stuff otype);
extern int reads (int obj);
extern int havewand (char* name);
extern int point (int obj, int dir);
extern void addstuff (char ch, int row, int col);
extern int willrust(int i);
extern int takeoff ();
extern void display (char* s);
extern int quaff (int obj);
extern int puton (int obj);
extern int drop (int obj);
extern int wield (int obj);
extern int throw (int obj, int dir);
extern int hungry ();
extern int fainting ();
extern int removering (int ring);
extern int prepareident (int obj, int iscroll);
extern int unidentified (stuff otype);
extern int haveother (stuff otype, int other);
extern int haveminus ();
extern int pickident ();

/* command functions */
extern void command(int tmode, char* f, ...);
extern void showcommand(char* c);
extern void fmove(int d);
extern void rmove(int count, int d, int mode);
extern void mmove(int d, int mode);
extern void move1 (int d);
extern int replaycommand ();

/* debug functions */
extern int dwait (int msgtype, char* f, ...);
extern void debuglog (const char *fmt, ...);
extern void toggledebug();
extern void promptforflags();
extern int getscrpos(char* msg, int* r, int* c);
extern void dumpflags(int row, int col);
extern void timehistory(FILE* f, char sep);

/* debuglog functions */
extern void debuglog_open (const char *log);
extern void debuglog_close();

/* monster functions */
extern void sleepmonster();
extern void wakemonster(int dir);
extern void dumpmonster();
extern void holdmonsters ();

/* io functions */
extern void rogo_send(char* f, ...);
extern void say(char* f, ...);
extern void saynow(char* f, ...);
extern void at(int row, int col);
extern void printsnap (FILE* f);
extern void quitrogue (char* reason, int gld, int terminationtype);
extern void dumpwalls();
extern void dosnapshot();
extern void sendnow(char* f, ...);
extern void getrogue(char* waitstr, int onat);
extern void clearscreen();
extern void terpbot();
extern void redrawscreen();
extern void pauserogue();
extern void startreplay (FILE** logf, char* logfname);
extern void toggleecho();
extern void getrogver();
extern int resend();
extern int charsavail();
extern void givehelp();
extern void clearsendqueue();
extern void waitfor (char* mess);

/* pack functions */
extern void deleteinv(int pos);
extern void removeinv (int pos);
extern void dumpinv(FILE* f);
extern void doresetinv();
extern void resetinv();
extern int inventory (char* msgstart, char* msgend);

/* rogue token functions */
extern void getoldcommand(char* c);
extern void rogue_log_write_command (char c);
extern int rogue_log_open (const char *filename);
extern void rogue_log_close();
extern void open_frogue_fd(int fd);
extern void open_frogue_debuglog(const char* fn);
extern void close_frogue_debuglog();

/* database functions */
extern void useobj (char* str);
extern int used (char* codename);
extern void dumpdatabase ();
extern void infername (char* codename, char* name, stuff item_type);
extern void addobj (char* codename, int pack_index, stuff item_type);
extern int know (char* name);

/* config functions */
extern const char* getRgmDir();

/* mess functions */
extern void summary (FILE* f, char sep);
extern void terpmes();
extern void versiondep();
extern void infer (char* objname, stuff item_type);
extern void killed (char* monster);

/* survival functions */
extern int markcycles(int print);

/* search functions */
extern int makemove (int movetype, int (*evalinit)(), int (*evaluate)(), int reevaluate);
extern int findmove (int movetype, int (*evalinit)(), int (*evaluate)(), int reevaluate);
extern void setnewgoal();
extern void cancelmove (int movetype);
extern int followmap (int movetype);

/* explore functions */
extern int expinit();
extern void avoidmonsters();
extern int zigzagvalue (int r, int c, int depth, int* val, int* avd, int* cont);
extern void pinavoid();
extern int setpsd(int print);
extern void unrest ();
extern int genericinit();
extern int sleepvalue();
extern int exploreroom ();
extern int findroom ();
extern int doorexplore ();
extern int gotowards (int r, int c, int running);
extern int archmonster (int m, int trns);
extern int findsafe ();
extern int movetorest ();

/* tactics functions */
extern int shootindark ();
extern int handleweapon ();
extern int handlearmor ();
extern int handlering ();
extern int light ();
extern int dinnertime ();
extern int quaffpotion ();
extern int readscroll ();
extern int grope (int turns);
extern int restup ();
extern int goupstairs (int running);
extern int godownstairs (int running);
extern int trywand ();
extern int gotowardsgoal ();
extern int gotocorner ();
extern int plunge ();
extern int findarrow ();
extern int checkcango (int dir, int turns);
extern int eat ();
extern int findring (char* name);
extern int wear (int obj);
extern int waitaround ();

/* strategy functions */
extern int strategize();
extern int archery ();
extern int battlestations (int m, char* monster, int mbad, int danger, int mdir, int mdist, int alert, int adj);

/* rooms functions */
extern void markmissingrooms();
extern int nextto (int type, int r, int c);
extern int mazedoor (int row, int col);
extern int canbedoor (int deadr, int deadc);
extern int whichroom (int r, int c);
extern int isexplored (int row, int col);
extern void markexplored (int row, int col);
extern int nexttowall (int r, int c);
extern int darkroom ();
extern int lightroom ();
extern void updatepos (char ch, int row, int col);
extern void updateat();
extern void currentrectangle();
extern void mapinfer();
extern void inferhall(int row, int col);
extern void newlevel();
extern void printexplored();
extern void dumpmazedoor();
extern void nametrap (int traptype, int standingonit);
extern void findstairs (int notr, int notc);
extern void foundnew ();
extern int point (int obj, int dir);
extern int haveexplored (int n);
extern int downright (int* drow, int* dcol);

/* ltm functions */
extern int findmonster(char* monster);
extern void analyzeltm();
extern void restoreltm();
extern void dumpmonstertable();
extern void saveltm(int score);
extern void mapcharacter (char ch, char* str);

/* stats functions */
extern void addprob (probability* p, int success);
extern void addstat (statistic* s, int datum);
extern void clearstat (statistic* s);
extern void parsestat (char* buf, statistic* s);
extern void writestat (FILE* f, statistic* s);
extern void writeprob (FILE* f, probability* p);
extern void parseprob (char* buf, probability* p);
extern void clearprob (probability* p);

/* scorefile functions */
extern void add_score (char* new_line, char* vers, int ntrm);
extern void dumpscore(char* vers);

/* utility functions */
extern void reset_int();
extern int fexists (char* fn);
extern void quit (int code, char* fmt, ...);
extern void critical();
extern void uncritical();
extern int lock_file (const char* lokfil, int maxtime);
extern void unlock_file (const char* lokfil);
extern void int_exit (void (*exitproc)(int));
extern int filelength (char* f);
extern int rogo_baudrate ();
extern int stlmatch (char* big, char* small);

/* rand functions */
extern int rogo_randint (int max);
extern void rogo_srand (int seed);

/* config functions */
extern const char* getLockFile();

/* replay functions */
extern void positionreplay();

/* learn functions */
extern int readgenes(char* genepool);
extern void initpool(int k, int m);
extern void setknobs(int* newid, int* knb, int* best, int* avg);
extern void evalknobs(int gid, int scorem, int level);
extern void writegenes(char* genepool);
extern void analyzepool (int full);
extern FILE* rogo_openlog(char* genelog);
extern void rogo_closelog();

/* monster functions */
extern int monsternum (char* monster);
extern int seemonster (char* monster);
extern void deletemonster (int r, int c);
extern int isholder (char* monster);
extern void newmonsterlevel ();
extern void addmonster (char ch, int r, int c, int quiescence);
extern int seeawakemonster (char* monster);

/* worth functions */
extern int worth (int obj);

/* survival functions */
extern int runaway ();
extern int backtodoor (int dist);
extern int canrun ();
extern int unpin ();

/* titlepage functions */
extern void halftimeshow (int level);

/* findscore functions */
extern int findscore (char* rogue, char* roguename);