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
@property(retain) id bottomLeftToTopRightStroke;	// G=0x34e251fd; S=0x34e25e55; converted property
@property(retain) id bottomStroke;	// G=0x34d59abd; S=0x34d2ea19; converted property
@property(retain) id horzInsideStroke;	// G=0x34d59acd; S=0x34d2ea59; converted property
@property(retain) id leftStroke;	// G=0x34d59aed; S=0x34d2e959; converted property
@property(retain) id rightStroke;	// G=0x34d59b0d; S=0x34d2e999; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x34e251ed; S=0x34e25e95; converted property
@property(retain) id topStroke;	// G=0x34d59a9d; S=0x34d2e9d9; converted property
@property(retain) id vertInsideStroke;	// G=0x34d59b1d; S=0x34d2ea99; converted property
+ (id)defaultAxisParallelStroke;	// 0x34e25acd
+ (id)defaultObliqueStroke;	// 0x34e25ab1
+ (id)defaultStyle;	// 0x34e25929
- (void)applyOverridesFrom:(id)from;	// 0x34e25b29
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x34e251fd
// converted property getter: - (id)bottomStroke;	// 0x34d59abd
- (void)dealloc;	// 0x34d306ad
// converted property getter: - (id)horzInsideStroke;	// 0x34d59acd
// converted property getter: - (id)leftStroke;	// 0x34d59aed
// converted property getter: - (id)rightStroke;	// 0x34d59b0d
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x34e25e55
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x34d2ea19
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x34d2ea59
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x34d2e959
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x34d2e999
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x34e25e95
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x34d2e9d9
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x34d2ea99
- (id)shallowCopy;	// 0x34e25cdd
- (id)stroke:(int)stroke;	// 0x34e25ed5
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x34e251ed
// converted property getter: - (id)topStroke;	// 0x34d59a9d
// converted property getter: - (id)vertInsideStroke;	// 0x34d59b1d
@end
