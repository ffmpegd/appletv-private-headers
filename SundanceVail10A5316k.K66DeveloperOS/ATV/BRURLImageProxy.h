/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSString, NSDictionary, BRImage, BRMediaType;
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
}
@property(retain) id decryptionAgent;	// G=0x375595; S=0x3755a5; converted property
@property(retain) BRImage *defaultImage;	// G=0x375519; S=0x3754dd; converted property
@property(retain) NSDictionary *headerFields;	// G=0x375549; S=0x375559; converted property
@property(retain) BRMediaType *mediaTypeForDefaultImage;	// G=0x375489; S=0x375479; converted property
@property(retain) id object;	// G=0x375535; S=0x375531; converted property
@property(readonly, retain) NSURL *url;	// G=0x375539; converted property
@property(assign) BOOL writeToDisk;	// G=0x3755c5; S=0x3755b5; converted property
+ (id)proxyWithURL:(id)url;	// 0x374ee1
+ (id)proxyWithURL:(id)url decryptionAgent:(id)agent;	// 0x374f2d
+ (id)proxyWithURL:(id)url headerFields:(id)fields;	// 0x374f7d
+ (id)proxyWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x374fcd
- (id)initWithURL:(id)url;	// 0x375025
- (id)initWithURL:(id)url decryptionAgent:(id)agent;	// 0x375045
- (id)initWithURL:(id)url headerFields:(id)fields;	// 0x375065
- (id)initWithURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x375089
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x37552d
- (void)dealloc;	// 0x375129
// converted property getter: - (id)decryptionAgent;	// 0x375595
// converted property getter: - (id)defaultImage;	// 0x375519
- (id)defaultImageForImageSize:(int)imageSize;	// 0x375499
// converted property getter: - (id)headerFields;	// 0x375549
- (id)imageForImageSize:(int)imageSize;	// 0x3752e1
- (id)imageIDForImageSize:(int)imageSize;	// 0x3751b5
// converted property getter: - (id)mediaTypeForDefaultImage;	// 0x375489
// converted property getter: - (id)object;	// 0x375535
// converted property setter: - (void)setDecryptionAgent:(id)agent;	// 0x3755a5
// converted property setter: - (void)setDefaultImage:(id)image;	// 0x3754dd
// converted property setter: - (void)setHeaderFields:(id)fields;	// 0x375559
// converted property setter: - (void)setMediaTypeForDefaultImage:(id)defaultImage;	// 0x375479
// converted property setter: - (void)setObject:(id)object;	// 0x375531
// converted property setter: - (void)setWriteToDisk:(BOOL)disk;	// 0x3755b5
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x375529
// converted property getter: - (id)url;	// 0x375539
// converted property getter: - (BOOL)writeToDisk;	// 0x3755c5
@end

