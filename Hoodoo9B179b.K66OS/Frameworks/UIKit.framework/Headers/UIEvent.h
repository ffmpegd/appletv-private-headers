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
@property(readonly, assign, nonatomic) int subtype;	// G=0x330ee08d; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x32fb8bb1; 
@property(readonly, assign, nonatomic) int type;	// G=0x32f6d7e9; 
- (GSEventRef)_gsEvent;	// 0x330ee0a5
- (id)_init;	// 0x32ee998d
- (id)_initWithEvent:(GSEventRef)event touches:(id)touches;	// 0x330ee0a1
- (void)_setTimestamp:(double)timestamp;	// 0x32eba541
- (int)_shakeState;	// 0x330ee0ad
- (id)_touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x330ee0a9
- (id)allTouches;	// 0x330ee091
// declared property getter: - (int)subtype;	// 0x330ee08d
// declared property getter: - (double)timestamp;	// 0x32fb8bb1
- (id)touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x330ee09d
- (id)touchesForView:(id)view;	// 0x330ee099
- (id)touchesForWindow:(id)window;	// 0x330ee095
// declared property getter: - (int)type;	// 0x32f6d7e9
@end
