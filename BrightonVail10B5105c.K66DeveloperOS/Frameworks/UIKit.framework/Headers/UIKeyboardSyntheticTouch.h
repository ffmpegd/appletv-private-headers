/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIWindow;

__attribute__((visibility("hidden")))
@interface UIKeyboardSyntheticTouch : NSObject {
	double timestamp;	// 4 = 0x4
	int phase;	// 12 = 0xc
	unsigned tapCount;	// 16 = 0x10
	UIWindow *window;	// 20 = 0x14
	CGPoint locationInWindow;	// 24 = 0x18
	unsigned char _pathIndex;	// 32 = 0x20
	unsigned char _pathIdentity;	// 33 = 0x21
	float _pathMajorRadius;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) unsigned char _pathIdentity;	// G=0x347fb305; @synthesize
@property(readonly, assign, nonatomic) unsigned char _pathIndex;	// G=0x347fb2f5; @synthesize
@property(assign, nonatomic) float _pathMajorRadius;	// G=0x347fb315; S=0x347fb325; @synthesize
@property(assign, nonatomic) CGPoint locationInWindow;	// G=0x347fb2dd; S=0x347fb23d; @synthesize
@property(assign, nonatomic) int phase;	// G=0x347fb27d; S=0x347fb28d; @synthesize
@property(assign, nonatomic) unsigned tapCount;	// G=0x347fb29d; S=0x347fb2ad; @synthesize
@property(assign, nonatomic) double timestamp;	// G=0x347fb251; S=0x347fb269; @synthesize
@property(retain, nonatomic) UIWindow *window;	// G=0x347fb2bd; S=0x347fb2cd; @synthesize
+ (id)syntheticTouchWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x347fb08d
- (id)initWithPoint:(CGPoint)point timestamp:(double)timestamp window:(id)window;	// 0x347fb0e9
// declared property getter: - (unsigned char)_pathIdentity;	// 0x347fb305
// declared property getter: - (unsigned char)_pathIndex;	// 0x347fb2f5
// declared property getter: - (float)_pathMajorRadius;	// 0x347fb315
- (CGPoint)getLocationInWindow;	// 0x347fb225
- (CGPoint)locationInView:(id)view;	// 0x347fb175
// declared property getter: - (CGPoint)locationInWindow;	// 0x347fb2dd
// declared property getter: - (int)phase;	// 0x347fb27d
- (CGPoint)previousLocationInView:(id)view;	// 0x347fb1cd
// declared property setter: - (void)setLocationInWindow:(CGPoint)window;	// 0x347fb23d
// declared property setter: - (void)setPhase:(int)phase;	// 0x347fb28d
// declared property setter: - (void)setTapCount:(unsigned)count;	// 0x347fb2ad
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x347fb269
// declared property setter: - (void)setWindow:(id)window;	// 0x347fb2cd
// declared property setter: - (void)set_pathMajorRadius:(float)radius;	// 0x347fb325
// declared property getter: - (unsigned)tapCount;	// 0x347fb29d
// declared property getter: - (double)timestamp;	// 0x347fb251
// declared property getter: - (id)window;	// 0x347fb2bd
@end

