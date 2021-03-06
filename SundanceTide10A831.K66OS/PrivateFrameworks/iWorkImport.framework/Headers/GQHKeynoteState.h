/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQHState.h"


@interface GQHKeynoteState : GQHState {
	int mCurrentSlide;	// 108 = 0x6c
	CGSize mSlideSize;	// 112 = 0x70
	int mProgressiveIndex;	// 120 = 0x78
}
@property(assign) int progressiveIndex;	// G=0x35d14995; S=0x35d149a5; converted property
@property(assign) CGSize slideSize;	// G=0x35d1495d; S=0x35d14975; converted property
- (id).cxx_construct;	// 0x35d149f5
- (int)currentSlide;	// 0x35d1494d
- (void)incrementCurrentSlide;	// 0x35d14939
// converted property getter: - (int)progressiveIndex;	// 0x35d14995
// converted property setter: - (void)setProgressiveIndex:(int)index;	// 0x35d149a5
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x35d14975
- (BOOL)shouldMapLinkWithUrl:(CFStringRef)url;	// 0x35d14989
- (BOOL)shouldStreamContent;	// 0x35d149b5
// converted property getter: - (CGSize)slideSize;	// 0x35d1495d
@end

