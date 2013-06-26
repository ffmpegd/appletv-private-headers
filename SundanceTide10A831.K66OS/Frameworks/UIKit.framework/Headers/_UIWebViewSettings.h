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
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x32021475; S=0x32021485; @synthesize=_allowsInlineMediaPlayback
@property(copy, nonatomic) NSString *customUserAgent;	// G=0x320214f5; S=0x32021509; @synthesize=_customUserAgent
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x32021455; S=0x32021465; @synthesize=_dataDetectorTypes
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;	// G=0x320214b5; S=0x320214c5; @synthesize=_mediaPlaybackAllowsAirPlay
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x32021495; S=0x320214a5; @synthesize=_mediaPlaybackRequiresUserAction
@property(assign, nonatomic) BOOL suppressesIncrementalRendering;	// G=0x320214d5; S=0x320214e5; @synthesize=_suppressesIncrementalRendering
+ (id)defaultSettings;	// 0x32020fa5
- (id)init;	// 0x32020e75
- (id)_encodeAsDictionary;	// 0x3202129d
- (id)_initWithDictionary:(id)dictionary;	// 0x32020fdd
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x32021475
- (id)copyWithZone:(NSZone *)zone;	// 0x32021405
// declared property getter: - (id)customUserAgent;	// 0x320214f5
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x32021455
- (void)dealloc;	// 0x32020f59
// declared property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x320214b5
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x32021495
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x32021485
// declared property setter: - (void)setCustomUserAgent:(id)agent;	// 0x32021509
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x32021465
// declared property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x320214c5
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x320214a5
// declared property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x320214e5
// declared property getter: - (BOOL)suppressesIncrementalRendering;	// 0x320214d5
@end
