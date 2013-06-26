/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedPhotoElement : ATVFeedElement {
	NSString *_caption;	// 4 = 0x4
	NSArray *_badges;	// 8 = 0x8
	NSArray *_assets;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *assets;	// G=0x3de715; S=0x3de725; @synthesize=_assets
@property(retain, nonatomic) NSArray *badges;	// G=0x3de6dd; S=0x3de6ed; @synthesize=_badges
@property(retain, nonatomic) NSString *caption;	// G=0x3de6a5; S=0x3de6b5; @synthesize=_caption
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3de355
- (void).cxx_destruct;	// 0x3de74d
// declared property getter: - (id)assets;	// 0x3de715
// declared property getter: - (id)badges;	// 0x3de6dd
// declared property getter: - (id)caption;	// 0x3de6a5
// declared property setter: - (void)setAssets:(id)assets;	// 0x3de725
// declared property setter: - (void)setBadges:(id)badges;	// 0x3de6ed
// declared property setter: - (void)setCaption:(id)caption;	// 0x3de6b5
@end
