/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class NSString;

@interface MPEffectContainerInternal : NSObject {
	double startTime;	// 4 = 0x4
	double duration;	// 12 = 0xc
	CGColorRef backgroundColor;	// 20 = 0x14
	NSString *uuid;	// 24 = 0x18
}
@property(assign, nonatomic) CGColorRef backgroundColor;	// G=0x35483515; S=0x35483491; @synthesize
@property(assign, nonatomic) double duration;	// G=0x354834e9; S=0x35483501; @synthesize
@property(assign, nonatomic) double startTime;	// G=0x354834bd; S=0x354834d5; @synthesize
@property(retain, nonatomic) NSString *uuid;	// G=0x35483525; S=0x35483535; @synthesize
// declared property getter: - (CGColorRef)backgroundColor;	// 0x35483515
- (void)dealloc;	// 0x35483429
// declared property getter: - (double)duration;	// 0x354834e9
- (void)finalize;	// 0x354833e5
// declared property setter: - (void)setBackgroundColor:(CGColorRef)color;	// 0x35483491
// declared property setter: - (void)setDuration:(double)duration;	// 0x35483501
// declared property setter: - (void)setStartTime:(double)time;	// 0x354834d5
// declared property setter: - (void)setUuid:(id)uuid;	// 0x35483535
// declared property getter: - (double)startTime;	// 0x354834bd
// declared property getter: - (id)uuid;	// 0x35483525
@end

