/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSIndexSet, NSMutableArray;

@interface MRShiftingTilesTimingInfo : NSObject {
	BOOL fallLeft;	// 4 = 0x4
	int fallDirection;	// 8 = 0x8
	BOOL isTop;	// 12 = 0xc
	NSArray *layouts;	// 16 = 0x10
	int add;	// 20 = 0x14
	NSIndexSet *remove;	// 24 = 0x18
	int slideIndex;	// 28 = 0x1c
	NSMutableArray *additionalTimingInfo;	// 32 = 0x20
	double duration;	// 36 = 0x24
}
@property(retain, nonatomic) NSArray *additionalTimingInfo;	// G=0x33ad9fb5; S=0x33ad9fc5; @synthesize
@property(retain, nonatomic) NSArray *layouts;	// G=0x33ad9f75; S=0x33ad9f85; @synthesize
@property(retain, nonatomic) NSIndexSet *remove;	// G=0x33ad9f95; S=0x33ad9fa5; @synthesize
// declared property getter: - (id)additionalTimingInfo;	// 0x33ad9fb5
- (void)dealloc;	// 0x33ad9e29
- (id)description;	// 0x33ad9eb9
// declared property getter: - (id)layouts;	// 0x33ad9f75
// declared property getter: - (id)remove;	// 0x33ad9f95
// declared property setter: - (void)setAdditionalTimingInfo:(id)info;	// 0x33ad9fc5
// declared property setter: - (void)setLayouts:(id)layouts;	// 0x33ad9f85
// declared property setter: - (void)setRemove:(id)remove;	// 0x33ad9fa5
@end

