/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSXMLParserDelegate.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "BRSecureResource.h"
#import "BRImageProxy.h"
#import <BRRSSMediaAsset.h> // Unknown library

@class NSString, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVThunderMediaAsset : BRRSSMediaAsset <BRMediaAssetDerivesMediaURL, NSXMLParserDelegate, BRSecureResource, BRImageProxy> {
@private
	NSString *_gameId;	// 16 = 0x10
	NSString *_m3u8URLStr;	// 20 = 0x14
	int _errorCode;	// 24 = 0x18
	unsigned _playbackStartOffsetSec;	// 28 = 0x1c
	NSDictionary *_item;	// 32 = 0x20
}
@property(retain, nonatomic) NSDictionary *item;	// G=0x307a8c65; S=0x307a980d; @synthesize=_item
@property(assign, nonatomic) unsigned playbackStartOffsetSec;	// G=0x307a8c75; S=0x307a8c85; @synthesize=_playbackStartOffsetSec
- (id)initWithGameId:(id)gameId;	// 0x307a9121
- (id)artist;	// 0x307a97f1
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x307a8c5d
- (void)dealloc;	// 0x307a90b5
- (id)defaultImageForImageSize:(int)imageSize;	// 0x307a8c95
- (BOOL)forceHDCPProtection;	// 0x307a8c3d
- (BOOL)hasCoverArt;	// 0x307a8c35
- (id)imageForImageSize:(int)imageSize;	// 0x307a8d0d
- (id)imageIDForImageSize:(int)imageSize;	// 0x307a8d21
- (id)imageProxy;	// 0x307a8c39
- (id)infoOverlay;	// 0x307a8e8d
// declared property getter: - (id)item;	// 0x307a8c65
- (id)object;	// 0x307a8c61
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x307a8f29
// declared property getter: - (unsigned)playbackStartOffsetSec;	// 0x307a8c75
- (void)requiredScope:(unsigned *)scope accountType:(id *)type;	// 0x307a8ef5
- (id)resolveMediaURL;	// 0x307a9341
- (void)sendPing;	// 0x307a8dc5
// declared property setter: - (void)setItem:(id)item;	// 0x307a980d
// declared property setter: - (void)setPlaybackStartOffsetSec:(unsigned)sec;	// 0x307a8c85
- (unsigned)startTimeInMS;	// 0x307a8c41
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x307a8c59
- (id)title;	// 0x307a8fc9
- (void)trackPlayback;	// 0x307a8d35
- (void)willBeginPlayback;	// 0x307a8e65
@end
