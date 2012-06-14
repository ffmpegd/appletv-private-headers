/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class EDResources;

__attribute__((visibility("hidden")))
@interface EDColorReference : NSObject <NSCopying> {
@private
	EDResources *mResources;	// 4 = 0x4
	int mSystemColorID;	// 8 = 0x8
	unsigned mColorIndex;	// 12 = 0xc
	unsigned mThemeIndex;	// 16 = 0x10
	double mTint;	// 20 = 0x14
}
+ (id)colorReferenceWithColor:(id)color resources:(id)resources;	// 0x312bcb99
+ (id)colorReferenceWithColorIndex:(unsigned)colorIndex resources:(id)resources;	// 0x311bffb5
+ (id)colorReferenceWithResources:(id)resources;	// 0x311c00b9
+ (id)colorReferenceWithSystemColorID:(int)systemColorID resources:(id)resources;	// 0x311c0091
+ (id)colorReferenceWithXlThemeIndex:(unsigned)xlThemeIndex tint:(double)tint resources:(id)resources;	// 0x31286c19
- (id)initWithColor:(id)color resources:(id)resources;	// 0x3124bb3d
- (id)initWithResources:(id)resources;	// 0x311c0105
- (id)color;	// 0x311dfb65
- (unsigned)colorIndex;	// 0x31331141
- (id)copyWithZone:(NSZone *)zone;	// 0x3124bab9
- (unsigned)hash;	// 0x31331169
- (BOOL)isEqual:(id)equal;	// 0x311c3ba5
- (BOOL)isEqualToColorReference:(id)colorReference;	// 0x311c3c01
- (bool)isValid;	// 0x313310ed
- (int)systemColorID;	// 0x31331131
- (unsigned)themeIndex;	// 0x312de791
- (double)tint;	// 0x31331151
@end
