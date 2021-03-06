/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSSet, NSString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRNowPlayingProvider : XXUnknownSuperclass <BRProvider> {
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x32aaf5
- (void)_checkPlayerState;	// 0x32af2d
- (id)_initWithTypes:(id)types;	// 0x32ac9d
- (void)_playerStateChanged:(id)changed;	// 0x32aedd
- (id)controlFactory;	// 0x32abe5
- (id)dataAtIndex:(long)index;	// 0x32ac4d
- (long)dataCount;	// 0x32ac35
- (void)dealloc;	// 0x32ab41
- (id)hashForDataAtIndex:(long)index;	// 0x32ac91
@end

