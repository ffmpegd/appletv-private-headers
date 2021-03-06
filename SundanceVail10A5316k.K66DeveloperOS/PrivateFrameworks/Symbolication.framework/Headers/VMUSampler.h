/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSConditionLock, NSMutableArray, NSString, VMUTaskMemoryCache, VMUProcessDescription, NSMapTable;

@interface VMUSampler : NSObject {
	int _pid;	// 4 = 0x4
	unsigned _task;	// 8 = 0x8
	BOOL _needTaskPortDealloc;	// 12 = 0xc
	BOOL _recordThreadStates;	// 13 = 0xd
	BOOL _taskIs64Bit;	// 14 = 0xe
	NSString *_processName;	// 16 = 0x10
	VMUProcessDescription *_processDescription;	// 20 = 0x14
	CSTypeRef _symbolicator;	// 24 = 0x18
	VMUTaskMemoryCache *_memCache;	// 32 = 0x20
	sampling_context_t *_samplingContext;	// 36 = 0x24
	unsigned _mainThread;	// 40 = 0x28
	NSMapTable *_lastThreadBacktraceMap;	// 44 = 0x2c
	unsigned _numberOfCopiedBacktraces;	// 48 = 0x30
	unsigned *_previousThreadList;	// 52 = 0x34
	unsigned _previousThreadCount;	// 56 = 0x38
	unsigned _maxPreviousThreadCount;	// 60 = 0x3c
	double _tbRate;	// 64 = 0x40
	double _tbInterval;	// 72 = 0x48
	NSConditionLock *_stateLock;	// 80 = 0x50
	double _interval;	// 84 = 0x54
	double _timeLimit;	// 92 = 0x5c
	unsigned _sampleLimit;	// 100 = 0x64
	BOOL _sampling;	// 104 = 0x68
	unsigned _samplingThreadPort;	// 108 = 0x6c
	unsigned _numberOfSamples;	// 112 = 0x70
	NSMutableArray *_samples;	// 116 = 0x74
	BOOL _stacksFixed;	// 120 = 0x78
	void *_cfi;	// 124 = 0x7c
	id _delegate;	// 128 = 0x80
	double _timeSpentSamplingWithoutCFI;	// 132 = 0x84
	double _timeSpentSamplingWithCFI;	// 140 = 0x8c
	BOOL _shouldOutputSignature;	// 148 = 0x94
	BOOL _showDispatchQueueNames;	// 149 = 0x95
}
@property(assign) id delegate;	// G=0x313db5a1; S=0x313db591; converted property
@property(readonly, assign) unsigned mainThread;	// G=0x313db485; converted property
@property(readonly, assign) int pid;	// G=0x313db3d1; converted property
@property(assign) unsigned sampleLimit;	// G=0x313db379; S=0x313db369; converted property
@property(readonly, retain) NSMutableArray *samples;	// G=0x313db3e1; converted property
@property(assign) double samplingInterval;	// G=0x313db315; S=0x313db2f1; converted property
@property(assign) BOOL shouldOutputSignature;	// G=0x313db3a9; S=0x313db399; converted property
@property(readonly, assign) CSTypeRef symbolicator;	// G=0x313db3b9; converted property
@property(assign) double timeLimit;	// G=0x313db351; S=0x313db32d; converted property
+ (void)initialize;	// 0x313da7e5
+ (id)sampleAllThreadsOfPID:(int)pid;	// 0x313dade1
+ (id)sampleAllThreadsOfPID:(int)pid withSymbolicator:(id)symbolicator;	// 0x313dae35
+ (id)sampleAllThreadsOfTask:(unsigned)task;	// 0x313dae45
+ (id)sampleAllThreadsOfTask:(unsigned)task symbolicate:(BOOL)symbolicate;	// 0x313daea9
+ (id)sampleAllThreadsOfTask:(unsigned)task withSymbolicator:(id)symbolicator;	// 0x313dae99
+ (id)sampleAllThreadsOfTask:(unsigned)task withSymbolicator:(id)symbolicator symbolicate:(BOOL)symbolicate;	// 0x313daf09
- (id)initWithPID:(int)pid;	// 0x313d9cd1
- (id)initWithPID:(int)pid options:(unsigned)options;	// 0x313d9d15
- (id)initWithPID:(int)pid orTask:(unsigned)task options:(unsigned)options;	// 0x313d98c1
- (id)initWithTask:(unsigned)task;	// 0x313d9cf1
- (id)initWithTask:(unsigned)task options:(unsigned)options;	// 0x313d9d35
- (void)_fixupStacks:(id)stacks;	// 0x313da87d
- (void)_makeHighPriority;	// 0x313d9ec9
- (void)_makeTimeshare;	// 0x313d9ff9
- (void)_runSamplingThread;	// 0x313daa51
- (id)createOutput;	// 0x313db781
- (void)dealloc;	// 0x313d9d59
// converted property getter: - (id)delegate;	// 0x313db5a1
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)serialNumber;	// 0x313db569
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)serialNumber returnedConcurrentFlag:(BOOL *)flag returnedThreadId:(unsigned long long *)anId;	// 0x313db4fd
- (void)finalize;	// 0x313d9e89
- (void)flushData;	// 0x313db419
- (void)forceStop;	// 0x313db679
- (void)initializeSamplingContext:(BOOL)context;	// 0x313da02d
// converted property getter: - (unsigned)mainThread;	// 0x313db485
// converted property getter: - (int)pid;	// 0x313db3d1
- (void)preloadSymbols;	// 0x313db5b1
- (unsigned)recordSampleTo:(id)to beginTime:(double)time endTime:(double)time3 thread:(unsigned)thread;	// 0x313da0f1
- (id)sampleAllThreadsOnce;	// 0x313daf21
- (unsigned)sampleCount;	// 0x313db409
- (void)sampleForDuration:(unsigned)duration interval:(unsigned)interval;	// 0x313db5e9
// converted property getter: - (unsigned)sampleLimit;	// 0x313db379
- (id)sampleThread:(unsigned)thread;	// 0x313dafb1
// converted property getter: - (id)samples;	// 0x313db3e1
// converted property getter: - (double)samplingInterval;	// 0x313db315
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x313db591
- (void)setRecordThreadStates:(BOOL)states;	// 0x313db389
// converted property setter: - (void)setSampleLimit:(unsigned)limit;	// 0x313db369
// converted property setter: - (void)setSamplingInterval:(double)interval;	// 0x313db2f1
// converted property setter: - (void)setShouldOutputSignature:(BOOL)outputSignature;	// 0x313db399
// converted property setter: - (void)setTimeLimit:(double)limit;	// 0x313db32d
// converted property getter: - (BOOL)shouldOutputSignature;	// 0x313db3a9
- (BOOL)start;	// 0x313db0a1
- (BOOL)stop;	// 0x313db1d5
- (void)stopSampling;	// 0x313db669
- (id)stopSamplingAndReturnCallNode;	// 0x313db689
// converted property getter: - (CSTypeRef)symbolicator;	// 0x313db3b9
- (id)threadNameForThread:(unsigned)thread;	// 0x313db4dd
- (id)threadNameForThread:(unsigned)thread returnedThreadId:(unsigned long long *)anId returnedDispatchQueueSerialNum:(unsigned long long *)num;	// 0x313db495
// converted property getter: - (double)timeLimit;	// 0x313db351
- (BOOL)waitUntilDone;	// 0x313db265
- (void)writeOutput:(id)output append:(BOOL)append;	// 0x313dbcb5
@end

