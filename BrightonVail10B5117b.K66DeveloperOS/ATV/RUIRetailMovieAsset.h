/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"

@class NSURL;

__attribute__((visibility("hidden")))
@interface RUIRetailMovieAsset : BRBaseMediaAsset {
	NSURL *_mediaURL;	// 8 = 0x8
}
@property(readonly, retain) NSURL *mediaURL;	// G=0x3b4095; converted property
- (id)initWithMediaURL:(id)mediaURL;	// 0x3b4029
- (void).cxx_destruct;	// 0x3b40f5
- (id)assetID;	// 0x3b40d5
- (BOOL)hasVideoContent;	// 0x3b40d1
- (id)mediaType;	// 0x3b40b5
// converted property getter: - (id)mediaURL;	// 0x3b4095
@end

