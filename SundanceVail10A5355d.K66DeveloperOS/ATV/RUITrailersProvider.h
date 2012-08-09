/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface RUITrailersProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_trailers;	// 4 = 0x4
	id<BRControlFactory> _factory;	// 8 = 0x8
}
- (id)initWithData:(id)data controlFactory:(id)factory;	// 0xfbf85
- (id)controlFactory;	// 0xfc061
- (id)dataAtIndex:(long)index;	// 0xfc091
- (long)dataCount;	// 0xfc071
- (void)dealloc;	// 0xfbffd
- (id)hashForDataAtIndex:(long)index;	// 0xfc0b1
@end
