/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSCache, NSString;

@interface CPBitmapStore : NSObject {
	NSString *_path;	// 4 = 0x4
	NSString *_imagePath;	// 8 = 0x8
	NSCache *_cache;	// 12 = 0xc
	int _version;	// 16 = 0x10
}
@property(readonly, retain) NSString *imagePath;	// G=0x33440fe1; converted property
@property(readonly, assign, nonatomic) int version;	// G=0x33441139; 
+ (id)CPBitmapStoreWithPath:(id)path version:(int)version useDirectHashing:(BOOL)hashing;	// 0x33440279
- (id)initWithPath:(id)path version:(int)version;	// 0x334402d9
- (CGImageRef)_copyAndStoreImageForKey:(id)key inGroup:(id)group withSize:(CGSize)size opaque:(BOOL)opaque scale:(float)scale fillMem:(id)mem alternateCompletion:(id)completion;	// 0x33440721
- (id)_versionPath;	// 0x334410e5
- (id)allGroups;	// 0x3344054d
- (void)commitTransaction;	// 0x33440d35
- (void)commitTxn;	// 0x33440569
- (CGImageRef)copyAndStoreImageForKey:(id)key inGroup:(id)group withSize:(CGSize)size opaque:(BOOL)opaque scale:(float)scale draw:(id)draw;	// 0x3344099d
- (CGImageRef)copyImageForKey:(id)key;	// 0x33440549
- (CGImageRef)copyImageForKey:(id)key inGroup:(id)group;	// 0x3344056d
- (void)dealloc;	// 0x334403e9
- (BOOL)findImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x334404ed
- (int)imageCount;	// 0x3344103d
- (id)imageNameForKey:(id)key inGroup:(id)group;	// 0x33440461
// converted property getter: - (id)imagePath;	// 0x33440fe1
- (unsigned)memContentOffset;	// 0x33440545
- (void *)openAndMmap:(id)mmap withInfo:(img *)info;	// 0x3344050d
- (void)purge;	// 0x3344109d
- (void)removeImagesInGroups:(id)groups;	// 0x33440d39
- (BOOL)saveImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x33440509
- (int)setVersion:(int)version;	// 0x334411f5
- (void)storeImageForKey:(id)key inGroup:(id)group opaque:(BOOL)opaque image:(CGImageRef)image;	// 0x33440b75
// declared property getter: - (int)version;	// 0x33441139
@end

