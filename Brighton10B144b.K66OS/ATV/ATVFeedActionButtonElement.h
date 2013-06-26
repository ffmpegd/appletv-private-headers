/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedActionButtonElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_subtitle;	// 8 = 0x8
	ATVFeedImageElement *_image;	// 12 = 0xc
	ATVFeedImageElement *_focusedImage;	// 16 = 0x10
	NSString *_badge;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *badge;	// G=0x164235; S=0x164245; @synthesize=_badge
@property(retain, nonatomic) ATVFeedImageElement *focusedImage;	// G=0x164215; S=0x164225; @synthesize=_focusedImage
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x1641f5; S=0x164205; @synthesize=_image
@property(copy, nonatomic) NSString *subtitle;	// G=0x1641d1; S=0x1641e5; @synthesize=_subtitle
@property(copy, nonatomic) NSString *title;	// G=0x1641ad; S=0x1641c1; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x163f7d
// declared property getter: - (id)badge;	// 0x164235
- (void)dealloc;	// 0x16410d
// declared property getter: - (id)focusedImage;	// 0x164215
// declared property getter: - (id)image;	// 0x1641f5
// declared property setter: - (void)setBadge:(id)badge;	// 0x164245
// declared property setter: - (void)setFocusedImage:(id)image;	// 0x164225
// declared property setter: - (void)setImage:(id)image;	// 0x164205
// declared property setter: - (void)setSubtitle:(id)subtitle;	// 0x1641e5
// declared property setter: - (void)setTitle:(id)title;	// 0x1641c1
// declared property getter: - (id)subtitle;	// 0x1641d1
// declared property getter: - (id)title;	// 0x1641ad
@end
