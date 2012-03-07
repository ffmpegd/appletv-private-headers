/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVRemoteSet, NSMutableArray, NSTimer, ATVRCCapture;

@interface ATVRCManager : NSObject {
@private
	int _runState;	// 4 = 0x4
	ATVRCCapture *_trpCapture;	// 8 = 0x8
	NSMutableArray *_remoteSets;	// 12 = 0xc
	ATVRemoteSet *_learningSet;	// 16 = 0x10
	ATVRemoteSet *_appleRemoteSet;	// 20 = 0x14
	ATVRemoteSet *_temporaryActiveSet;	// 24 = 0x18
	BOOL _appleRemoteInUse;	// 28 = 0x1c
	NSTimer *_discontinuityTrigger;	// 32 = 0x20
	NSTimer *_ledResetTimer;	// 36 = 0x24
	unsigned short _customPage;	// 40 = 0x28
	unsigned short _customUsage;	// 42 = 0x2a
	BOOL _a39LegacyDispatch;	// 44 = 0x2c
	unsigned long _pairingUID;	// 48 = 0x30
	opaque_pthread_mutex_t _mutex;	// 52 = 0x34
}
@property(readonly, assign) BOOL appleRemoteInUse;	// G=0x340f4421; converted property
@property(readonly, retain) ATVRemoteSet *learningSet;	// G=0x340f3af9; converted property
@property(readonly, retain) NSMutableArray *remoteSets;	// G=0x340f4305; converted property
@property(assign) int state;	// G=0x340f3ac5; S=0x340f3a89; converted property
@property(readonly, retain) ATVRemoteSet *temporaryActiveSet;	// G=0x340f3f61; converted property
+ (id)sharedManager;	// 0x340f3539
- (id)init;	// 0x340f3581
- (void)_addRemoteSet:(id)set;	// 0x340f44d1
- (void)_clearActiveRemoteSets;	// 0x340f4a25
- (id)_defaultCustomName;	// 0x340f4ffd
- (void)_discontinuityTrigger:(id)trigger;	// 0x340f4709
- (void)_doSystemActivityNotification;	// 0x340f4869
- (void)_enterLearningState;	// 0x340f45b9
- (void)_eventRecognized:(BOOL)recognized;	// 0x340f506d
- (void)_exitLearningState;	// 0x340f4635
- (id)_findIdenticalActiveRemoteSet:(id)set;	// 0x340f4551
- (BOOL)_isCustomEvent:(id)event;	// 0x340f4f29
- (void)_ledReset:(id)reset;	// 0x340f5165
- (BOOL)_loadActiveRemoteSets;	// 0x340f4a7d
- (id)_loadAppleRemoteSet;	// 0x340f4e99
- (id)_loadRemoteSet:(id)set;	// 0x340f4df1
- (id)_maskToggleBits:(id)bits;	// 0x340f48e1
- (BOOL)_nameInExistsInSets:(id)sets;	// 0x340f4f81
- (void)_pairAppleRemote:(unsigned long)remote;	// 0x340f4465
- (BOOL)_processLearningEvent:(id)event;	// 0x340f47a5
- (void)_resetDiscontinuityTrigger;	// 0x340f4689
- (void)_resetLEDTimer;	// 0x340f50e5
- (BOOL)_saveActiveRemoteSets;	// 0x340f4bf5
- (void)_setState:(int)state;	// 0x340f4455
- (id)_setTemporaryActiveSet:(id)set;	// 0x340f450d
- (void)_unpairAppleRemote;	// 0x340f44ad
- (void)addRemoteSet:(id)set;	// 0x340f428d
// converted property getter: - (BOOL)appleRemoteInUse;	// 0x340f4421
- (void)applyCaptureToButton:(int)button;	// 0x340f3c45
- (void)applyCaptureToPlayButtonOnly;	// 0x340f3cd1
- (void)applyLearnedButtonsToSet:(id)set buttons:(NSRange)buttons;	// 0x340f3e35
- (id)applyLearningSet;	// 0x340f3d85
- (double)captureProgress;	// 0x340f3bad
- (id)capturedPatternSet;	// 0x340f3c01
- (void)dealloc;	// 0x340f36a9
- (void)endLearn;	// 0x340f3b75
- (id)findIdenticalActiveRemoteSet:(id)set;	// 0x340f42c9
- (int)findPatternInActiveSets:(id)activeSets;	// 0x340f4115
- (int)findPatternInActiveSets:(id)activeSets includeLearningSet:(BOOL)set excludeExtendedRemoteSet:(id)set3 excludeRange:(NSRange)range;	// 0x340f4139
- (id)identifyCapture:(int)capture;	// 0x340f3fdd
// converted property getter: - (id)learningSet;	// 0x340f3af9
- (void)pairAppleRemote:(unsigned long)remote;	// 0x340f43ad
- (BOOL)processEvent:(id)event;	// 0x340f3771
// converted property getter: - (id)remoteSets;	// 0x340f4305
- (void)removeRemoteSet:(id)set;	// 0x340f4235
- (void)resetLearningSet;	// 0x340f4339
- (void)setCustomPage:(unsigned short)page withUsage:(unsigned short)usage;	// 0x340f3a39
- (void)setName:(id)name remoteSet:(id)set;	// 0x340f3ee1
// converted property setter: - (void)setState:(int)state;	// 0x340f3a89
- (id)setTemporaryActiveSet:(id)set;	// 0x340f3f95
- (void)startLearn;	// 0x340f3b2d
// converted property getter: - (int)state;	// 0x340f3ac5
// converted property getter: - (id)temporaryActiveSet;	// 0x340f3f61
- (void)unpairAppleRemote;	// 0x340f43e9
@end

