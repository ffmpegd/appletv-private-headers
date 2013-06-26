/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSDiscardableContent.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {
	NSString *_artKey;	// 4 = 0x4
	NSArray *_images;	// 8 = 0x8
	struct {
		unsigned isDiscarded : 1;
		unsigned useCount;
	} _flags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *artKey;	// G=0x32f214b5; @synthesize=_artKey
@property(retain, nonatomic) NSArray *images;	// G=0x32d4762d; S=0x32ca4291; @synthesize=_images
- (id)initWithArtKey:(id)artKey;	// 0x32ca3be1
// declared property getter: - (id)artKey;	// 0x32f214b5
- (BOOL)beginContentAccess;	// 0x32ca3c51
- (void)dealloc;	// 0x32e05851
- (void)discardContentIfPossible;	// 0x32e05829
- (void)endContentAccess;	// 0x32ca42f1
- (unsigned)hash;	// 0x32f21491
// declared property getter: - (id)images;	// 0x32d4762d
- (BOOL)isContentDiscarded;	// 0x32d47619
// declared property setter: - (void)setImages:(id)images;	// 0x32ca4291
@end
