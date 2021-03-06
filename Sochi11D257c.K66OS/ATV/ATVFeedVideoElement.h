/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoElement : ATVFeedElement {
	NSString *_caption;	// 4 = 0x4
	NSArray *_badges;	// 8 = 0x8
	NSArray *_previewImages;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *badges;	// G=0x1460e9; S=0x1460f9; @synthesize=_badges
@property(retain, nonatomic) NSString *caption;	// G=0x1460b1; S=0x1460c1; @synthesize=_caption
@property(retain, nonatomic) NSArray *previewImages;	// G=0x146121; S=0x146131; @synthesize=_previewImages
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x145d95
- (void).cxx_destruct;	// 0x146159
// declared property getter: - (id)badges;	// 0x1460e9
// declared property getter: - (id)caption;	// 0x1460b1
// declared property getter: - (id)previewImages;	// 0x146121
// declared property setter: - (void)setBadges:(id)badges;	// 0x1460f9
// declared property setter: - (void)setCaption:(id)caption;	// 0x1460c1
// declared property setter: - (void)setPreviewImages:(id)images;	// 0x146131
@end

