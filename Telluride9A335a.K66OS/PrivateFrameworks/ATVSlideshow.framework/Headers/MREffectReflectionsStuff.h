/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRImage;

@interface MREffectReflectionsStuff : NSObject {
	MRImage *_slide;	// 4 = 0x4
	MRCroppingSprite *_sprite;	// 8 = 0x8
	float _modelViewMatrix[16];	// 12 = 0xc
	float _foreColor[4];	// 76 = 0x4c
	CGPoint position;	// 92 = 0x5c
	CGSize size;	// 100 = 0x64
	BOOL isShadow;	// 108 = 0x6c
}
- (id)initWithSlide:(id)slide sprite:(id)sprite modelViewMatrix:(const float *)matrix foreColor:(const float *)color position:(CGPoint)position size:(CGSize)size isShadow:(BOOL)shadow;	// 0x31b1e19d
- (void)dealloc;	// 0x31b1e2b5
@end

