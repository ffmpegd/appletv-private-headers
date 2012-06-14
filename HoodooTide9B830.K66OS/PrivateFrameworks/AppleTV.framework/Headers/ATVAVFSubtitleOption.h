/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSubtitleOption.h"

@class AVMediaSelectionOption;

@interface ATVAVFSubtitleOption : ATVSubtitleOption {
@private
	AVMediaSelectionOption *_selectionOption;	// 24 = 0x18
}
+ (id)emptySubtitleOption;	// 0x32ac1e15
+ (id)subtitleOptionFromOption:(id)option;	// 0x32ac1e51
- (id)initWithOption:(id)option;	// 0x32ac1e8d
- (id)_selectionOption;	// 0x32ac2055
- (void)dealloc;	// 0x32ac1ee1
- (BOOL)isEqual:(id)equal;	// 0x32ac1f2d
- (id)languageCode;	// 0x32ac2011
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x32ac1fb5
@end
