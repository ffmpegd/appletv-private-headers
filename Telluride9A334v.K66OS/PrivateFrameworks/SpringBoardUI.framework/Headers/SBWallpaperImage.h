/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIImage.h> // Unknown library

@class NSData;

@interface SBWallpaperImage : UIImage {
	int _variant;	// 16 = 0x10
	NSData *_data;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x34324209; @synthesize=_data
@property(readonly, assign, nonatomic) int variant;	// G=0x34324219; @synthesize=_variant
+ (id)cachedWallpaperDataForVariant:(int)variant;	// 0x343242a1
+ (void)clearCachedWallpaper;	// 0x34324229
- (id)initWithVariant:(int)variant;	// 0x343243f1
// declared property getter: - (id)data;	// 0x34324209
- (void)dealloc;	// 0x343243a5
- (BOOL)isEqual:(id)equal;	// 0x343242e5
// declared property getter: - (int)variant;	// 0x34324219
@end
