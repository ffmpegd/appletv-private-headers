/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface BRShimmerControl : BRControl {
@private
	BRControl *_base;	// 48 = 0x30
	BRImageControl *_shimmer;	// 52 = 0x34
	float _offset;	// 56 = 0x38
}
@property(assign) float offset;	// G=0x34213845; S=0x342137f1; converted property
+ (id)shimmerWithOffset:(float)offset;	// 0x342135ed
- (id)init;	// 0x342137dd
- (id)initWithOffset:(float)offset;	// 0x34213651
- (id)_calculateKeyTimes;	// 0x34213bf1
- (id)_calculatePositionValues;	// 0x34213af5
- (void)dealloc;	// 0x34213855
- (void)layoutSubcontrols;	// 0x342138b5
// converted property getter: - (float)offset;	// 0x34213845
// converted property setter: - (void)setOffset:(float)offset;	// 0x342137f1
@end

