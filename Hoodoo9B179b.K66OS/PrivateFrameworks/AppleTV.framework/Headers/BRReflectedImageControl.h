/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRReflectionControl;

@interface BRReflectedImageControl : BRControl {
@private
	BRImageControl *_image;	// 48 = 0x30
	BRReflectionControl *_reflection;	// 52 = 0x34
	float _offset;	// 56 = 0x38
}
@property(assign) BOOL automaticDownsample;	// G=0x302bc235; S=0x302bc215; converted property
@property(retain) BRImageControl *image;	// G=0x302bc259; S=0x302bc10d; converted property
@property(assign) CGColorRef imageBorderColor;	// G=0x302bc359; S=0x302bc31d; converted property
@property(assign) float imageBorderWidth;	// G=0x302bc2e5; S=0x302bc2a9; converted property
@property(assign) float reflectionOffset;	// G=0x302bc299; S=0x302bc279; converted property
- (id)init;	// 0x302bbf8d
// converted property getter: - (BOOL)automaticDownsample;	// 0x302bc235
- (void)dealloc;	// 0x302bc0ad
// converted property getter: - (id)image;	// 0x302bc259
// converted property getter: - (CGColorRef)imageBorderColor;	// 0x302bc359
// converted property getter: - (float)imageBorderWidth;	// 0x302bc2e5
- (void)layoutSubcontrols;	// 0x302bc3d9
- (CGRect)reflectedImageFrameForImageFrame:(CGRect)imageFrame reflectionAmount:(float)amount;	// 0x302bc391
// converted property getter: - (float)reflectionOffset;	// 0x302bc299
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x302bc215
// converted property setter: - (void)setImage:(id)image;	// 0x302bc10d
- (void)setImageAsContents:(id)contents;	// 0x302bc191
// converted property setter: - (void)setImageBorderColor:(CGColorRef)color;	// 0x302bc31d
// converted property setter: - (void)setImageBorderWidth:(float)width;	// 0x302bc2a9
// converted property setter: - (void)setReflectionOffset:(float)offset;	// 0x302bc279
@end

