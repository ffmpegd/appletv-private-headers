/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImagePreviewElement : ATVFeedElement {
	ATVFeedImageElement *_image;	// 4 = 0x4
	NSString *_label;	// 8 = 0x8
}
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x12c795; S=0x12c7a5; @synthesize=_image
@property(retain, nonatomic) NSString *label;	// G=0x12c7cd; S=0x12c7dd; @synthesize=_label
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x12c64d
- (void).cxx_destruct;	// 0x12c805
// declared property getter: - (id)image;	// 0x12c795
// declared property getter: - (id)label;	// 0x12c7cd
// declared property setter: - (void)setImage:(id)image;	// 0x12c7a5
// declared property setter: - (void)setLabel:(id)label;	// 0x12c7dd
@end
