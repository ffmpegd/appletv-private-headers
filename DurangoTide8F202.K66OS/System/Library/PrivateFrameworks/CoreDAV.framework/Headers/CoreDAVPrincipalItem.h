/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_all;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_authenticated;	// 32 = 0x20
	CoreDAVItemWithNoChildren *_unauthenticated;	// 36 = 0x24
	CoreDAVItem *_property;	// 40 = 0x28
	CoreDAVItemWithNoChildren *_selfItem;	// 44 = 0x2c
}
@property(retain) CoreDAVItemWithNoChildren *all;	// G=0x317b468d; S=0x317b4731; @synthesize=_all
@property(retain) CoreDAVItemWithNoChildren *authenticated;	// G=0x317b46a5; S=0x317b475d; @synthesize=_authenticated
@property(retain) CoreDAVHrefItem *href;	// G=0x317b4675; S=0x317b4705; @synthesize=_href
@property(retain) CoreDAVItem *property;	// G=0x317b46d5; S=0x317b47b5; @synthesize=_property
@property(retain) CoreDAVItemWithNoChildren *selfItem;	// G=0x317b46ed; S=0x317b47e1; @synthesize=_selfItem
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x317b46bd; S=0x317b4789; @synthesize=_unauthenticated
- (id)init;	// 0x317b444d
- (id)initTypeIsAll;	// 0x317b43d1
- (id)initTypeIsAuthenticated;	// 0x317b42c1
- (id)initTypeIsHREFWithURL:(id)url;	// 0x317b4369
- (id)initTypeIsProperty:(id)property;	// 0x317b433d
- (id)initTypeIsSelf;	// 0x317b41c9
- (id)initTypeIsUnauthenticated;	// 0x317b4245
// declared property getter: - (id)all;	// 0x317b468d
// declared property getter: - (id)authenticated;	// 0x317b46a5
- (id)copyParseRules;	// 0x317b3d81
- (void)dealloc;	// 0x317b45dd
- (id)description;	// 0x317b4479
- (id)hashString;	// 0x317b3c59
// declared property getter: - (id)href;	// 0x317b4675
// declared property getter: - (id)property;	// 0x317b46d5
// declared property getter: - (id)selfItem;	// 0x317b46ed
// declared property setter: - (void)setAll:(id)all;	// 0x317b4731
// declared property setter: - (void)setAuthenticated:(id)authenticated;	// 0x317b475d
// declared property setter: - (void)setHref:(id)href;	// 0x317b4705
// declared property setter: - (void)setProperty:(id)property;	// 0x317b47b5
// declared property setter: - (void)setSelfItem:(id)item;	// 0x317b47e1
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x317b4789
// declared property getter: - (id)unauthenticated;	// 0x317b46bd
- (void)write:(id)write;	// 0x317b405d
@end
