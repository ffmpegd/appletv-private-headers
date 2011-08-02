/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRPhotoMediaAsset.h"
#import "BRATVMediaItem.h"


@interface BRStreamingPhotoAsset : BRPhotoMediaAsset <BRATVMediaItem> {
@private
	ATVMediaItemRef _mediaItem;	// 40 = 0x28
	ATVDataClientRef _dataClient;	// 44 = 0x2c
	BOOL _useForScreenSaver;	// 48 = 0x30
}
@property(assign) BOOL useForScreenSaver;	// G=0x33018a55; S=0x33018a45; converted property
+ (id)assetWithATVMediaItem:(ATVMediaItemRef)atvmediaItem dataClient:(ATVDataClientRef)client;	// 0x33018ea9
- (id)initWithATVMediaItem:(ATVMediaItemRef)atvmediaItem dataClient:(ATVDataClientRef)client;	// 0x33018e09
- (CGRect)_paddedFaceRectFromFaceRect:(CGRect)faceRect;	// 0x33018a75
- (id)dateTaken;	// 0x33018dd5
- (void)dealloc;	// 0x33018f2d
- (CGRect)faceRectForFaceCollectionID:(id)faceCollectionID;	// 0x33018f7d
- (id)faces;	// 0x33018d55
- (BOOL)hasVideoContent;	// 0x33018c5d
- (id)imageProxy;	// 0x33018d89
- (BOOL)isLocal;	// 0x33018a35
- (ATVMediaItemRef)mediaItemRef;	// 0x33018a65
- (id)mediaType;	// 0x33018ee1
- (id)mediaURL;	// 0x33018ca9
// converted property setter: - (void)setUseForScreenSaver:(BOOL)screenSaver;	// 0x33018a45
- (id)subImageProxyWithRect:(CGRect)rect;	// 0x33018cf1
// converted property getter: - (BOOL)useForScreenSaver;	// 0x33018a55
@end
