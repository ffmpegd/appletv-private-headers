/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageCacheRequest.h"
#import "MediaPlayer-Structs.h"

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest {
	NSURL *_url;	// 60 = 0x3c
	BOOL _usePlaceholderAsFallback;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL usePlaceholderAsFallback;	// G=0x3379e211; S=0x3379e221; @synthesize=_usePlaceholderAsFallback
- (id)initWithURL:(id)url;	// 0x3379dee5
- (id)copyRawImageReturningError:(id *)error;	// 0x3379dfd1
- (void)dealloc;	// 0x3379df85
- (id)placeholderImage;	// 0x3379e1a1
// declared property setter: - (void)setUsePlaceholderAsFallback:(BOOL)fallback;	// 0x3379e221
- (id)uniqueKey;	// 0x3379e1f1
// declared property getter: - (BOOL)usePlaceholderAsFallback;	// 0x3379e211
@end

