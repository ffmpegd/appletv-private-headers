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
@property(retain) id transforms;	// G=0x3273b249; S=0x3289ecc1; converted property
+ (id)basicMapOfColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x3273aa71
+ (id)colorWithRedByte:(unsigned char)redByte greenByte:(unsigned char)byte blueByte:(unsigned char)byte3;	// 0x32802a9d
+ (id)mapAdjustedColor:(id)color colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x32802699
+ (int)mapSchemeColorID:(int)anId colorMap:(id)map;	// 0x3273acd1
+ (id)nsColorWithOADColor:(id)oadcolor;	// 0x329d35d9
+ (id)nsColorWithOADColor:(id)oadcolor colorMap:(id)map colorScheme:(id)scheme colorPalette:(id)palette;	// 0x3273aa05
+ (id)nsColorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x3273af01
- (void)addTransform:(id)transform;	// 0x328034b9
- (void)addTransformOfType:(int)type;	// 0x329d3575
- (void)addTransformOfType:(int)type value:(float)value;	// 0x32915525
- (id)colorForStyleColor:(id)styleColor;	// 0x328f957d
- (id)copyWithZone:(NSZone *)zone;	// 0x329d3561
- (void)dealloc;	// 0x327bafa9
- (unsigned)hash;	// 0x327baacd
- (BOOL)isEqual:(id)equal;	// 0x327baaed
// converted property setter: - (void)setTransforms:(id)transforms;	// 0x3289ecc1
// converted property getter: - (id)transforms;	// 0x3273b249
@end
