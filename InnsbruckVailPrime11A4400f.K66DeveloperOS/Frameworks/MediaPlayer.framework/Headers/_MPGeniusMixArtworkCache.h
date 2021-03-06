/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>
#import "MediaPlayer-Structs.h"

@class UIImage, NSData;

@interface _MPGeniusMixArtworkCache : NSObject {
	NSData *_data;	// 4 = 0x4
	UIImage *_artworkImage;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) UIImage *artworkImage;	// G=0x2e2dfd9d; 
@property(readonly, assign, nonatomic) unsigned coverCount;	// G=0x2e2dff6d; 
@property(readonly, assign, nonatomic) CGSize coverSize;	// G=0x2e2e0035; 
@property(readonly, assign, nonatomic) unsigned long long entityArtworkCacheHash;	// G=0x2e2e0119; 
+ (id)artworkCacheWithContentsOfFile:(id)file;	// 0x2e2dfaa1
+ (id)artworkCacheWithCoverCount:(unsigned)coverCount coverSize:(CGSize)size entityArtworkCacheHash:(unsigned long long)hash artworkData:(void *)data length:(unsigned)length;	// 0x2e2df9a5
- (id)init;	// 0x2e2df935
- (void).cxx_destruct;	// 0x2e2e0209
// declared property getter: - (id)artworkImage;	// 0x2e2dfd9d
// declared property getter: - (unsigned)coverCount;	// 0x2e2dff6d
// declared property getter: - (CGSize)coverSize;	// 0x2e2e0035
// declared property getter: - (unsigned long long)entityArtworkCacheHash;	// 0x2e2e0119
- (BOOL)writeToFile:(id)file;	// 0x2e2e01e1
@end

