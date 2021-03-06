/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, NSString;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface BRNowPlayingProvider : XXUnknownSuperclass <BRProvider> {
	id<BRControlFactory> _factory;	// 4 = 0x4
	NSSet *_types;	// 8 = 0x8
	NSString *_playerMediaAssetID;	// 12 = 0xc
}
+ (id)providerForTypes:(id)types;	// 0x35c51d
- (void)_checkPlayerState;	// 0x35c955
- (id)_initWithTypes:(id)types;	// 0x35c6c5
- (void)_playerStateChanged:(id)changed;	// 0x35c905
- (id)controlFactory;	// 0x35c60d
- (id)dataAtIndex:(long)index;	// 0x35c675
- (long)dataCount;	// 0x35c65d
- (void)dealloc;	// 0x35c569
- (id)hashForDataAtIndex:(long)index;	// 0x35c6b9
@end

