/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRBaseMediaCollection.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixMediaCollection : BRBaseMediaCollection {
@private
	NSArray *_assets;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
}
@property(readonly, retain) NSString *title;	// G=0x3331a8a5; converted property
- (id)initWithAssets:(id)assets andTitle:(id)title;	// 0x3331a7a1
- (id)collectionType;	// 0x3331a879
- (void)dealloc;	// 0x3331a819
- (id)mediaAssets;	// 0x3331a895
// converted property getter: - (id)title;	// 0x3331a8a5
@end

