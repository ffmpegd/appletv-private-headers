/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "NSSecureCoding.h"


__attribute__((visibility("hidden")))
@interface _UIViewAnimationAttributes : NSObject <NSSecureCoding> {
	double _duration;	// 4 = 0x4
	double _delay;	// 12 = 0xc
	unsigned _options;	// 20 = 0x14
	int _curve;	// 24 = 0x18
}
@property(readonly, assign, nonatomic, getter=_curve) int curve;	// G=0x2f5ac145; @synthesize=_curve
@property(readonly, assign) int curve;	// G=0x2f5ac0fd; converted property
@property(readonly, assign, nonatomic, getter=_delay) double delay;	// G=0x2f5ac12d; @synthesize=_delay
@property(readonly, assign, nonatomic, getter=_duration) double duration;	// G=0x2f5ac115; @synthesize=_duration
+ (BOOL)supportsSecureCoding;	// 0x2f5abf41
- (id)initWithCoder:(id)coder;	// 0x2f5abf49
// declared property getter: - (int)_curve;	// 0x2f5ac145
// declared property getter: - (double)_delay;	// 0x2f5ac12d
// declared property getter: - (double)_duration;	// 0x2f5ac115
// converted property getter: - (int)curve;	// 0x2f5ac0fd
- (void)encodeWithCoder:(id)coder;	// 0x2f5ac041
@end
