/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRXMLMediaAsset.h"


@interface BRRSSMediaAsset : BRXMLMediaAsset {
@private
	BOOL _needsVolumeFading;	// 12 = 0xc
}
@property(assign) BOOL needsVolumeFading;	// G=0x3295680d; S=0x3295681d; converted property
+ (id)mediaAssetFromMediaProvider:(id)mediaProvider;	// 0x32956885
- (id)coverArt;	// 0x329568fd
- (id)description;	// 0x3295682d
- (long)duration;	// 0x329568bd
- (BOOL)hasVideoContent;	// 0x32956851
// converted property getter: - (BOOL)needsVolumeFading;	// 0x3295680d
// converted property setter: - (void)setNeedsVolumeFading:(BOOL)fading;	// 0x3295681d
@end
