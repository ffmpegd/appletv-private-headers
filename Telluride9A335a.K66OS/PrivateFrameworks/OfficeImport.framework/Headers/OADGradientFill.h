/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADFill.h"

@class NSMutableArray, OADRelativeRect, OADShade;

__attribute__((visibility("hidden")))
@interface OADGradientFill : OADFill {
@private
	NSMutableArray *mStops;	// 12 = 0xc
	BOOL mAreStopsOverridden;	// 16 = 0x10
	OADRelativeRect *mTileRect;	// 20 = 0x14
	BOOL mIsTileRectOverridden;	// 24 = 0x18
	int mFlipMode;	// 28 = 0x1c
	BOOL mIsFlipModeOverridden;	// 32 = 0x20
	BOOL mRotateWithShape;	// 33 = 0x21
	BOOL mIsRotateWithShapeOverridden;	// 34 = 0x22
	OADShade *mShade;	// 36 = 0x24
	BOOL mIsShadeOverridden;	// 40 = 0x28
}
@property(assign) int flipMode;	// G=0x353c7355; S=0x351f2c75; converted property
@property(assign) BOOL rotateWithShape;	// G=0x353c73bd; S=0x351f2c95; converted property
@property(retain) id shade;	// G=0x351f4b01; S=0x351f2d99; converted property
@property(retain) id stops;	// G=0x351f45e5; S=0x352eb17d; converted property
@property(retain) id tileRect;	// G=0x353c7325; S=0x351f2c25; converted property
+ (id)defaultProperties;	// 0x351f28f5
- (id)initWithDefaults;	// 0x351f293d
- (void)addStopColor:(id)color position:(float)position;	// 0x351f2a91
- (BOOL)areStopsOverridden;	// 0x351f4615
- (void)clearStops;	// 0x351f36bd
- (id)copyWithZone:(NSZone *)zone;	// 0x352eaf35
- (void)dealloc;	// 0x351f659d
// converted property getter: - (int)flipMode;	// 0x353c7355
- (unsigned)hash;	// 0x353c7425
- (BOOL)isEqual:(id)equal;	// 0x351f3ec5
- (BOOL)isFlipModeOverridden;	// 0x353c7385
- (BOOL)isRotateWithShapeOverridden;	// 0x353c73ed
- (BOOL)isShadeOverridden;	// 0x351f4b31
- (BOOL)isTileRectOverridden;	// 0x3532266d
// converted property getter: - (BOOL)rotateWithShape;	// 0x353c73bd
// converted property setter: - (void)setFlipMode:(int)mode;	// 0x351f2c75
- (void)setParent:(id)parent;	// 0x351f2de9
// converted property setter: - (void)setRotateWithShape:(BOOL)shape;	// 0x351f2c95
// converted property setter: - (void)setShade:(id)shade;	// 0x351f2d99
// converted property setter: - (void)setStops:(id)stops;	// 0x352eb17d
- (void)setStyleColor:(id)color;	// 0x352eb26d
// converted property setter: - (void)setTileRect:(id)rect;	// 0x351f2c25
// converted property getter: - (id)shade;	// 0x351f4b01
- (id)stopColorAtIndex:(unsigned)index;	// 0x351f464d
- (unsigned)stopCount;	// 0x351f45bd
- (float)stopPositionAtIndex:(unsigned)index;	// 0x353c72e9
// converted property getter: - (id)stops;	// 0x351f45e5
// converted property getter: - (id)tileRect;	// 0x353c7325
@end

