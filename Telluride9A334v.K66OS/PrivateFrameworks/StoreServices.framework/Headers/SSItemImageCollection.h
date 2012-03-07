/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {
@private
	NSArray *_itemImages;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *itemImages;	// G=0x324f442d; @synthesize=_itemImages
- (id)initWithImageCollection:(id)imageCollection;	// 0x324f32a1
- (id)initWithItemImages:(id)itemImages;	// 0x324f34e1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324f3f2d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x324f40b5
- (id)_imagesForSize:(CGSize)size scale:(float)scale;	// 0x324f390d
- (id)_newImagesForDictionary:(id)dictionary;	// 0x324f3ce1
- (id)bestImageForSize:(CGSize)size;	// 0x324f35e5
- (id)copyPropertyListEncoding;	// 0x324f41f1
- (id)copyWithZone:(NSZone *)zone;	// 0x324f3581
- (void *)copyXPCEncoding;	// 0x324f4341
- (void)dealloc;	// 0x324f3535
- (id)imagesForKind:(id)kind;	// 0x324f379d
- (id)imagesForSize:(CGSize)size;	// 0x324f362d
// declared property getter: - (id)itemImages;	// 0x324f442d
@end

