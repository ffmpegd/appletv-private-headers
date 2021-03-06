/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaType, NSDictionary, BRImage, NSString, NSURL;
@protocol BRMusicStoreImageDecryptionAgent;

__attribute__((visibility("hidden")))
@interface BRURLImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_imageID;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	NSDictionary *_headerFields;	// 12 = 0xc
	id<BRMusicStoreImageDecryptionAgent> _decryptionAgent;	// 16 = 0x10
	BRMediaType *_mediaTypeForDefaultImage;	// 20 = 0x14
	BRImage *_defaultImage;	// 24 = 0x18
	BOOL _writeToDisk;	// 28 = 0x1c
	long _imageIDLazyInitializationGuard;	// 32 = 0x20
}
@property(retain) id decryptionAgent;	// G=0x3b26bd; S=0x3b26cd; converted property
@property(retain) BRImage *defaultImage;	// G=0x3b2641; S=0x3b2605; converted property
@property(retain) NSDictionary *headerFields;	// G=0x3b2671; S=0x3b2681; converted property
@property(retain) BRMediaType *mediaTypeForDefaultImage;	// G=0x3b25b1; S=0x3b25a1; converted property
@property(retain) id object;	// G=0x3b265d; S=0x3b2659; converted property
@property(readonly, retain) NSURL *url;	// G=0x3b2661; converted property
@property(assign) BOOL writeToDisk;	// G=0x3b26ed; S=0x3b26dd; converted property
+ (id)proxyWithURL:(id)url;	// 0x3b2051
+ (id)proxyWithURL:(id)url decryptionAgent:(id)agent;	// 0x3b209d
+ (id)proxyWithURL:(id)url headerFields:(id)fields;	// 0x3b20ed
+ (id)proxyWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x3b213d
- (id)initWithURL:(id)url;	// 0x3b2195
- (id)initWithURL:(id)url decryptionAgent:(id)agent;	// 0x3b21b5
- (id)initWithURL:(id)url headerFields:(id)fields;	// 0x3b21d5
- (id)initWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x3b21f9
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x3b2655
- (void)dealloc;	// 0x3b2299
// converted property getter: - (id)decryptionAgent;	// 0x3b26bd
// converted property getter: - (id)defaultImage;	// 0x3b2641
- (id)defaultImageForImageSize:(int)imageSize;	// 0x3b25c1
// converted property getter: - (id)headerFields;	// 0x3b2671
- (id)imageForImageSize:(int)imageSize;	// 0x3b2409
- (id)imageIDForImageSize:(int)imageSize;	// 0x3b2325
// converted property getter: - (id)mediaTypeForDefaultImage;	// 0x3b25b1
// converted property getter: - (id)object;	// 0x3b265d
// converted property setter: - (void)setDecryptionAgent:(id)agent;	// 0x3b26cd
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x3b2605
// converted property setter: - (void)setHeaderFields:(id)fields;	// 0x3b2681
// converted property setter: - (void)setMediaTypeForDefaultImage:(id)defaultImage;	// 0x3b25a1
// converted property setter: - (void)setObject:(id)object;	// 0x3b2659
// converted property setter: - (void)setWriteToDisk:(BOOL)disk;	// 0x3b26dd
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x3b2651
// converted property getter: - (id)url;	// 0x3b2661
// converted property getter: - (BOOL)writeToDisk;	// 0x3b26ed
@end

