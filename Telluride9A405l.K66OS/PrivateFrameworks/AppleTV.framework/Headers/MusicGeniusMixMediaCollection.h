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
@property(readonly, retain) NSString *title;	// G=0x35f115ad; converted property
- (id)initWithAssets:(id)assets andTitle:(id)title;	// 0x35f114a9
- (id)collectionType;	// 0x35f11581
- (void)dealloc;	// 0x35f11521
- (id)mediaAssets;	// 0x35f1159d
// converted property getter: - (id)title;	// 0x35f115ad
@end

