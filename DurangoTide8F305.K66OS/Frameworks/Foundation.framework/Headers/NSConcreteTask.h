/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSTask.h"
#import "Foundation-Structs.h"

@class NSPort, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSConcreteTask : NSTask {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	BOOL _hasExeced;	// 8 = 0x8
	BOOL _isRunning;	// 9 = 0x9
	BOOL _hasPostedDeathNotification;	// 10 = 0xa
	BOOL _padding[1];	// 11 = 0xb
	int _suspendCount;	// 12 = 0xc
	int _pid;	// 16 = 0x10
	int _platformExitInfo;	// 20 = 0x14
	dispatch_source_s *_dsrc;	// 24 = 0x18
	NSPort *_tmpPort;	// 28 = 0x1c
}
@property(retain) id arguments;	// G=0x327cc98d; S=0x327ccdf9; converted property
@property(retain) id currentDirectoryPath;	// G=0x327cc8c5; S=0x327ccc41; converted property
@property(retain) id environment;	// G=0x327cc9f1; S=0x327ccb7d; converted property
@property(readonly, assign) BOOL isRunning;	// G=0x327cc065; converted property
@property(retain) id launchPath;	// G=0x327cca55; S=0x327ccab9; converted property
@property(retain) id preferredArchitectures;	// G=0x327cc929; S=0x327ccd05; converted property
@property(retain) id standardError;	// G=0x327cc4a9; S=0x327cc5d5; converted property
@property(retain) id standardInput;	// G=0x327cc571; S=0x327cc715; converted property
@property(retain) id standardOutput;	// G=0x327cc50d; S=0x327cc675; converted property
@property(readonly, assign) int suspendCount;	// G=0x327cc085; converted property
@property(retain) id taskDictionary;	// G=0x327cc7c9; S=0x327cc845; converted property
- (id)init;	// 0x327cc3dd
- (int)_platformExitInformation;	// 0x327cd295
- (int)_procid;	// 0x327cc495
// converted property getter: - (id)arguments;	// 0x327cc98d
// converted property getter: - (id)currentDirectoryPath;	// 0x327cc8c5
- (void)dealloc;	// 0x327ce545
// converted property getter: - (id)environment;	// 0x327cc9f1
- (void)finalize;	// 0x327ce471
- (void)interrupt;	// 0x327cd595
// converted property getter: - (BOOL)isRunning;	// 0x327cc065
- (void)launch;	// 0x327ccf41
// converted property getter: - (id)launchPath;	// 0x327cca55
- (void)launchWithDictionary:(id)dictionary;	// 0x327cd635
// converted property getter: - (id)preferredArchitectures;	// 0x327cc929
- (int)processIdentifier;	// 0x327cc095
- (BOOL)resume;	// 0x327cd491
// converted property setter: - (void)setArguments:(id)arguments;	// 0x327ccdf9
// converted property setter: - (void)setCurrentDirectoryPath:(id)path;	// 0x327ccc41
// converted property setter: - (void)setEnvironment:(id)environment;	// 0x327ccb7d
// converted property setter: - (void)setLaunchPath:(id)path;	// 0x327ccab9
// converted property setter: - (void)setPreferredArchitectures:(id)architectures;	// 0x327ccd05
// converted property setter: - (void)setStandardError:(id)error;	// 0x327cc5d5
// converted property setter: - (void)setStandardInput:(id)input;	// 0x327cc715
// converted property setter: - (void)setStandardOutput:(id)output;	// 0x327cc675
- (void)setStartsNewProcessGroup:(BOOL)group;	// 0x327cc435
// converted property setter: - (void)setTaskDictionary:(id)dictionary;	// 0x327cc845
// converted property getter: - (id)standardError;	// 0x327cc4a9
// converted property getter: - (id)standardInput;	// 0x327cc571
// converted property getter: - (id)standardOutput;	// 0x327cc50d
- (BOOL)suspend;	// 0x327cd4d5
// converted property getter: - (int)suspendCount;	// 0x327cc085
// converted property getter: - (id)taskDictionary;	// 0x327cc7c9
- (void)terminate;	// 0x327cd509
- (void)terminateTask;	// 0x327cc7b5
- (int)terminationReason;	// 0x327cd1ad
- (int)terminationStatus;	// 0x327cd359
- (void)waitUntilExit;	// 0x327ce705
@end

