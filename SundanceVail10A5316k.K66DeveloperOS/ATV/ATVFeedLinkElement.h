/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedLinkElement : ATVFeedElement {
	NSString *_url;	// 4 = 0x4
}
@property(copy, nonatomic) NSString *url;	// G=0x13c89d; S=0x13c8b1; @synthesize=_url
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x13c7f1
- (void)dealloc;	// 0x13c851
// declared property setter: - (void)setUrl:(id)url;	// 0x13c8b1
// declared property getter: - (id)url;	// 0x13c89d
@end
