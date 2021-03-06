/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageElement : ATVFeedElement {
	NSString *_url;	// 4 = 0x4
	NSString *_src1080;	// 8 = 0x8
	NSString *_src720;	// 12 = 0xc
	NSString *_src;	// 16 = 0x10
	BOOL _required;	// 20 = 0x14
	NSString *_style;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL required;	// G=0x165ca5; S=0x165cb5; @synthesize=_required
@property(copy, nonatomic) NSString *src;	// G=0x165c81; S=0x165c95; @synthesize=_src
@property(copy, nonatomic) NSString *src1080;	// G=0x165c39; S=0x165c4d; @synthesize=_src1080
@property(copy, nonatomic) NSString *src720;	// G=0x165c5d; S=0x165c71; @synthesize=_src720
@property(copy, nonatomic) NSString *style;	// G=0x165cc5; S=0x165cd9; @synthesize=_style
@property(copy, nonatomic) NSString *url;	// G=0x165be5; S=0x165c29; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x16580d
- (void)dealloc;	// 0x165b45
// declared property getter: - (BOOL)required;	// 0x165ca5
// declared property setter: - (void)setRequired:(BOOL)required;	// 0x165cb5
// declared property setter: - (void)setSrc1080:(id)a1080;	// 0x165c4d
// declared property setter: - (void)setSrc720:(id)a720;	// 0x165c71
// declared property setter: - (void)setSrc:(id)src;	// 0x165c95
// declared property setter: - (void)setStyle:(id)style;	// 0x165cd9
// declared property setter: - (void)setUrl:(id)url;	// 0x165c29
// declared property getter: - (id)src;	// 0x165c81
// declared property getter: - (id)src1080;	// 0x165c39
// declared property getter: - (id)src720;	// 0x165c5d
// declared property getter: - (id)style;	// 0x165cc5
// declared property getter: - (id)url;	// 0x165be5
@end

