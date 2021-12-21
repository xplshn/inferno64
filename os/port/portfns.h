Timer*		addclock0link(void (*)(void), int);
Path*	addelem(Path *p, char *s, Chan *from);
void		addprog(Proc*);
void		addrootfile(char*, uchar*, ulong);
Block*		adjustblock(Block*, int);
Block*		allocb(int);
int	anyhigher(void);
int	anyready(void);
void	_assert(char*);
int		blocklen(Block*);
int	breakhit(Ureg *ur, Proc*);
void		callwithureg(void(*)(Ureg*));
char*		chanpath(Chan*);
int		canlock(Lock*);
int		canqlock(QLock*);
void		cclose(Chan*);
int		canrlock(RWlock*);
void		chandevinit(void);
void		chandevreset(void);
void		chandevshutdown(void);
Dir*		chandirstat(Chan*);
void		chanfree(Chan*);
void		chanrec(Mnt*);
void		checkalarms(void);
void		checkb(Block*, char*);
void		cinit(void);
Chan*		cclone(Chan*);
void		cclose(Chan*);
void		ccloseq(Chan*);
void		closeegrp(Egrp*);
void		closefgrp(Fgrp*);
void		closemount(Mount*);
void		closepgrp(Pgrp*);
void		closesigs(Skeyset*);
void		cmderror(Cmdbuf*, char*);
int		cmount(Chan*, Chan*, int, char*);
Block*		concatblock(Block*);
void		confinit(void);
void		(*consdebug)(void);
int		copen(Chan*);
void		cclunk(Chan*);
Block*		copyblock(Block*, int);
int		cread(Chan*, uchar*, int, vlong);
void		ctrunc(Chan*);
Chan*	cunique(Chan*);
Chan*		createdir(Chan*, Mhead*);
void		cunmount(Chan*, Chan*);
void		cupdate(Chan*, uchar*, int, vlong);
void		cursorenable(void);
void		cursordisable(void);
void		cursoron(void);
void		cursoroff(void);
void		cwrite(Chan*, uchar*, int, vlong);
void		debugkey(Rune, char *, void(*)(), int);
s32		decref(Ref*);
Chan*		devattach(int, char*);
Block*		devbread(Chan*, s32, u32);
s32		devbwrite(Chan*, Block*, u32);
Chan*		devclone(Chan*);
void		devcreate(Chan*, char*, u32, u32);
void		devdir(Chan*, Qid, char*, vlong, char*, long, Dir*);
long		devdirread(Chan*, char*, long, Dirtab*, int, Devgen*);
Devgen		devgen;
void		devinit(void);
int		devno(int, int);
void	devpower(int);
Dev*	devbyname(char*);
Chan*		devopen(Chan*, int, Dirtab*, int, Devgen*);
void		devpermcheck(char*, u32, int);
void		devremove(Chan*);
void		devreset(void);
void		devshutdown(void);
int		devstat(Chan*, uchar*, int, Dirtab*, int, Devgen*);
Walkqid*	devwalk(Chan*, Chan*, char**, int, Dirtab*, int, Devgen*);
int		devwstat(Chan*, uchar*, int);
void		disinit(void*);
void		disfault(void*, char*);
void		drawactive(int);
void		drawcmap(void);
void		dumpaproc(Proc*);
void		dumpchan(char*, Chan*);
void		dumppgrp(char *s, Pgrp *p);
void		dumpstack(void);
Fgrp*		dupfgrp(Fgrp*);
void		egrpcpy(Egrp*, Egrp*);
int		emptystr(char*);
int		eqchan(Chan*, Chan*, int);
int		eqchantdqid(Chan*, int, int, Qid, int);
int		eqqid(Qid, Qid);
void		eqlock(QLock*);
void		error(char*);
void		errorf(char*, ...);
#pragma varargck argpos errorf 1
void		errstr(char*, int);
void		excinit(void);
void		exhausted(char*);
void		exit(int);
int		export(int, char*, int);
uvlong		fastticks(uvlong*);
uvlong		fastticks2ns(uvlong);
void		fdclose(Fgrp*, int, int);
Chan*		fdtochan(Fgrp*, int, int, int, int);
int		findmount(Chan**, Mhead**, int, int, Qid);
void		forceclosefgrp(void);
void		forthmain(void *);
void		free(void*);
void		freeb(Block*);
void		freeblist(Block*);
void		freeskey(Signerkey*);
void		getcolor(u32, u32*, u32*, u32*);
uintptr	getmalloctag(void*);
uintptr	getrealloctag(void*);
void		gotolabel(Label*);
char*		getconfenv(void);
void		halt(void);
void 		(*hwrandbuf)(void*, u32);
void		hnputl(void*, u32);
void		hnputs(void*, u16);
Block*		iallocb(int);
void		iallocsummary(void);
void		ilock(Lock*);
s32		incref(Ref*);
void		interrupted(void);
void		iomapinit(u32);
s32		ioreservewin(u32, u32, u32, u32, char*);
int		iprint(char*, ...);
#pragma varargck argpos iprint 1
void		isdir(Chan*);
int		iseve(void);
int		islo(void);
void		iunlock(Lock*);
void		ixsummary(void);
void		kbdclock(void);		/* will go away with kbdfs */
int		kbdcr2nl(Queue*, int);	/* will go away with kbdfs */
void		kbdprocesschar(int);	/* will go away with kbdfs */
int		kbdputc(Queue*, int);	/* will go away with kbdfs */
void		kbdrepeat(int);		/* will go away with kbdfs */
void		kproc(char*, void(*)(void*), void*, int);
int		kfgrpclose(Fgrp*, int);
void		kprocchild(Proc*, void (*)(void*), void*);
int		kprint(char*, ...);
void	(*kproftick)(ulong);
void		ksetenv(char*, char*, int);
void		kstrcpy(char*, char*, int);
void		kstrdup(char**, char*);
long		latin1(Rune*, int);
int		lock(Lock*);
void		logopen(Log*);
void		logclose(Log*);
char*		logctl(Log*, int, char**, Logflag*);
void		logn(Log*, int, void*, int);
long		logread(Log*, void*, ulong, long);
void		logb(Log*, int, char*, ...);
#define	pragma varargck argpos logb 3
Cmdtab*		lookupcmd(Cmdbuf*, Cmdtab*, int);
#define		MS2NS(n) (((s64)(n))*1000000LL)
void		machinit(void);
extern void	machbreakinit(void);
extern Instr	machinstr(ulong addr);
extern void	machbreakset(ulong addr);
extern void	machbreakclear(ulong addr, Instr i);
extern ulong	machnextaddr(Ureg *ur);
void*		malloc(ulong);
void*		mallocalign(uintptr, u32, s32, u32);
void*		mallocz(ulong, int);
Block*		mem2bl(uchar*, int);
void		memmapdump(void);
uintptr		memmapnext(uintptr, u32);
uintptr		memmapsize(uintptr, uintptr);
void		memmapadd(uintptr, uintptr, u32);
intptr		memmapalloc(uintptr, uintptr, uintptr, u32);
void		memmapfree(uintptr, uintptr, u32);
int			memusehigh(void);
void		microdelay(int);
uvlong		mk64fract(uvlong, uvlong);
void		mkqid(Qid*, s64, u32, u32);
void		modinit(void);
Chan*		mntattach(Chan*, Chan*, char*, int);
Chan*		mntauth(Chan*, char*);
int		mntversion(Chan*, char*, int, int);
void		mountfree(Mount*);
void		mousetrack(int, int, int, int);
ulong		ms2tk(ulong);
uvlong		ms2fastticks(ulong);
ulong		msize(void*);
void		mul64fract(uvlong*, uvlong, uvlong);
void		muxclose(Mnt*);
Chan*		namec(char*, int, int, ulong);
void		nameerror(char*, char*);
Chan*		newchan(void);
Egrp*		newegrp(void);
Fgrp*		newfgrp(Fgrp*);
int		newfd(Chan*, int);
Mhead*		newmhead(Chan*);
Mount*		newmount(Chan*, int, char*);
Path*		newpath(char*);
Pgrp*		newpgrp(void);
Proc*		newproc(void);
char*		nextelem(char*, char*);
void		nexterror(void);
Path*		newpath(char*);
int		notify(Ureg*);
void	notkilled(void);
int		nrand(int);
uvlong		ns2fastticks(uvlong);
int		okaddr(ulong, ulong, int);
u32		openmode(u32);
Block*		packblock(Block*);
Block*		padblock(Block*, int);
void		panic(char*, ...);
Cmdbuf*		parsecmd(char*, int);
void		pathclose(Path*);
ulong		perfticks(void);
void		pexit(char*, int);
void		pgrpcpy(Pgrp*, Pgrp*);
ulong		pidalloc(Proc*);
#define		waserror()	setlabel(&up->errlab[up->nerrlab++])
#define		poperror()	up->nerrlab--
int		poolread(char*, int, u64);
void		poolsize(Pool *, u64, int);
int		postnote(Proc *, int, char *, int);
int		pprint(char*, ...);
int		preempted(void);
int		preemption(int);
void		printinit(void);
void		procctl(Proc*);
void		procdump(void);
int		procindex(ulong);
void		procinit(void);
Proc*		proctab(int);
void	(*proctrace)(Proc*, int, vlong); 
int		progfdprint(Chan*, int, int, char*, int);
int		pullblock(Block**, int);
Block*		pullupblock(Block*, int);
Block*		pullupqueue(Queue*, int);
void		putmhead(Mhead*);
void		putstrn(char*, int);
int		qaddlist(Queue*, Block*);
Block*		qbread(Queue*, int);
long		qbwrite(Queue*, Block*);
Queue*	qbypass(void (*)(void*, Block*), void*);
int		qcanread(Queue*);
void		qclose(Queue*);
int		qconsume(Queue*, void*, int);
Block*		qcopy(Queue*, int, ulong);
int		qdiscard(Queue*, int);
void		qflush(Queue*);
void		qfree(Queue*);
int		qfull(Queue*);
Block*		qget(Queue*);
void		qhangup(Queue*, char*);
int		qisclosed(Queue*);
int		qiwrite(Queue*, void*, int);
int		qlen(Queue*);
void		qlock(QLock*);
void		qnoblock(Queue*, int);
Queue*		qopen(int, int, void (*)(void*), void*);
int		qpass(Queue*, Block*);
int		qpassnolim(Queue*, Block*);
int		qproduce(Queue*, void*, int);
void		qputback(Queue*, Block*);
long		qread(Queue*, void*, int);
Block*		qremove(Queue*);
void		qreopen(Queue*);
void		qsetlimit(Queue*, int);
void		qunlock(QLock*);
int		qwindow(Queue*);
int		qwrite(Queue*, void*, int);
void		randominit(void);
ulong	randomread(void*, ulong);
void		rdb(void);
void*	realloc(void*, ulong);
long		readblist(Block*, uchar*, long, ulong);
int		readnum(ulong, char*, ulong, ulong, int);
int		readnum_vlong(ulong, char*, ulong, vlong, int);
int		readstr(ulong, char*, ulong, char*);
void		ready(Proc*);
void		reboot(void);
void		renameproguser(char*, char*);
void		renameuser(char*, char*);
void		resrcwait(char*);
int		return0(void*);
void		rlock(RWlock*);
void		runlock(RWlock*);
Proc*		runproc(void);
void		sched(void);
void		schedinit(void);
long		seconds(void);
void		(*serwrite)(char*, int);
int		setcolor(u32, u32, u32, u32);
int		setlabel(Label*);
void		setmalloctag(void*, uintptr);
ulong		setnoteid(Proc*, ulong);
int		setpri(int);
void		setrealloctag(void*, uintptr);
void		setupwatchpts(Proc*, Watchpt*, int);
void	showconf(void);
void	shownotes(Proc*);
char*		skipslash(char*);
void		sleep(Rendez*, int(*)(void*), void*);
void*		smalloc(uintptr);
int		splhi(void);
int		spllo(void);
void		splx(int);
void	splxpc(int);
void		swiproc(Proc*, int);
int		_tas(int*);
void		timeradd(Timer*);
void		timerdel(Timer*);
void		timersinit(void);
void		timerintr(Ureg*, s64);
void		timerset(s64);
ulong	tk2ms(ulong);
#define		TK2MS(x) ((x)*(1000/HZ))
uvlong		tod2fastticks(vlong);
vlong		todget(vlong*);
void		todfix(void);
void		todsetfreq(vlong);
void		todinit(void);
void		todset(vlong, vlong, int);
int		tready(void*);
Block*		trimblock(Block*, int, int);
void		tsleep(Rendez*, int (*)(void*), void*, int);
int		uartctl(Uart*, char*);
int		uartgetc(void);
void		uartkick(void*);
void		uartmouse(char*, int (*)(Queue*, int), int);
void		uartsetmouseputc(char*, int (*)(Queue*, int));
void		uartputc(int);
void		uartputs(char*, int);
void		uartrecv(Uart*, char);
int		uartstageoutput(Uart*);
long		unionread(Chan*, void*, long);
void		unlock(Lock*);
void		userinit(void);
ulong		userpc(void);
void		validname(char*, int);
char*		validnamedup(char*, int);
void		validstat(uchar*, int);
void		validwstatname(char*);
Proc*		wakeup(Rendez*);
int		walk(Chan**, char**, int, int, int*);
void		werrstr(char*, ...);
void		wlock(RWlock*);
void		wunlock(RWlock*);
void*		xalloc(uintptr);
void*		xallocz(uintptr, s32);
void		xfree(void*);
void		xhole(uintptr, uintptr);
void		xinit(void);
int		xmerge(void*, void*);
void*		xspanalloc(uintptr, s32, uintptr);
void		xsummary(void);
 
void		validaddr(void*, ulong, int);
void*	vmemchr(void*, int, int);
void		hnputv(void*, u64);
u64		nhgetv(void*);
u32		nhgetl(void*);
u16		nhgets(void*);
