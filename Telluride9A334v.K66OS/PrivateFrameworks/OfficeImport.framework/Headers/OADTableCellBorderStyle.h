/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellBorderStyle : NSObject {
@private
	OADStroke *mLeftStroke;	// 4 = 0x4
	OADStroke *mRightStroke;	// 8 = 0x8
	OADStroke *mTopStroke;	// 12 = 0xc
	OADStroke *mBottomStroke;	// 16 = 0x10
	OADStroke *mHorzInsideStroke;	// 20 = 0x14
	OADStroke *mVertInsideStroke;	// 24 = 0x18
	OADStroke *mTopLeftToBottomRightStroke;	// 28 = 0x1c
	OADStroke *mBottomLeftToTopRightStroke;	// 32 = 0x20
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x357881fd; S=0x35788e55; converted property
@property(retain) id bottomStroke;	// G=0x356bcabd; S=0x35691a19; converted property
@property(retain) id horzInsideStroke;	// G=0x356bcacd; S=0x35691a59; converted property
@property(retain) id leftStroke;	// G=0x356bcaed; S=0x35691959; converted property
@property(retain) id rightStroke;	// G=0x356bcb0d; S=0x35691999; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x357881ed; S=0x35788e95; converted property
@property(retain) id topStroke;	// G=0x356bca9d; S=0x356919d9; converted property
@property(retain) id vertInsideStroke;	// G=0x356bcb1d; S=0x35691a99; converted property
+ (id)defaultAxisParallelStroke;	// 0x35788acd
+ (id)defaultObliqueStroke;	// 0x35788ab1
+ (id)defaultStyle;	// 0x35788929
- (void)applyOverridesFrom:(id)from;	// 0x35788b29
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x357881fd
// converted property getter: - (id)bottomStroke;	// 0x356bcabd
- (void)dealloc;	// 0x356936ad
// converted property getter: - (id)horzInsideStroke;	// 0x356bcacd
// converted property getter: - (id)leftStroke;	// 0x356bcaed
// converted property getter: - (id)rightStroke;	// 0x356bcb0d
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x35788e55
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x35691a19
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x35691a59
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x35691959
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x35691999
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x35788e95
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x356919d9
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x35691a99
- (id)shallowCopy;	// 0x35788cdd
- (id)stroke:(int)stroke;	// 0x35788ed5
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x357881ed
// converted property getter: - (id)topStroke;	// 0x356bca9d
// converted property getter: - (id)vertInsideStroke;	// 0x356bcb1d
@end

