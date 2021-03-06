/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem;

@interface CoreDAVPrincipalSearchPropertyItem : CoreDAVItem {
	CoreDAVItem *_prop;	// 28 = 0x1c
	CoreDAVLeafItem *_descriptionItem;	// 32 = 0x20
}
@property(retain) CoreDAVLeafItem *descriptionItem;	// G=0x3341f2fd; S=0x3341f311; @synthesize=_descriptionItem
@property(retain) CoreDAVItem *prop;	// G=0x3341f2d9; S=0x3341f2ed; @synthesize=_prop
+ (id)copyParseRules;	// 0x3341f0cd
- (id)init;	// 0x3341ef61
- (void)dealloc;	// 0x3341ef8d
- (id)description;	// 0x3341eff1
// declared property getter: - (id)descriptionItem;	// 0x3341f2fd
// declared property getter: - (id)prop;	// 0x3341f2d9
// declared property setter: - (void)setDescriptionItem:(id)item;	// 0x3341f311
// declared property setter: - (void)setProp:(id)prop;	// 0x3341f2ed
@end

