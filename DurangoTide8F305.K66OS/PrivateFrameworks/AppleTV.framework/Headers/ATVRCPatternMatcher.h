/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, ATVRCButtonPatternSet, NSTimer;
@protocol ATVRCPatternMatcherDelegate;

__attribute__((visibility("hidden")))
@interface ATVRCPatternMatcher : NSObject {
@private
	int _matchState;	// 4 = 0x4
	int _buttonState;	// 8 = 0x8
	ATVRCButtonPatternSet *_patternSet;	// 12 = 0xc
	long _matchIndex;	// 16 = 0x10
	NSTimer *_discontinuityTrigger;	// 20 = 0x14
	NSTimer *_holdTrigger;	// 24 = 0x18
	double _lastEventTimestamp;	// 28 = 0x1c
	unsigned _pairingMask;	// 36 = 0x24
	unsigned _payloadMask;	// 40 = 0x28
	unsigned _pairingID;	// 44 = 0x2c
	NSArray *_upEvents;	// 48 = 0x30
	NSArray *_holdEvents;	// 52 = 0x34
	NSArray *_downEvents;	// 56 = 0x38
	id<ATVRCPatternMatcherDelegate> _delegate;	// 60 = 0x3c
}
@property(retain) NSArray *downEvents;	// G=0x30765871; S=0x307665ed; converted property
@property(retain) NSArray *holdEvents;	// G=0x30765881; S=0x307665b5; converted property
@property(retain) ATVRCButtonPatternSet *patternSet;	// G=0x30765861; S=0x30766625; converted property
@property(retain) NSArray *upEvents;	// G=0x30765891; S=0x3076657d; converted property
+ (BOOL)findEventInSet:(id)set event:(id)event startIndex:(long)index numEventstoSearch:(long)search;	// 0x3076628d
+ (id)findFirstPattern:(id)pattern startIndex:(long)index minPatternLength:(long)length;	// 0x3076631d
+ (id)findRepeatPattern:(id)pattern startIndex:(long)index;	// 0x307663e5
+ (double)intervalBetweenFirstAndLastEvent:(id)event;	// 0x30766025
+ (double)intervalBetweenLastEvents:(id)events;	// 0x307660bd
+ (BOOL)matchEvent:(id)event withEvent:(id)event2;	// 0x30766165
+ (BOOL)matchPattern:(id)pattern pattern:(id)pattern2 atIndex:(long)index;	// 0x307661e1
- (id)initWithPatternSet:(id)patternSet delegate:(id)delegate;	// 0x30766729
- (void)_checkDiscontinuityTrigger:(id)trigger;	// 0x30766779
- (void)_clearDiscontinuityTrigger;	// 0x30765c15
- (void)_clearHoldTrigger;	// 0x30765b99
- (void)_commandPatternMatched;	// 0x30765cb9
- (double)_discontinuityTriggerInterval;	// 0x30765b11
- (void)_discontinuityTriggered;	// 0x30765a51
- (void)_dispatchEvents:(id)events;	// 0x307658c9
- (void)_holdTriggered;	// 0x307659d5
- (BOOL)_matchEvent:(id)event against:(id)against;	// 0x30765ddd
- (id)_processPairingInfo:(id)info uidMismatchStatus:(BOOL *)status;	// 0x30765e79
- (void)_resetDiscontinuityTrigger;	// 0x30765c41
- (void)_resetHoldTrigger;	// 0x30765bc5
- (void)dealloc;	// 0x307666a9
// converted property getter: - (id)downEvents;	// 0x30765871
- (void)forceReleaseState;	// 0x3076684d
// converted property getter: - (id)holdEvents;	// 0x30765881
// converted property getter: - (id)patternSet;	// 0x30765861
- (BOOL)processEvent:(id)event uidMismatchStatus:(BOOL *)status;	// 0x30766485
- (void)reset;	// 0x3076665d
- (void)setDelegate:(id)delegate;	// 0x30765851
// converted property setter: - (void)setDownEvents:(id)events;	// 0x307665ed
// converted property setter: - (void)setHoldEvents:(id)events;	// 0x307665b5
- (void)setPairingInfo:(unsigned long)info pairingMask:(unsigned long)mask payloadMask:(unsigned long)mask3;	// 0x307658a1
// converted property setter: - (void)setPatternSet:(id)set;	// 0x30766625
// converted property setter: - (void)setUpEvents:(id)events;	// 0x3076657d
// converted property getter: - (id)upEvents;	// 0x30765891
@end

