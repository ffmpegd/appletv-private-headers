/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImage.h> // Unknown library


@interface UIImage (MPUtilities)
+ (id)imageFromAlbumArtData:(id)albumArtData artworkInfo:(MLArtworkInstanceInfo *)info;	// 0x33ba6071
- (CGRect)bitmapRectFromImageRect:(CGRect)imageRect;	// 0x33ba6299
- (CGRect)imageRectFromBitmapRect:(CGRect)bitmapRect;	// 0x33ba62f1
- (id)imageWithRect:(CGRect)rect;	// 0x33ba5ff1
@end

@interface UIImage (MMPAdditions)
- (BOOL)isCoverflowPlaceholder;	// 0x33c3e4b1
@end

@interface UIImage (MPImageCacheAdditions)
@property(assign, nonatomic) BOOL isPlaceholder;	// G=0x33c4dded; S=0x33c4dda5; 
@property(assign, nonatomic) CGRect mediaImageSubRect;	// G=0x33c4dc21; S=0x33c4dd15; 
@property(assign, nonatomic) double mediaImageTime;	// G=0x33c4dcd9; S=0x33c4dd69; 
// declared property getter: - (BOOL)isPlaceholder;	// 0x33c4dded
// declared property getter: - (CGRect)mediaImageSubRect;	// 0x33c4dc21
// declared property getter: - (double)mediaImageTime;	// 0x33c4dcd9
// declared property setter: - (void)setIsPlaceholder:(BOOL)placeholder;	// 0x33c4dda5
// declared property setter: - (void)setMediaImageSubRect:(CGRect)rect;	// 0x33c4dd15
// declared property setter: - (void)setMediaImageTime:(double)time;	// 0x33c4dd69
@end

