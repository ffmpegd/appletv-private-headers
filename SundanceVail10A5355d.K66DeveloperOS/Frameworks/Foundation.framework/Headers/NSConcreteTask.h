/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTask.h"

@class NSMutableDictionary, NSPort;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	BOOL _hasExeced;	// 8 = 0x8
	BOOL _isRunning;	// 9 = 0x9
	BOOL _hasPostedDeathNotification;	// 10 = 0xa
	BOOL _terminationRun;	// 11 = 0xb
	int _suspendCount;	// 12 = 0xc
	id _terminationHandler;	// 16 = 0x10
	int _pid;	// 20 = 0x14
	int _platformExitInfo;	// 24 = 0x18
	NSObject<OS_dispatch_source> *_dsrc;	// 28 = 0x1c
	NSPort *_tmpPort;	// 32 = 0x20
}
@property(retain) id arguments;	// G=0x346ea995; S=0x346ea431; converted property
@property(retain) id currentDirectoryPath;	// G=0x346eaa65; S=0x346ea649; converted property
@property(retain) id environment;	// G=0x346ea92d; S=0x346ea71d; converted property
@property(readonly, assign) BOOL isRunning;	// G=0x346e93b9; converted property
@property(retain) id launchPath;	// G=0x346ea8c5; S=0x346ea7f1; converted property
@property(retain) id preferredArchitectures;	// G=0x346ea9fd; S=0x346ea53d; converted property
@property(retain) id standardError;	// G=0x346eb091; S=0x346eaf09; converted property
@property(retain) id standardInput;	// G=0x346eafc1; S=0x346ead99; converted property
@property(retain) id standardOutput;	// G=0x346eb029; S=0x346eae51; converted property
@property(readonly, assign) int suspendCount;	// G=0x346ead89; converted property
@property(retain) id taskDictionary;	// G=0x346eab65; S=0x346eaacd; converted property
@property(retain) id terminationHandler;	// G=0x346e8ec9; S=0x346e8fa5; converted property
- (id)init;	// 0x346eb0f9
- (int)_platformExitInformation;	// 0x346e922d
- (int)_procid;	// 0x346eb231
// converted property getter: - (id)arguments;	// 0x346ea995
// converted property getter: - (id)currentDirectoryPath;	// 0x346eaa65
- (void)dealloc;	// 0x346eb125
// converted property getter: - (id)environment;	// 0x346ea92d
- (void)finalize;	// 0x346eb1b5
- (void)interrupt;	// 0x346eabe9
// converted property getter: - (BOOL)isRunning;	// 0x346e93b9
- (void)launch;	// 0x346e93dd
// converted property getter: - (id)launchPath;	// 0x346ea8c5
- (void)launchWithDictionary:(id)dictionary;	// 0x346e93fd
// converted property getter: - (id)preferredArchitectures;	// 0x346ea9fd
- (int)processIdentifier;	// 0x346eb241
- (BOOL)resume;	// 0x346ead45
// converted property setter: - (void)setArguments:(id)arguments;	// 0x346ea431
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x346ea649
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x346ea71d
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x346ea7f1
// converted property setter: - (void)setPreferredArchitectures:(id)architectures;	// 0x346ea53d
// converted property setter: - (void)setStandardError:(id)error;	// 0x346eaf09
// converted property setter: - (void)setStandardInput:(id)input;	// 0x346ead99
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x346eae51
- (void)setStartsNewProcessGroup:(BOOL)group;	// 0x346eb251
// converted property setter: - (void)setTaskDictionary:(id)dictionary;	// 0x346eaacd
// converted property setter: - (void)setTerminationHandler:(id)handler;	// 0x346e8fa5
// converted property getter: - (id)standardError;	// 0x346eb091
// converted property getter: - (id)standardInput;	// 0x346eafc1
// converted property getter: - (id)standardOutput;	// 0x346eb029
- (BOOL)suspend;	// 0x346ead09
// converted property getter: - (int)suspendCount;	// 0x346ead89
// converted property getter: - (id)taskDictionary;	// 0x346eab65
- (void)terminate;	// 0x346eac71
- (void)terminateTask;	// 0x346eacf9
// converted property getter: - (id)terminationHandler;	// 0x346e8ec9
- (int)terminationReason;	// 0x346e92e9
- (int)terminationStatus;	// 0x346e9159
- (void)waitUntilExit;	// 0x346ea2f9
@end

