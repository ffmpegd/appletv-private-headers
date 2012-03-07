/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDictionaryFeedResource.h"
#import "AppleTV-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVPreferenceFeedResource : ATVDictionaryFeedResource {
@private
	NSString *_path;	// 12 = 0xc
	BOOL _dirty;	// 16 = 0x10
	unsigned _format;	// 20 = 0x14
	dispatch_queue_s *_prefsWriteQueue;	// 24 = 0x18
}
- (id)initWithPath:(id)path;	// 0x33a02389
- (void)_savePrefs;	// 0x33a026d5
- (void)clearFeedResources;	// 0x33a02625
- (void)dealloc;	// 0x33a024f1
- (void)setFeedResource:(id)resource named:(id)named;	// 0x33a02575
@end

