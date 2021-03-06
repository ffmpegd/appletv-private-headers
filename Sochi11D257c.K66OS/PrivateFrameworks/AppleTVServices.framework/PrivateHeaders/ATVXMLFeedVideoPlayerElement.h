/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVXMLFeedRootElement.h"

@class ATVXMLFeedVideoAssetElement;

@interface ATVXMLFeedVideoPlayerElement : ATVXMLFeedRootElement {
	ATVXMLFeedVideoAssetElement *_video;	// 24 = 0x18
}
@property(retain, nonatomic) ATVXMLFeedVideoAssetElement *video;	// G=0x30467aed; S=0x30467afd; @synthesize=_video
- (id)initWithXMLElement:(id)xmlelement feedDocument:(id)document;	// 0x30467995
- (void).cxx_destruct;	// 0x30467b25
- (id)description;	// 0x30467a65
// declared property setter: - (void)setVideo:(id)video;	// 0x30467afd
// declared property getter: - (id)video;	// 0x30467aed
@end

