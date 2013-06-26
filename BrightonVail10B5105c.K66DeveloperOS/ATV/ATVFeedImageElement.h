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
@property(assign, nonatomic) BOOL required;	// G=0x160bad; S=0x160bbd; @synthesize=_required
@property(copy, nonatomic) NSString *src;	// G=0x160b89; S=0x160b9d; @synthesize=_src
@property(copy, nonatomic) NSString *src1080;	// G=0x160b41; S=0x160b55; @synthesize=_src1080
@property(copy, nonatomic) NSString *src720;	// G=0x160b65; S=0x160b79; @synthesize=_src720
@property(copy, nonatomic) NSString *style;	// G=0x160bcd; S=0x160be1; @synthesize=_style
@property(copy, nonatomic) NSString *url;	// G=0x160aed; S=0x160b31; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x160715
- (void)dealloc;	// 0x160a4d
// declared property getter: - (BOOL)required;	// 0x160bad
// declared property setter: - (void)setRequired:(BOOL)required;	// 0x160bbd
// declared property setter: - (void)setSrc1080:(id)a1080;	// 0x160b55
// declared property setter: - (void)setSrc720:(id)a720;	// 0x160b79
// declared property setter: - (void)setSrc:(id)src;	// 0x160b9d
// declared property setter: - (void)setStyle:(id)style;	// 0x160be1
// declared property setter: - (void)setUrl:(id)url;	// 0x160b31
// declared property getter: - (id)src;	// 0x160b89
// declared property getter: - (id)src1080;	// 0x160b41
// declared property getter: - (id)src720;	// 0x160b65
// declared property getter: - (id)style;	// 0x160bcd
// declared property getter: - (id)url;	// 0x160aed
@end
