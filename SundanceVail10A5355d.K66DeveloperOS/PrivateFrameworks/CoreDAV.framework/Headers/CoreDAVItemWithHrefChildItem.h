/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 28 = 0x1c
}
@property(retain) CoreDAVHrefItem *href;	// G=0x304a8471; S=0x304a8485; @synthesize=_href
+ (id)copyParseRules;	// 0x304a823d
- (void)dealloc;	// 0x304a813d
- (id)description;	// 0x304a8189
// declared property getter: - (id)href;	// 0x304a8471
// declared property setter: - (void)setHref:(id)href;	// 0x304a8485
- (void)write:(id)write;	// 0x304a83c9
@end

