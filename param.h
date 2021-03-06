
#define NPROC        64  // maximum number of processes
#define KSTACKSIZE 4096  // size of per-process kernel stack
#define NCPU          8  // maximum number of CPUs
#define NOFILE       16  // open files per process
#define NFILE       100  // open files per system
#define NINODE       50  // maximum number of active i-nodes
#define NDEV         10  // maximum major device number
#define ROOTDEV       1  // device number of file system root disk
#define MAXARG       32  // max exec arguments
#define MAXOPBLOCKS  10  // max # of blocks any FS op writes
#define LOGSIZE      (MAXOPBLOCKS*3)  // max data blocks in on-disk log
#define NBUF         (MAXOPBLOCKS*3)  // size of disk block cache
#define FSSIZE       1000 // size of file system in blocks
#define NUMSIG       32   // maximum number of signals for a single process.
#define SIGALRM      14   // alram signal number is 14
#define MAX_UTHREADS 64  //maximum number of concurrent user level threads
#define STACKSIZE 4096  // size of per-thread user stack
#define UTHREAD_QUANTA 5 // the number of ticks in the quanta of a preamptive user thread
#define MAX_BSEM     128 // max number of concurrent binary semphores