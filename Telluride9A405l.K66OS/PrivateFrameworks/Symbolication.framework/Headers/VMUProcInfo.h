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
@property(readonly, retain) NSArray *arguments;	// G=0x34f7b1b9; converted property
@property(readonly, assign) int cpuType;	// G=0x34f7ad89; converted property
@property(readonly, retain) NSArray *envVars;	// G=0x34f7b175; converted property
@property(readonly, retain) NSString *name;	// G=0x34f7b065; converted property
@property(readonly, assign) int pid;	// G=0x34f7a999; converted property
@property(readonly, assign) int ppid;	// G=0x34f7a9a9; converted property
@property(readonly, retain) NSString *procTableName;	// G=0x34f7b5d5; converted property
@property(readonly, retain) NSString *realAppName;	// G=0x34f7b2c5; converted property
@property(readonly, retain) NSString *requestedAppName;	// G=0x34f7b251; converted property
@property(readonly, assign) timeval startTime;	// G=0x34f7b6d5; converted property
@property(readonly, assign) unsigned task;	// G=0x34f7af99; converted property
+ (id)getProcessIds;	// 0x34f7aa6d
+ (BOOL)isProcessRunning:(int)running;	// 0x34f7aa2d
+ (int)processParentId:(int)anId;	// 0x34f7a9ed
- (id)init;	// 0x34f7a9c1
- (id)initWithPid:(int)pid;	// 0x34f7b971
- (id)initWithTask:(unsigned)task;	// 0x34f7b925
- (id)_infoFromCommandLine:(int)commandLine;	// 0x34f7b339
// converted property getter: - (id)arguments;	// 0x34f7b1b9
- (int)compare:(id)compare;	// 0x34f7ac25
- (int)compareByName:(id)name;	// 0x34f7abe1
- (int)compareByUserAppName:(id)name;	// 0x34f7ab9d
// converted property getter: - (int)cpuType;	// 0x34f7ad89
- (void)dealloc;	// 0x34f7b831
- (id)description;	// 0x34f7b00d
// converted property getter: - (id)envVars;	// 0x34f7b175
- (void)finalize;	// 0x34f7b7d1
- (id)firstArgument;	// 0x34f7b1fd
- (unsigned)hash;	// 0x34f7ab71
- (BOOL)isApp;	// 0x34f7a9b9
- (BOOL)isCFM;	// 0x34f7adfd
- (BOOL)isEqual:(id)equal;	// 0x34f7ac7d
- (BOOL)isMachO;	// 0x34f7ae45
- (BOOL)isNative;	// 0x34f7a9bd
- (BOOL)isRunning;	// 0x34f7ad51
// converted property getter: - (id)name;	// 0x34f7b065
// converted property getter: - (int)pid;	// 0x34f7a999
// converted property getter: - (int)ppid;	// 0x34f7a9a9
// converted property getter: - (id)procTableName;	// 0x34f7b5d5
// converted property getter: - (id)realAppName;	// 0x34f7b2c5
// converted property getter: - (id)requestedAppName;	// 0x34f7b251
- (BOOL)signal:(int)signal;	// 0x34f7aced
// converted property getter: - (timeval)startTime;	// 0x34f7b6d5
// converted property getter: - (unsigned)task;	// 0x34f7af99
- (BOOL)terminate;	// 0x34f7ad11
- (void)update;	// 0x34f7ae69
- (id)userAppName;	// 0x34f7b119
@end

