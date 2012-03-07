/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface BREvent : NSObject {
@private
	NSDictionary *_eventDictionary;	// 4 = 0x4
	int _action;	// 8 = 0x8
	double _timeStamp;	// 12 = 0xc
	int _value;	// 20 = 0x14
	unsigned _originator;	// 24 = 0x18
	BOOL _allowRetrigger;	// 28 = 0x1c
	BOOL _retrigger;	// 29 = 0x1d
}
@property(readonly, assign) BOOL allowRetrigger;	// G=0x341c0c85; converted property
@property(readonly, retain) NSDictionary *eventDictionary;	// G=0x341c0c75; converted property
@property(readonly, assign) unsigned originator;	// G=0x341c0c65; converted property
@property(readonly, assign) double timeStamp;	// G=0x341c0c4d; converted property
@property(readonly, assign) int value;	// G=0x341c0c19; converted property
+ (id)eventWithAction:(int)action value:(int)value;	// 0x341c0545
+ (id)eventWithAction:(int)action value:(int)value atTime:(double)time;	// 0x341c0585
+ (id)eventWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator;	// 0x341c05d1
+ (id)eventWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator eventDictionary:(id)dictionary allowRetrigger:(BOOL)retrigger;	// 0x341c0621
+ (id)eventWithEvent:(id)event originator:(unsigned)originator;	// 0x341c0719
+ (id)eventWithEvent:(id)event originator:(unsigned)originator eventDictionary:(id)dictionary allowRetrigger:(BOOL)retrigger;	// 0x341c067d
- (id)initWithAction:(int)action value:(int)value;	// 0x341c07dd
- (id)initWithAction:(int)action value:(int)value atTime:(double)time;	// 0x341c0811
- (id)initWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator;	// 0x341c083d
- (id)initWithAction:(int)action value:(int)value atTime:(double)time originator:(unsigned)originator eventDictionary:(id)dictionary allowRetrigger:(BOOL)retrigger;	// 0x341c0879
// converted property getter: - (BOOL)allowRetrigger;	// 0x341c0c85
- (void)dealloc;	// 0x341c0925
- (id)description;	// 0x341c0971
// converted property getter: - (id)eventDictionary;	// 0x341c0c75
- (BOOL)isEqual:(id)equal;	// 0x341c0b85
- (void)makeRetriggerEvent;	// 0x341c0c39
// converted property getter: - (unsigned)originator;	// 0x341c0c65
- (int)remoteAction;	// 0x341c0c09
- (BOOL)retriggerEvent;	// 0x341c0c29
// converted property getter: - (double)timeStamp;	// 0x341c0c4d
// converted property getter: - (int)value;	// 0x341c0c19
@end

