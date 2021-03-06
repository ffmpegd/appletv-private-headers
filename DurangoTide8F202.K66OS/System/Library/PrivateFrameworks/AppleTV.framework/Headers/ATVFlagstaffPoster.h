/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaShelfViewCell.h"
#import <BRControl.h> // Unknown library
#import "AppleTV-Structs.h"

@class ATVFlagstaffPosterHeader, ATVFlagstaffPosterBottomOverlay, BRAsyncImageControl, BRImageControl, BRReflectionControl;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPoster : BRControl <BRMediaShelfViewCell> {
@private
	BRReflectionControl *_reflectionControl;	// 44 = 0x2c
	BOOL _imageEdgeAntialiasingEnabled;	// 48 = 0x30
	int _style;	// 52 = 0x34
	ATVFlagstaffPosterHeader *_header;	// 56 = 0x38
	BRImageControl *_backgroundImageControl;	// 60 = 0x3c
	BRAsyncImageControl *_imageControl;	// 64 = 0x40
	ATVFlagstaffPosterBottomOverlay *_bottomOverlay;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) BRImageControl *backgroundImageControl;	// G=0x3373237d; @synthesize=_backgroundImageControl
@property(readonly, assign, nonatomic) ATVFlagstaffPosterBottomOverlay *bottomOverlay;	// G=0x3373235d; @synthesize=_bottomOverlay
@property(readonly, assign, nonatomic) ATVFlagstaffPosterHeader *header;	// G=0x3373238d; @synthesize=_header
@property(readonly, assign, nonatomic) BRAsyncImageControl *imageControl;	// G=0x3373236d; @synthesize=_imageControl
@property(assign, nonatomic) int style;	// G=0x3373239d; S=0x33732749; @synthesize=_style
+ (id)flagstaffPosterWithStyle:(int)style;	// 0x33732785
- (id)init;	// 0x3373276d
- (id)initWithStyle:(int)style;	// 0x33732871
- (CGRect)_contentFrame;	// 0x3373292d
- (void)_imageControlImageReady:(id)ready;	// 0x337323ad
- (void)_setStyle:(int)style;	// 0x33732429
// declared property getter: - (id)backgroundImageControl;	// 0x3373237d
// declared property getter: - (id)bottomOverlay;	// 0x3373235d
- (void)dealloc;	// 0x337327b9
- (CGRect)focusCursorFrame;	// 0x337328c5
// declared property getter: - (id)header;	// 0x3373238d
- (void)hideTextLayers;	// 0x33732351
// declared property getter: - (id)imageControl;	// 0x3373236d
- (BOOL)isAccessibilityElement;	// 0x33732359
- (void)layoutSubcontrols;	// 0x337329b5
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x33732355
// declared property setter: - (void)setStyle:(int)style;	// 0x33732749
// declared property getter: - (int)style;	// 0x3373239d
@end

