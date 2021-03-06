/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MUPoolObject.h"

@class MRImage, MRCroppingSprite;

@interface MRFlipupRenderable : MUPoolObject {
	float zPosition;	// 8 = 0x8
	BOOL needsBlend;	// 12 = 0xc
	BOOL isBreak;	// 13 = 0xd
	float modelViewMatrix[16];	// 16 = 0x10
	float color;	// 80 = 0x50
	float opacity;	// 84 = 0x54
	MRImage *slide;	// 88 = 0x58
	MRCroppingSprite *sprite;	// 92 = 0x5c
	CGPoint position;	// 96 = 0x60
	CGSize size;	// 104 = 0x68
	float flippedModelViewMatrix[16];	// 112 = 0x70
	MRCroppingSprite *reflectionSprite;	// 176 = 0xb0
	CGPoint reflectionPosition;	// 180 = 0xb4
}
@property(retain, nonatomic) MRCroppingSprite *reflectionSprite;	// G=0x33466f49; S=0x33466f59; @synthesize
@property(retain, nonatomic) MRImage *slide;	// G=0x33466f09; S=0x33466f19; @synthesize
@property(retain, nonatomic) MRCroppingSprite *sprite;	// G=0x33466f29; S=0x33466f39; @synthesize
+ (XXStruct_VuPjpB *)poolInfo;	// 0x33466e51
- (void)dealloc;	// 0x33466ec9
- (void)purge;	// 0x33466e61
// declared property getter: - (id)reflectionSprite;	// 0x33466f49
// declared property setter: - (void)setReflectionSprite:(id)sprite;	// 0x33466f59
// declared property setter: - (void)setSlide:(id)slide;	// 0x33466f19
// declared property setter: - (void)setSprite:(id)sprite;	// 0x33466f39
// declared property getter: - (id)slide;	// 0x33466f09
// declared property getter: - (id)sprite;	// 0x33466f29
@end

