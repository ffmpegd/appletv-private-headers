/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject <NSCopying> {
@private
	NSMutableArray *mTransforms;	// 4 = 0x4
}
@property(retain) id transforms;	// G=0x30be9249; S=0x30d4ccc1; converted property
+ (id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x30be8a71
+ (id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;	// 0x30cb0a9d
+ (id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x30cb0699
+ (int)mapSchemeColorID:(int)anId colorMap:(id)map;	// 0x30be8cd1
+ (id)nsColorWithOADColor:(id)oadcolor;	// 0x30e815d9
+ (id)nsColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x30be8a05
+ (id)nsColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x30be8f01
- (void)addTransform:(id)transform;	// 0x30cb14b9
- (void)addTransformOfType:(int)type;	// 0x30e81575
- (void)addTransformOfType:(int)type value:(float)value;	// 0x30dc3525
- (id)colorForStyleColor:(id)styleColor;	// 0x30da757d
- (id)copyWithZone:(NSZone *)zone;	// 0x30e81561
- (void)dealloc;	// 0x30c68fa9
- (unsigned)hash;	// 0x30c68acd
- (BOOL)isEqual:(id)equal;	// 0x30c68aed
// converted property setter: - (void)setTransforms:(id)transforms;	// 0x30d4ccc1
// converted property getter: - (id)transforms;	// 0x30be9249
@end

