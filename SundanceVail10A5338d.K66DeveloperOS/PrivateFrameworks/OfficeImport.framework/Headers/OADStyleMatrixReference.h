/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {
	unsigned long mMatrixIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x33a91ec9; S=0x33a914e1; converted property
@property(assign) unsigned long matrixIndex;	// G=0x33a91a35; S=0x33a914d1; converted property
+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x33ba6491
- (id)initWithMatrixIndex:(unsigned long)matrixIndex color:(id)color;	// 0x33af0621
- (void)applyToEffectsInProperties:(id)properties styleMatrix:(id)matrix;	// 0x33ba670d
- (void)applyToFillInProperties:(id)properties styleMatrix:(id)matrix;	// 0x33ba65dd
- (void)applyToStrokeInProperties:(id)properties styleMatrix:(id)matrix;	// 0x33ba64dd
// converted property getter: - (id)color;	// 0x33a91ec9
- (id)copyWithZone:(NSZone *)zone;	// 0x33ab8e29
- (void)dealloc;	// 0x33a97595
// converted property getter: - (unsigned long)matrixIndex;	// 0x33a91a35
// converted property setter: - (void)setColor:(id)color;	// 0x33a914e1
// converted property setter: - (void)setMatrixIndex:(unsigned long)index;	// 0x33a914d1
@end
