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
@property(retain, nonatomic) NSArray *badges;	// G=0x3ee6f9; S=0x3ee709; @synthesize=_badges
@property(retain, nonatomic) NSString *caption;	// G=0x3ee6c1; S=0x3ee6d1; @synthesize=_caption
@property(retain, nonatomic) NSArray *previewImages;	// G=0x3ee731; S=0x3ee741; @synthesize=_previewImages
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3ee371
- (void).cxx_destruct;	// 0x3ee769
// declared property getter: - (id)badges;	// 0x3ee6f9
// declared property getter: - (id)caption;	// 0x3ee6c1
// declared property getter: - (id)previewImages;	// 0x3ee731
// declared property setter: - (void)setBadges:(id)badges;	// 0x3ee709
// declared property setter: - (void)setCaption:(id)caption;	// 0x3ee6d1
// declared property setter: - (void)setPreviewImages:(id)images;	// 0x3ee741
@end

