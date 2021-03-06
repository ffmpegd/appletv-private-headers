/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRXMLMediaAsset.h"

@class ATVImage;

__attribute__((visibility("hidden")))
@interface RUIYTMediaAsset : BRXMLMediaAsset {
	unsigned char _validThumbnailsFound;	// 12 = 0xc
	ATVImage *_smallThumbnailArtImage;	// 16 = 0x10
	BOOL _isFavorite;	// 20 = 0x14
}
@property(assign) BOOL isFavorite;	// G=0x28dce1; S=0x28dcd1; converted property
@property(readonly, retain) ATVImage *smallThumbnailArtImage;	// G=0x28dc09; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x28d3b1
- (void).cxx_destruct;	// 0x28dcf1
- (void)addThumbnailAttribute:(id)attribute;	// 0x28d41d
- (id)authorName;	// 0x28d8a9
- (id)category;	// 0x28dac9
- (void)clearSmallCoverArtImage;	// 0x28dc4d
- (id)datePublished;	// 0x28da75
- (long)duration;	// 0x28d7dd
- (int)grFormat;	// 0x28dba1
// converted property getter: - (BOOL)isFavorite;	// 0x28dce1
- (BOOL)isInappropriate;	// 0x28db35
- (id)keywords;	// 0x28da21
- (id)mediaType;	// 0x28d401
- (void)numberOfLikes:(int *)likes numberOfDislikes:(int *)dislikes;	// 0x28d845
- (id)objectForKey:(id)key;	// 0x28dc65
// converted property setter: - (void)setIsFavorite:(BOOL)favorite;	// 0x28dcd1
// converted property getter: - (id)smallThumbnailArtImage;	// 0x28dc09
- (id)viewCount;	// 0x28d8fd
@end

