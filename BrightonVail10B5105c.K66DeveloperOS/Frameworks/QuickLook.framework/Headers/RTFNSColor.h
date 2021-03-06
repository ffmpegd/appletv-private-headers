/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface RTFNSColor : NSObject {
	float _red;	// 4 = 0x4
	float _green;	// 8 = 0x8
	float _blue;	// 12 = 0xc
	float _alpha;	// 16 = 0x10
}
@property(assign) float alpha;	// G=0x33b22205; S=0x33b22219; @synthesize=_alpha
@property(assign) float blue;	// G=0x33b221d9; S=0x33b221ed; @synthesize=_blue
@property(assign) float green;	// G=0x33b221ad; S=0x33b221c1; @synthesize=_green
@property(assign) float red;	// G=0x33b22181; S=0x33b22195; @synthesize=_red
+ (id)blackColor;	// 0x33b21ff5
+ (id)colorWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x33b21e45
+ (id)colorWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;	// 0x33b21d71
+ (id)whiteColor;	// 0x33b21fd1
- (id)init;	// 0x33b21d45
- (id)initWithCalibratedRed:(float)calibratedRed green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x33b21ea9
- (id)initWithCalibratedWhite:(float)calibratedWhite alpha:(float)alpha;	// 0x33b21dbd
// declared property getter: - (float)alpha;	// 0x33b22205
// declared property getter: - (float)blue;	// 0x33b221d9
- (id)colorUsingColorSpaceName:(id)name;	// 0x33b2207d
- (id)copyWithZone:(NSZone *)zone;	// 0x33b21f39
- (id)description;	// 0x33b22081
- (void)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x33b22019
// declared property getter: - (float)green;	// 0x33b221ad
// declared property getter: - (float)red;	// 0x33b22181
// declared property setter: - (void)setAlpha:(float)alpha;	// 0x33b22219
// declared property setter: - (void)setBlue:(float)blue;	// 0x33b221ed
// declared property setter: - (void)setGreen:(float)green;	// 0x33b221c1
// declared property setter: - (void)setRed:(float)red;	// 0x33b22195
@end

