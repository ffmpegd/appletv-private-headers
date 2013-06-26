/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
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
@property(readonly, retain) NSArray *arguments;	// G=0x355a3add; converted property
@property(readonly, assign) int cpuType;	// G=0x355a3f09; converted property
@property(readonly, retain) NSArray *envVars;	// G=0x355a3b25; converted property
@property(readonly, retain) NSString *name;	// G=0x355a3bc9; converted property
@property(readonly, assign) int pid;	// G=0x355a3ccd; converted property
@property(readonly, assign) int ppid;	// G=0x355a3cdd; converted property
@property(readonly, retain) NSString *procTableName;	// G=0x355a35c1; converted property
@property(readonly, retain) NSString *realAppName;	// G=0x355a399d; converted property
@property(readonly, retain) NSString *requestedAppName;	// G=0x355a3a11; converted property
@property(readonly, assign) timeval startTime;	// G=0x355a34a5; converted property
@property(readonly, assign) unsigned task;	// G=0x355a3ced; converted property
+ (id)getProcessIds;	// 0x355a32c5
+ (BOOL)isProcessRunning:(int)running;	// 0x355a33ed
+ (int)processParentId:(int)anId;	// 0x355a3449
- (id)init;	// 0x355a30c9
- (id)initWithPid:(int)pid;	// 0x355a30f5
- (id)initWithTask:(unsigned)task;	// 0x355a3121
- (id)_infoFromCommandLine:(int)commandLine;	// 0x355a36ed
// converted property getter: - (id)arguments;	// 0x355a3add
- (int)compare:(id)compare;	// 0x355a40bd
- (int)compareByName:(id)name;	// 0x355a4111
- (int)compareByUserAppName:(id)name;	// 0x355a414d
// converted property getter: - (int)cpuType;	// 0x355a3f09
- (void)dealloc;	// 0x355a316d
- (id)description;	// 0x355a3c79
// converted property getter: - (id)envVars;	// 0x355a3b25
- (void)finalize;	// 0x355a3265
- (id)firstArgument;	// 0x355a3a85
- (unsigned)hash;	// 0x355a4189
- (BOOL)isApp;	// 0x355a3e8d
- (BOOL)isCFM;	// 0x355a3eb5
- (BOOL)isEqual:(id)equal;	// 0x355a404d
- (BOOL)isMachO;	// 0x355a3e91
- (BOOL)isNative;	// 0x355a3fb9
- (BOOL)isRunning;	// 0x355a3fbd
// converted property getter: - (id)name;	// 0x355a3bc9
// converted property getter: - (int)pid;	// 0x355a3ccd
// converted property getter: - (int)ppid;	// 0x355a3cdd
// converted property getter: - (id)procTableName;	// 0x355a35c1
// converted property getter: - (id)realAppName;	// 0x355a399d
// converted property getter: - (id)requestedAppName;	// 0x355a3a11
- (BOOL)signal:(int)signal;	// 0x355a4029
// converted property getter: - (timeval)startTime;	// 0x355a34a5
// converted property getter: - (unsigned)task;	// 0x355a3ced
- (BOOL)terminate;	// 0x355a3ff1
- (void)update;	// 0x355a3d6d
- (id)userAppName;	// 0x355a3b6d
@end
