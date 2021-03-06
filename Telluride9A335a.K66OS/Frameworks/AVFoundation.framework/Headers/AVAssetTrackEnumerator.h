/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSEnumerator.h> // Unknown library

@class NSString;

@interface AVAssetTrackEnumerator : NSEnumerator {
@private
	NSString *_mediaType;	// 4 = 0x4
	NSString *_mediaCharacteristic;	// 8 = 0x8
	NSEnumerator *_enumerator;	// 12 = 0xc
}
+ (id)trackEnumeratorWithAsset:(id)asset;	// 0x322f4fc9
- (id)initWithAsset:(id)asset;	// 0x322f51fd
- (id)initWithAsset:(id)asset mediaCharacteristic:(id)characteristic;	// 0x322f519d
- (id)initWithAsset:(id)asset mediaType:(id)type;	// 0x322f51cd
- (void)dealloc;	// 0x322f5129
- (id)nextObject;	// 0x322f5005
- (void)setMediaCharacteristic:(id)characteristic;	// 0x322f50a9
- (void)setMediaType:(id)type;	// 0x322f50e9
@end

