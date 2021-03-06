/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import </libobjc.A.h>
#import "SafeVMUProcInfoProtocol.h"

@class NSString, NSArray;

@interface VMUProcInfo : NSObject <SafeVMUProcInfoProtocol> {
	unsigned _task;	// 4 = 0x4
	BOOL _needTaskPortDealloc;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	int _cpuType;	// 16 = 0x10
	NSArray *_arguments;	// 20 = 0x14
	NSArray *_envVars;	// 24 = 0x18
	NSString *_procTableName;	// 28 = 0x1c
	NSString *_realAppName;	// 32 = 0x20
	NSString *_requestedAppName;	// 36 = 0x24
	NSString *_firstArg;	// 40 = 0x28
	int _pid;	// 44 = 0x2c
	int _ppid;	// 48 = 0x30
	timeval _startTime;	// 52 = 0x34
}
@property(readonly, retain) NSArray *arguments;	// G=0x3292367d; converted property
@property(readonly, assign) int cpuType;	// G=0x32923c11; converted property
@property(readonly, retain) NSArray *envVars;	// G=0x329236c5; converted property
@property(readonly, retain) NSString *name;	// G=0x329238c9; converted property
@property(readonly, assign) int pid;	// G=0x329239d5; converted property
@property(readonly, assign) int ppid;	// G=0x329239e5; converted property
@property(readonly, retain) NSString *procTableName;	// G=0x3292312d; converted property
@property(readonly, retain) NSString *realAppName;	// G=0x32923541; converted property
@property(readonly, retain) NSString *requestedAppName;	// G=0x329235b5; converted property
@property(readonly, assign) timeval startTime;	// G=0x32923015; converted property
@property(readonly, assign) unsigned task;	// G=0x329239f5; converted property
+ (id)getProcessIds;	// 0x32922e35
+ (BOOL)isProcessRunning:(int)running;	// 0x32922f5d
+ (int)processParentId:(int)anId;	// 0x32922fb9
- (id)init;	// 0x32922c39
- (id)initWithPid:(int)pid;	// 0x32922c65
- (id)initWithTask:(unsigned)task;	// 0x32922c91
- (id)_infoFromCommandLine:(int)commandLine;	// 0x32923259
// converted property getter: - (id)arguments;	// 0x3292367d
- (int)compare:(id)compare;	// 0x32923db9
- (int)compareByName:(id)name;	// 0x32923e0d
- (int)compareByUserAppName:(id)name;	// 0x32923e49
// converted property getter: - (int)cpuType;	// 0x32923c11
- (void)dealloc;	// 0x32922cdd
- (id)description;	// 0x3292397d
// converted property getter: - (id)envVars;	// 0x329236c5
- (void)finalize;	// 0x32922dd5
- (id)firstArgument;	// 0x32923629
- (unsigned)hash;	// 0x32923e85
- (BOOL)isApp;	// 0x32923b95
- (BOOL)isCFM;	// 0x32923bbd
- (BOOL)isEqual:(id)equal;	// 0x32923d49
- (BOOL)isMachO;	// 0x32923b99
- (BOOL)isNative;	// 0x32923cb1
- (BOOL)isRunning;	// 0x32923cb5
// converted property getter: - (id)name;	// 0x329238c9
// converted property getter: - (int)pid;	// 0x329239d5
// converted property getter: - (int)ppid;	// 0x329239e5
// converted property getter: - (id)procTableName;	// 0x3292312d
// converted property getter: - (id)realAppName;	// 0x32923541
// converted property getter: - (id)requestedAppName;	// 0x329235b5
- (BOOL)signal:(int)signal;	// 0x32923d25
// converted property getter: - (timeval)startTime;	// 0x32923015
// converted property getter: - (unsigned)task;	// 0x329239f5
- (BOOL)terminate;	// 0x32923ce9
- (void)update;	// 0x32923a75
- (id)userAppName;	// 0x3292386d
- (id)valueForEnvVar:(id)envVar;	// 0x3292370d
@end

