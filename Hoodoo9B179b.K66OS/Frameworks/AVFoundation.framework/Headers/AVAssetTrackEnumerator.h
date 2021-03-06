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
+ (id)trackEnumeratorWithAsset:(id)asset;	// 0x30ab4681
- (id)initWithAsset:(id)asset;	// 0x30ab46bd
- (id)initWithAsset:(id)asset mediaCharacteristic:(id)characteristic;	// 0x30ab4779
- (id)initWithAsset:(id)asset mediaType:(id)type;	// 0x30ab4749
- (void)dealloc;	// 0x30ab47a9
- (id)nextObject;	// 0x30ab489d
- (void)setMediaCharacteristic:(id)characteristic;	// 0x30ab485d
- (void)setMediaType:(id)type;	// 0x30ab481d
@end

