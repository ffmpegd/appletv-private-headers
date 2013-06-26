/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, OADBlip, NSString;

@interface OADBlipRef : NSObject <NSCopying> {
	long mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x34879b8d; S=0x34946631; converted property
@property(retain) id effects;	// G=0x34a46f55; S=0x34a46995; converted property
@property(assign) long index;	// G=0x34879b9d; S=0x34a46945; converted property
@property(retain) id name;	// G=0x348eb5fd; S=0x34a46955; converted property
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x348eb581
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x348eb5a5
+ (int)blipTypeForContentType:(id)contentType;	// 0x348eb1c9
+ (int)blipTypeForExtension:(id)extension;	// 0x34a469f1
+ (int)blipTypeForImageData:(id)imageData;	// 0x34a46be5
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x34a46e8d
- (id)init;	// 0x34a46941
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x34866bc9
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x34866bed
- (void)addEffect:(id)effect;	// 0x3487daa5
// converted property getter: - (id)blip;	// 0x34879b8d
- (id)copyWithZone:(NSZone *)zone;	// 0x349bff45
- (void)dealloc;	// 0x34888e0d
- (id)effectAtIndex:(unsigned)index;	// 0x349c0291
- (unsigned)effectCount;	// 0x349c0271
// converted property getter: - (id)effects;	// 0x34a46f55
- (unsigned)hash;	// 0x34a46f65
// converted property getter: - (long)index;	// 0x34879b9d
- (BOOL)isEqual:(id)equal;	// 0x34a47031
- (BOOL)isNull;	// 0x34a46f25
// converted property getter: - (id)name;	// 0x348eb5fd
- (void)removeEffectAtIndex:(unsigned)index;	// 0x34a469d1
// converted property setter: - (void)setBlip:(id)blip;	// 0x34946631
// converted property setter: - (void)setEffects:(id)effects;	// 0x34a46995
// converted property setter: - (void)setIndex:(long)index;	// 0x34a46945
// converted property setter: - (void)setName:(id)name;	// 0x34a46955
@end
