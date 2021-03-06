/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {
	unsigned _dataDetectorTypes;	// 4 = 0x4
	BOOL _allowsInlineMediaPlayback;	// 8 = 0x8
	BOOL _mediaPlaybackRequiresUserAction;	// 9 = 0x9
	BOOL _mediaPlaybackAllowsAirPlay;	// 10 = 0xa
	BOOL _suppressesIncrementalRendering;	// 11 = 0xb
	NSString *_customUserAgent;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x330d8275; S=0x330d8285; @synthesize=_allowsInlineMediaPlayback
@property(copy, nonatomic) NSString *customUserAgent;	// G=0x330d82f5; S=0x330d8309; @synthesize=_customUserAgent
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x330d8255; S=0x330d8265; @synthesize=_dataDetectorTypes
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;	// G=0x330d82b5; S=0x330d82c5; @synthesize=_mediaPlaybackAllowsAirPlay
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x330d8295; S=0x330d82a5; @synthesize=_mediaPlaybackRequiresUserAction
@property(assign, nonatomic) BOOL suppressesIncrementalRendering;	// G=0x330d82d5; S=0x330d82e5; @synthesize=_suppressesIncrementalRendering
+ (id)defaultSettings;	// 0x330d7da5
- (id)init;	// 0x330d7c75
- (id)_encodeAsDictionary;	// 0x330d809d
- (id)_initWithDictionary:(id)dictionary;	// 0x330d7ddd
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x330d8275
- (id)copyWithZone:(NSZone *)zone;	// 0x330d8205
// declared property getter: - (id)customUserAgent;	// 0x330d82f5
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x330d8255
- (void)dealloc;	// 0x330d7d59
// declared property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x330d82b5
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x330d8295
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x330d8285
// declared property setter: - (void)setCustomUserAgent:(id)agent;	// 0x330d8309
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x330d8265
// declared property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x330d82c5
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x330d82a5
// declared property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x330d82e5
// declared property getter: - (BOOL)suppressesIncrementalRendering;	// 0x330d82d5
@end

