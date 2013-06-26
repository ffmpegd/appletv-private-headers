/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSArray, NSMutableArray;

@interface MRTouch : NSObject {
	NSMutableArray *_gestureRecognizers;	// 4 = 0x4
	CGPoint _location;	// 8 = 0x8
	double _timestamp;	// 16 = 0x10
	unsigned _tapCount;	// 24 = 0x18
	int _phase;	// 28 = 0x1c
}
@property(readonly, assign) NSArray *gestureRecognizers;	// G=0x333003c5; 
@property(assign, nonatomic) CGPoint location;	// G=0x33300585; S=0x3330059d; @synthesize=_location
@property(assign, nonatomic) int phase;	// G=0x333005fd; S=0x3330060d; @synthesize=_phase
@property(assign, nonatomic) unsigned tapCount;	// G=0x333005dd; S=0x333005ed; @synthesize=_tapCount
@property(assign, nonatomic) double timestamp;	// G=0x333005b1; S=0x333005c9; @synthesize=_timestamp
+ (id)touchWithLocation:(CGPoint)location timestamp:(double)timestamp tapCount:(unsigned)count;	// 0x333002e1
+ (id)touchWithUITouch:(id)uitouch inView:(id)view;	// 0x33300371
- (void)addGestureRecognizer:(id)recognizer;	// 0x333003f1
- (void)dealloc;	// 0x33300375
- (id)description;	// 0x3330047d
// declared property getter: - (id)gestureRecognizers;	// 0x333003c5
// declared property getter: - (CGPoint)location;	// 0x33300585
// declared property getter: - (int)phase;	// 0x333005fd
- (void)removeGestureRecognizer:(id)recognizer;	// 0x3330045d
// declared property setter: - (void)setLocation:(CGPoint)location;	// 0x3330059d
// declared property setter: - (void)setPhase:(int)phase;	// 0x3330060d
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x333005ed
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x333005c9
// declared property getter: - (unsigned)tapCount;	// 0x333005dd
// declared property getter: - (double)timestamp;	// 0x333005b1
@end
