/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIEvent : NSObject {
@private
	double _timestamp;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int subtype;	// G=0x32ea6b15; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x32d742fd; 
@property(readonly, assign, nonatomic) int type;	// G=0x32d2a1dd; 
- (GSEventRef)_gsEvent;	// 0x32ea6b2d
- (id)_init;	// 0x32ca5251
- (id)_initWithEvent:(GSEventRef)event touches:(id)touches;	// 0x32ea6b29
- (void)_setTimestamp:(double)timestamp;	// 0x32c76189
- (int)_shakeState;	// 0x32ea6b35
- (id)_touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x32ea6b31
- (id)allTouches;	// 0x32ea6b19
// declared property getter: - (int)subtype;	// 0x32ea6b15
// declared property getter: - (double)timestamp;	// 0x32d742fd
- (id)touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x32ea6b25
- (id)touchesForView:(id)view;	// 0x32ea6b21
- (id)touchesForWindow:(id)window;	// 0x32ea6b1d
// declared property getter: - (int)type;	// 0x32d2a1dd
@end
